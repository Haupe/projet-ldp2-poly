CXX = g++
CXXFLAGS = -std='c++20' -Wall -Wextra -pedantic
LDFLAGS  = -lfltk

sukoban : main.cpp levelwindow.o
	${CXX} main.cpp levelwindow.o canvas.o map.o case.o element.o shape.o -o sukoban ${CXXFLAGS} ${LDFLAGS}

levelwindow.o: levelwindow.cpp levelwindow.hpp canvas.o
	${CXX} -c levelwindow.cpp ${CXXFLAGS} ${LDFLAGS}

canvas.o: canvas.cpp canvas.hpp map.o
	${CXX} -c canvas.cpp ${CXXFLAGS} ${LDFLAGS}

map.o: map.cpp map.hpp case.o
	${CXX} -c map.cpp ${CXXFLAGS} ${LDFLAGS}

case.o: case.cpp case.hpp element.o
	${CXX} -c case.cpp ${CXXFLAGS} ${LDFLAGS}

element.o: element.cpp element.hpp shape.o
	${CXX} -c element.cpp ${CXXFLAGS} ${LDFLAGS}

shape.o: shape.cpp shape.hpp
	${CXX} -c shape.cpp ${CXXFLAGS} ${LDFLAGS}

tests: tests.cpp map.o
	${CXX} tests.cpp map.o case.o element.o shape.o -o tests ${CXXFLAGS} ${LDFLAGS}