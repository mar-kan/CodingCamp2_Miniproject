# Coding Camp 2 Miniproject
## Library Management System

A C++ project implementing a modular library system with members and books using object-oriented principles.

## File Structure
- `AbstractLibrary.h`: The interface (abstract class) defining the library contract.
- `MyLibrary.h/cpp`: The concrete implementation of the library logic.
- `Book.h/cpp`: Logic for book entities.
- `Member.h/cpp`: Base class for all library members.
- `RegularMember.h/cpp` & `PremiumMember.h/cpp`: Specialized member types.
- `main.cpp`: The entry point for the application containing tests.
- `Makefile`: Script to compile and link all components.

## Build and Run

### Prerequisites
Ensure you have `g++` and `make` installed on your system.

### Compiling
To build the executable, run:
```bash
make
```

To execute, run:
```bash
./library_system
```

To clean up objetive files, run:
```bash
make clean
```
