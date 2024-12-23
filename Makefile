EditDistance: EditDistance.o
	g++ -g -o EditDistance.exe EditDistance.o -pthread    

EditDistance.o: EditDistance/EditDistance.cpp
	g++ -g  -c -pthread EditDistance/EditDistance.cpp
