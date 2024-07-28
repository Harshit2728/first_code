
CXX = g++
CXXFLAGS = -Wall -Iinclude

SRCS = src/main.cpp src/hotel.cpp
OBJS = $(SRCS:.cpp=.o)
TARGET = hotel_management

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

clean:
	rm -f $(OBJS) $(TARGET)
