# Name: Bandisa P Masilela  
# Student Number: u19028182
#Source: https://worldpopulationreview.com/country-rankings/military-size-by-country
countries <- read.csv("csvData.csv")
#R, excel and numbers are all picking up the last comma as a decimal point, which is wrong
active_duty_fraction <-countries$activeDuty/(countries$pop2022*100)
active_duty_avg <- mean(active_duty_fraction)*100 #avg military size as a % of the population
active_duty_std <- sd(active_duty_fraction)*100

total_personel_fraction <-countries$total/(countries$pop2022*100)
total_personel_avg <- mean(total_personel_fraction)*100
total_personel_std <- sd(total_personel_fraction)*100

#this is used to calculate and justify any metric that we might need when it comes to a country and its military size
#total_personel_avg will be used to determine the number of theaters, rounded up
#active_duty_avg will be used to determine the size of theaeters in a country, rounded up
