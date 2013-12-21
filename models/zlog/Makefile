DIR=$(shell pwd)

SRC=$(wildcard *.cpp)

OBJS=$(patsubst %.cpp,%.o,$(SRC))

LIBS=

INCLUDE_PATH=-I/home/zhaoeason/boost_1_55_0

CFLAGS=-g -DBOOST_ALL_NO_LIB

TARGET=test.out

all:$(OBJS)
	@echo $(OBJS)
	g++ $(CFLAGS) $(OBJS) -L/usr/lib $(LIBS) -o $(TARGET)

%.o:%.cpp
	g++ -c $(CFLAGS) $< -o $@ $(INCLUDE_PATH)

clean:
	rm -rf $(OBJS) $(TARGET)
