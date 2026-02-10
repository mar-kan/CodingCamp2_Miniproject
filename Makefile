# Compiler
CXX = g++

# Compiler flags
# -g for debugging, -Wall for all warnings
CXXFLAGS = -std=c++11 -g -Wall

# List of all source files
SRCS = $(wildcard *.cpp)

# Generate list of object files (.o) from source files (.cpp)
OBJS = $(SRCS:.cpp=.o)

# Name of the final executable
TARGET = library_system

# Default rule: build the executable
all: $(TARGET)

# Link the object files to create the executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(TARGET) $(OBJS)

# Compile each .cpp file into an .o file
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Clean up build files
clean:
	rm -f $(OBJS) $(TARGET)