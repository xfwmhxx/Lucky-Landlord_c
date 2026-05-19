CXX      := g++
CC       := gcc
CXXFLAGS := -std=c++14 -O2
TARGET   := luckyhome.exe
SRCS     := $(wildcard *.cpp)
OBJS     := $(SRCS:.cpp=.o)

.PHONY: all clean run

all: $(TARGET)

easyx_compat.o: easyx_compat.c
	$(CC) -c $< -o $@

$(TARGET): $(OBJS) easyx_compat.o
	$(CXX) $(CXXFLAGS) -o $@ $^ -leasyx -lgdi32 -lole32

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f *.o $(TARGET)
