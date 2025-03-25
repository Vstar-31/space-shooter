# Makefile for Space Shooter

# Compiler
CXX = g++

# Compiler flags
CXXFLAGS = -std=c++11 -Iinclude

# Source files
SRCS = src/main.cpp src/Player.cpp src/Enemy.cpp src/Bullet.cpp src/Game.cpp

# Output executable
TARGET = space_shooter

# Build target
all: $(TARGET)

$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS) -lsfml-graphics -lsfml-window -lsfml-system -lsfml-audio

# Clean up
clean:
	rm -f $(TARGET)