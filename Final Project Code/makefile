test: test.o LaunchReanactment.o State.o Memento.o Caretaker.o War.o Command.o ResumeCommand.o PauseCommand.o UndoCommand.o
	g++ -o test test.o LaunchReanactment.o State.o Memento.o Caretaker.o War.o Command.o ResumeCommand.o PauseCommand.o UndoCommand.o

test.o: test.cpp LaunchReanactment.h Command.h War.h Caretaker.h
	g++ -c test.cpp
	
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

ResumeCommand.o: ResumeCommand.cpp ResumeCommand.h Command.h
	g++ -c ResumeCommand.cpp

PauseCommand.o: PauseCommand.cpp PauseCommand.h Command.h
	g++ -c PauseCommand.cpp

UndoCommand.o: UndoCommand.cpp UndoCommand.h Command.h
	g++ -c UndoCommand.cpp

run: test
	./test
	
clear: *.o
	rm *.o test
	
clear: *.o
	rm *.o main
