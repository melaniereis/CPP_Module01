# 🧟 CPP Module 01 - Memory Allocation, References, Pointers

<div align="center">

![C++](https://img.shields.io/badge/c++-%2300599C.svg?style=for-the-badge&logo=c%2B%2B&logoColor=white)
![42 School](https://img.shields.io/badge/42-School-000000?style=for-the-badge&logo=42&logoColor=white)
![Module](https://img.shields.io/badge/Module-01-blue?style=for-the-badge)
![Status](https://img.shields.io/badge/Status-Completed-success?style=for-the-badge)

*Mastering Memory Management and References*

</div>

## 📖 Overview

**CPP Module 01** dives deep into memory management, one of the most crucial aspects of C++ programming. This module introduces **dynamic memory allocation**, **references**, **pointers**, and file I/O operations while reinforcing object-oriented programming concepts through practical zombie-themed exercises.

### 🎯 Learning Objectives

- Master dynamic memory allocation with `new` and `delete`
- Understand the difference between references and pointers
- Learn proper memory management techniques
- Practice file I/O operations
- Implement function pointers and member function pointers
- Explore object composition and relationships

## 💡 Key Concepts Introduced

- **Dynamic Memory Allocation**: `new` and `delete` operators
- **References**: Aliases to existing variables
- **Pointers vs References**: When and how to use each
- **Memory Leaks**: Prevention and detection
- **File Streams**: Reading and writing files
- **Function Pointers**: Storing and calling functions dynamically
- **Object Composition**: Building complex objects from simpler ones

## 🚀 Exercises

### 🧟‍♂️ Exercise 00: BraiiiiiiinnnzzzZ
**Files**: `Zombie.cpp`, `Zombie.hpp`, `main.cpp`, `newZombie.cpp`, `randomChump.cpp`

Introduction to dynamic memory allocation through zombie creation, demonstrating:
- Stack vs Heap allocation
- Object lifecycle management
- Dynamic memory allocation with `new`
- Proper memory deallocation with `delete`

**Key Functions**:
```cpp
Zombie* newZombie(std::string name);     // Heap allocation
void randomChump(std::string name);      // Stack allocation
```

**Zombie Class**:
```cpp
class Zombie {
private:
    std::string _name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    void announce(void);
};
```

**Usage Example**:
```bash
./zombie
# Creates zombies on stack and heap
# Demonstrates proper memory management
```

**Key Learning Points**:
- Understanding stack vs heap allocation
- Object lifetime and scope
- Proper use of constructors and destructors
- Memory management responsibility

---

### 🧟‍♀️ Exercise 01: Moar Brainz!
**Files**: `Zombie.cpp`, `Zombie.hpp`, `main.cpp`, `zombieHorde.cpp`

Advanced memory management with arrays of objects, showcasing:
- Dynamic array allocation
- Object initialization in arrays
- Bulk memory management
- Array traversal and cleanup

**Key Function**:
```cpp
Zombie* zombieHorde(int N, std::string name);
```

**Features**:
- Create N zombies with the same name
- Each zombie gets a unique identifier
- All zombies stored in a single heap allocation
- Proper cleanup of entire horde

**Usage Example**:
```bash
./zombie_horde
# Creates a horde of zombies
# Each announces itself with unique ID
# Proper memory cleanup demonstrated
```

**Key Learning Points**:
- Dynamic array allocation with `new[]`
- Array deallocation with `delete[]`
- Object initialization in arrays
- Bulk memory management strategies

---

### 🧠 Exercise 02: HI THIS IS BRAIN
**Files**: `main.cpp`

Exploration of references and pointers, demonstrating:
- Reference declarations and usage
- Pointer operations and dereferencing
- Memory address comparison
- Value access through different methods

**Code Structure**:
```cpp
std::string str = "HI THIS IS BRAIN";
std::string* stringPTR = &str;
std::string& stringREF = str;

// Memory addresses
std::cout << "str address: " << &str << std::endl;
std::cout << "stringPTR: " << stringPTR << std::endl;
std::cout << "stringREF address: " << &stringREF << std::endl;

// Values
std::cout << "str value: " << str << std::endl;
std::cout << "*stringPTR: " << *stringPTR << std::endl;
std::cout << "stringREF: " << stringREF << std::endl;
```

**Key Learning Points**:
- References are aliases, not separate objects
- Pointer arithmetic and dereferencing
- Memory address relationships
- Different ways to access the same data

---

### ⚔️ Exercise 03: Unnecessary Violence
**Files**: `HumanA.cpp`, `HumanA.hpp`, `HumanB.cpp`, `HumanB.hpp`, `Weapon.cpp`, `Weapon.hpp`, `main.cpp`

Object composition and reference/pointer usage, demonstrating:
- Object relationships and composition
- Reference members vs pointer members
- Weapon switching and sharing
- Different initialization patterns

**Classes Design**:

#### `Weapon` Class
```cpp
class Weapon {
private:
    std::string _type;

public:
    Weapon(std::string type);
    ~Weapon(void);
    const std::string& getType(void) const;
    void setType(std::string type);
};
```

#### `HumanA` Class (Reference Member)
```cpp
class HumanA {
private:
    std::string _name;
    Weapon& _weapon;    // Reference - must be initialized

public:
    HumanA(std::string name, Weapon& weapon);
    ~HumanA(void);
    void attack(void) const;
};
```

#### `HumanB` Class (Pointer Member)
```cpp
class HumanB {
private:
    std::string _name;
    Weapon* _weapon;    // Pointer - can be null

public:
    HumanB(std::string name);
    ~HumanB(void);
    void attack(void) const;
    void setWeapon(Weapon& weapon);
};
```

**Key Learning Points**:
- When to use references vs pointers in class members
- Object composition patterns
- Initialization list usage
- Null pointer handling

---

### 📝 Exercise 04: Sed is for Losers
**Files**: `main.cpp`, `FileUtils.cpp`, `FileUtils.hpp`, `StringUtils.cpp`, `StringUtils.hpp`

File I/O operations and string manipulation, demonstrating:
- File reading and writing
- String search and replace operations
- Error handling for file operations
- Command-line argument processing

**Key Functions**:
```cpp
bool readFile(const std::string &filename, std::string &content);
bool writeFile(const std::string &filename, const std::string &content);
std::string replaceAll(const std::string &str, const std::string &from,
                      const std::string &to);
```

**Usage**:
```bash
./replace filename s1 s2
# Reads 'filename'
# Replaces all occurrences of 's1' with 's2'
# Writes result to 'filename.replace'
```

**Features**:
- Safe file operations with error checking
- Efficient string replacement algorithm
- Proper resource cleanup
- Comprehensive error messages

**Key Learning Points**:
- File stream operations (`std::ifstream`, `std::ofstream`)
- String manipulation algorithms
- Resource management (RAII)
- Error handling patterns

---

### 🗣️ Exercise 05: Harl 2.0
**Files**: `Harl.cpp`, `Harl.hpp`, `main.cpp`

Function pointers and member function pointers, demonstrating:
- Member function pointers
- Dynamic function selection
- Logging level management
- Switch-case alternatives

**Harl Class**:
```cpp
class Harl {
private:
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);

public:
    Harl(void);
    ~Harl(void);
    void complain(std::string level);
};
```

**Implementation Technique**:
```cpp
// Array of function pointers
void (Harl::*functions[])(void) = {
    &Harl::debug,
    &Harl::info,
    &Harl::warning,
    &Harl::error
};

// Dynamic function call
(this->*functions[i])();
```

**Key Learning Points**:
- Member function pointer syntax
- Function pointer arrays
- Dynamic method dispatch
- Cleaner alternatives to switch statements

---

### 🔍 Exercise 06: Harl Filter
**Files**: `Harl.cpp`, `Harl.hpp`, `main.cpp`

Advanced filtering and switch statements, demonstrating:
- Command-line argument processing
- Switch statement with fall-through
- Logging level filtering
- Error handling for invalid inputs

**Usage**:
```bash
./harlFilter "WARNING"
# Shows WARNING and ERROR messages only

./harlFilter "DEBUG"
# Shows all messages (DEBUG, INFO, WARNING, ERROR)
```

**Switch Implementation**:
```cpp
switch (level) {
    case DEBUG:
        std::cout << "[ DEBUG ]" << std::endl;
        this->debug();
        // fall through
    case INFO:
        std::cout << "[ INFO ]" << std::endl;
        this->info();
        // fall through
    case WARNING:
        std::cout << "[ WARNING ]" << std::endl;
        this->warning();
        // fall through
    case ERROR:
        std::cout << "[ ERROR ]" << std::endl;
        this->error();
        break;
    default:
        std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
}
```

**Key Learning Points**:
- Switch statement fall-through behavior
- Enum usage for better code organization
- Filtering patterns
- Command-line argument validation

## 🛠️ Compilation

Each exercise includes a Makefile with standard targets:

```bash
# Compile the program
make

# Clean object files
make clean

# Clean everything
make fclean

# Recompile
make re
```

**Compilation flags**:
```bash
c++ -Wall -Wextra -Werror -std=c++98
```

## 🎮 How to Run

### Exercise 00 - BraiiiiiiinnnzzzZ
```bash
cd ex00
make
./zombie
```

### Exercise 01 - Moar Brainz!
```bash
cd ex01
make
./zombie_horde
```

### Exercise 02 - HI THIS IS BRAIN
```bash
cd ex02
make
./brain
```

### Exercise 03 - Unnecessary Violence
```bash
cd ex03
make
./violence
```

### Exercise 04 - Sed is for Losers
```bash
cd ex04
make
./replace test.txt "hello" "world"
```

### Exercise 05 - Harl 2.0
```bash
cd ex05
make
./harl
```

### Exercise 06 - Harl Filter
```bash
cd ex06
make
./harlFilter "WARNING"
```

## 🧪 Testing Examples

### Memory Management Test (Ex00/01)
```bash
# Test with Valgrind for memory leaks
valgrind --leak-check=full ./zombie
valgrind --leak-check=full ./zombie_horde

# Expected: No memory leaks detected
```

### File Replacement Test (Ex04)
```bash
echo "Hello world, hello universe!" > test.txt
./replace test.txt "hello" "hi"
cat test.txt.replace
# Output: Hi world, hi universe!
```

### Harl Filter Test (Ex06)
```bash
./harlFilter "INFO"
# Shows INFO, WARNING, and ERROR messages

./harlFilter "INVALID"
# Shows: "Probably complaining about insignificant problems"
```

## 🏗️ Project Structure

```
CPP_Module01/
├── README.md
├── ex00/                    # BraiiiiiiinnnzzzZ
│   ├── Makefile
│   ├── inc/
│   │   ├── ansi.h
│   │   └── Zombie.hpp
│   └── src/
│       ├── main.cpp
│       ├── newZombie.cpp
│       ├── randomChump.cpp
│       └── Zombie.cpp
├── ex01/                    # Moar Brainz!
│   ├── Makefile
│   ├── inc/
│   │   ├── ansi.h
│   │   └── Zombie.hpp
│   └── src/
│       ├── main.cpp
│       ├── Zombie.cpp
│       └── zombieHorde.cpp
├── ex02/                    # HI THIS IS BRAIN
│   ├── Makefile
│   ├── inc/
│   │   └── ansi.h
│   └── src/
│       └── main.cpp
├── ex03/                    # Unnecessary Violence
│   ├── Makefile
│   ├── inc/
│   │   ├── ansi.h
│   │   ├── HumanA.hpp
│   │   ├── HumanB.hpp
│   │   └── Weapon.hpp
│   └── src/
│       ├── HumanA.cpp
│       ├── HumanB.cpp
│       ├── main.cpp
│       └── Weapon.cpp
├── ex04/                    # Sed is for Losers
│   ├── Makefile
│   ├── inc/
│   │   ├── ansi.h
│   │   ├── FileUtils.hpp
│   │   ├── main.hpp
│   │   └── StringUtils.hpp
│   └── src/
│       ├── FileUtils.cpp
│       ├── main.cpp
│       └── StringUtils.cpp
├── ex05/                    # Harl 2.0
│   ├── Makefile
│   ├── inc/
│   │   ├── ansi.h
│   │   └── Harl.hpp
│   └── src/
└── ex06/                    # Harl Filter
    ├── Makefile
    ├── inc/
    └── src/
```

## 💡 Key Takeaways

1. **Memory Management**: Understanding when and how to use dynamic allocation
2. **References vs Pointers**: Choosing the right tool for the job
3. **RAII Principle**: Resource Acquisition Is Initialization
4. **Object Composition**: Building complex relationships between objects
5. **File I/O**: Safe and efficient file operations
6. **Function Pointers**: Dynamic method selection and callback patterns
7. **Error Handling**: Robust input validation and error reporting

## 🎯 Skills Developed

- ✅ Dynamic memory allocation and deallocation
- ✅ Reference and pointer manipulation
- ✅ Memory leak prevention techniques
- ✅ Object composition and relationships
- ✅ File stream operations
- ✅ Member function pointers
- ✅ Advanced string manipulation
- ✅ Command-line argument processing
- ✅ Error handling and validation

## ⚠️ Common Pitfalls & Solutions

1. **Memory Leaks**: Always pair `new` with `delete`, `new[]` with `delete[]`
2. **Dangling Pointers**: Set pointers to `nullptr` after deletion
3. **Reference Initialization**: References must be initialized when declared
4. **File Operations**: Always check if file operations succeeded
5. **Function Pointers**: Be careful with member function pointer syntax

## 🔗 Next Steps

After mastering Module 01, you'll be ready to tackle:
- **Module 02**: Ad-hoc polymorphism and operator overloading
- **Module 03**: Inheritance hierarchies and virtual functions
- **Module 04**: Subtype polymorphism and abstract classes

---

<div align="center">

*"With great power comes great responsibility... especially with pointers!"*

**Module 01 Complete** ✨ | **Previous**: [← Module 00](https://github.com/melaniereis/CPP_Module00/) | **Next**: [Module 02 →](https://github.com/melaniereis/CPP_Module02/)

</div>
