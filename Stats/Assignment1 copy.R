# Assignment 1 

# Name: Bandisa P Masilela  
# Student Number: u19028182

# Data and Packages:

titles <- read.csv("titles.csv")

# Question 1:

# Find the title of the show or movie with the shortest run-time. Save your response into a
# variable called Q1

Q1 <- titles[which.min(titles$runtime), 2]

# Question 2:

# Find the title of the movie with the shortest run-time. Save your response into a variable called
# Q2
movies <- titles[titles$type == "MOVIE",]
Q2 <- movies[which.min(movies$runtime), 2]

# Question 3:

#  Find the number of movies within the dataset. Save your response in a variable called Q3

Q3 <- nrow(movies)

# Question 4:

# Create a histogram to investigate the distribution of IMDB ratings. Use breaks = 50.

hist(titles$imdb_score, breaks = 50, col = "blue", xlab = "IMDB ratings", main = "Histogram of IMDB ratings")

#  Investigate the impact changing the argument breaks has on the plot. Consider break values
# of 5, 10, 50 and 100.

# hist(titles$imdb_score, breaks = 50, col = "blue", xlab = "IMDB ratings", main = "Histogram of IMDB ratings with a break of 5")
# hist(titles$imdb_score, breaks = 50, col = "blue", xlab = "IMDB ratings", main = "Histogram of IMDB ratings with a break of 10")
# hist(titles$imdb_score, breaks = 50, col = "blue", xlab = "IMDB ratings", main = "Histogram of IMDB ratings with a break of 50")
# hist(titles$imdb_score, breaks = 50, col = "blue", xlab = "IMDB ratings", main = "Histogram of IMDB ratings with a break of 100")


# Question 5:

# Create a side-by-side boxplot to compare the IMDB ratings for movies against the IMDB
# ratings for TV shows. Make sure to add a legend to your plot.
#  Using the boxplot, what can be concluded regarding the IMDB ratings of movies and TV
# shows?
shows <- titles[titles$type == "SHOW", ]
boxplot(movies$imdb_score,shows$imdb_score,horizontal = TRUE, names=c("MOVIES","SHOWS"),xlab="IMDB Ratings", col=c("blue","red")) # nolint
legend("topright",c("MOVIES","SHOWS"),border = "black",fill=c("blue","red"))
# Question 6:

# Calculate the mean number of seasons a TV show has. Save your response in a variable called
# Q6
# Hint: The variable seasons contains missing values. Remove these from your calculation without
# altering the titles dataset.

Q6 <- mean(shows$seasons, na.rm=TRUE)

# Question 7:

# Calculate the mean run-time. Save your response in a variable called Q7

Q7 <- mean(titles$runtime, na.rm=TRUE)

# Question 8:

# Calculate the standard deviation for the run-time. Save your response in a variable called Q8

Q8 <- sd(titles$runtime)

# Question 9:

# Calculate the percentage of releases whose run-time lies within 2 standard deviations of the
# mean. Ensure the answer provided is between 0 and 100. Save your response in a variable called
# Q9
x_min <- -2*Q8+Q7
x_max <- 2*Q8+Q7
Q9 <- (pnorm(x_max,mean=Q7,sd=Q8)-pnorm(x_min,mean=Q7,sd=Q8))*100
# Question 10:

# Calculate the most common age certification. Save your response into a variable Q10
age <- sort(titles$age_certification)

age_types<- unique(age) #age types with no repitition
# age_types_count <- rep.int(0,length(age_types)) #parallel vector to hold count for each aget_types index  # nolint
# foreach(i=1:length(age))  %do%
#     if(age[i] %in% age_types){
#         age_types_count <- replace(age_types_count,which(age_types == age[i]), age_types_count[which(age_types == age[i])]+1) # nolint
#     } else{
#        age_types_count <- replace(age_types_count,which(age_types == age[i]),1)
#     }
    
# Q10 <- age_types[which.max(age_types_count)]
#m <- match(age, age_types) finds the 1st occurrance of each data value, and return an index, mappped to vector 1, meaning match(c(1,2,3,4),c(2,2,1))
# will return array of [1,5], with the index each value was found on, at the index it occurs
# so match c(2,1,2), c(8,2,9,5,2) will return c(2,NA,2)
# but match c(8,2,9,5,2), c(2,1) will return c(NA,1,NA,NA,1)

tab <- tabulate(match(age, age_types)) #create an array with the count of each index from match to find most occuring
Q10 <- age_types[which.max(tab)]