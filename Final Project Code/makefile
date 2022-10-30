main: main.o LaunchReanactment.o State.o Memento.o Caretaker.o War.o Command.o
	g++ -o main main.o LaunchReanactment.o State.o Memento.o Caretaker.o War.o Command.o

main.o: main.cpp LaunchReanactment.h Command.h LaunchReanactment.h Caretaker.h War.h
	g++ -c main.cpp
	
LaunchReanactment.o: LaunchReanactment.cpp LaunchReanactment.h Command.h
	g++ -c LaunchReanactment.cpp

State.o: State.cpp State.h
	g++ -c State.cpp
	
Memento.o: Memento.cpp Memento.h State.h
	g++ -c Memento.cpp

Caretaker.o: Caretaker.cpp Caretaker.h Memento.h
	g++ -c Caretaker.cpp

War.o: War.cpp War.h
	g++ -c War.cpp

Command.o: Command.cpp Command.h Caretaker.h War.h
	g++ -c Command.cpp

run: main
	./main
	
clear: *.o
	rm *.o main
