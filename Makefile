CXX = g++

CXXFLAGS = -Wall -O2 -std=c++17

$@: $(CXX) $(CXXFLAGS) $@.cpp

Ext: Extern1.o Extern2.o
	g++ -o Ext Extern1.o Extern2.o

Ext1.o: Extern1.cpp
	g++ -c Extern1.o

Ext2.o: Extern2.cpp
	g++ -c Extern2.o

