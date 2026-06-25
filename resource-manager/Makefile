CXX = g++

CXXFLAGS = -std=c++17 -Wall -Wextra

TARGET = main.exe

SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	del /Q $(TARGET) 2>nul

rebuild: clean all
