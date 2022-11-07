# make:
# 	g++ *.cpp -o Test/test.o
# run:
# 	./test.o
# clean:
# 	rm *.o
# all:
# 	make && make run && make clean

main: *.o
	g++ -std=c++11 -o main *.o
*.o: *.cpp
	g++ -c -std=c++11 -static *.cpp
run:
	./main
clean:
	rm *.o
all:
	make && make run && make clean