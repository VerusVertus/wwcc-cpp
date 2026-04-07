
# Compiler and flags
CXX = g++
CXXFLAGS = -Wall -std=c++17
 
# Target executable
TARGET = build/makefile_demoCompiled
 
# Source files
SRCS = makefile_demo.cpp
 
# Build rule
$(TARGET): $(SRCS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(SRCS)
 
# Clean rule to remove compiled files
clean:
	rm -f $(TARGET)