## 📁 Exercises

### Ex00: Scalar Converter
This exercise introduces the `ScalarConverter` class, which is responsible for converting scalar types (such as `int`, `float`, `double`, and `char`) into their string representation and vice versa. This focuses on basic class implementation, type casting, and error handling.

```
Files:
├── ex00/ScalarConverter.cpp
├── ex00/ScalarConverter.hpp
├── ex00/Makefile
├── ex00/main.cpp
```

### Ex01: Serialization
In Ex01, we implement a simple serialization and deserialization system. The goal is to convert an object into a binary format that can later be restored to its original state. This exercise teaches object serialization using streams and pointers.

```
Files:
├── ex01/Serialize.cpp
├── ex01/Serialize.hpp
├── ex01/Data.hpp
├── ex01/Makefile
├── ex01/main.cpp
```

### Ex02: Base and Derived Classes
Ex02 introduces class hierarchies, with a base class `Base` and derived classes `A` and `B`. The main task is to implement a polymorphic system that identifies and interacts with objects of these derived classes.

```
Files:
├── ex02/Base.hpp
├── ex02/Base.cpp
├── ex02/A.hpp
├── ex02/B.hpp
├── ex02/Makefile
├── ex02/main.cpp
```

## 🤖 Class Features

### ScalarConverter
```cpp
class ScalarConverter {
public:
    static void convert(const std::string &literal);
};
```

### Serialize
```cpp
class Serialize {
public:
    static void *serialize(Data *data);
    static Data *deserialize(void *raw);
};
```

### Data
```cpp
class Data {
public:
    int value;
    Data(int val);
};
```

### Base
```cpp
class Base {
public:
    virtual ~Base();
    virtual void identify() const;
};
```

### A (Derived from Base)
```cpp
class A : public Base {
public:
    void identify() const override;
};
```

### B (Derived from Base)
```cpp
class B : public Base {
public:
    void identify() const override;
};
```

## 🎯 Learning Objectives

1. **Type Conversion**
   - Implement scalar type conversions (int, float, char, double) using `ScalarConverter`.
   - Understand how to handle various edge cases during conversions.

2. **Serialization and Deserialization**
   - Learn how to serialize objects into a raw format and deserialize them back to their original state using `Serialize`.
   - Understand the use of pointers and dynamic memory in the context of object serialization.

3. **Polymorphism**
   - Work with class hierarchies, particularly polymorphic behavior in the `Base`, `A`, and `B` classes.
   - Implement methods that behave differently based on the object type using dynamic casting.

4. **Error Handling**
   - Proper error handling for edge cases, such as invalid input or invalid deserialization.

## 🛠️ Implementation Requirements

- **Orthodox Canonical Form**: Ensure all classes have the appropriate constructors, destructors, and copy constructors/assignment operators.
- **Static Methods**: Use static methods where applicable, especially for utility functions like `ScalarConverter::convert()`.
- **Virtual Methods**: Use virtual destructors and method overriding in the `Base` and derived classes (`A`, `B`).
- **Memory Management**: Handle dynamic memory properly, particularly in serialization and deserialization.

## 🧪 Testing Guidelines

### Ex00: Scalar Converter
```cpp
ScalarConverter::convert("123");  // Should convert to int
ScalarConverter::convert("123.45f");  // Should convert to float
ScalarConverter::convert("hello");  // Should throw an error
```

### Ex01: Serialization and Deserialization
```cpp
Data *data = new Data(42);
void *raw = Serialize::serialize(data);
Data *deserializedData = Serialize::deserialize(raw);
std::cout << "Deserialized value: " << deserializedData->value << std::endl;
```

### Ex02: Polymorphism with Base, A, and B
```cpp
Base *base = new A();
base->identify();  // Should identify as A

Base *baseB = new B();
baseB->identify();  // Should identify as B
```

## ⚠️ Common Issues to Watch

1. **Memory Management**
   - Ensure proper memory management when working with pointers, especially in serialization and deserialization.
   - Avoid memory leaks by deleting dynamically allocated objects.

2. **Polymorphism**
   - Ensure that the correct version of methods is called (e.g., `identify` for the correct class type).

3. **Type Conversion Edge Cases**
   - Handle edge cases where conversion fails (e.g., converting a string that doesn't represent a number).

## 📝 Style Requirements

- Consistent and descriptive class names and method names.
- Proper indentation and comments.
- Well-structured header and source files.
- Clear, readable, and self-documenting code.

## 🔍 Debugging Tips

1. **Check for Memory Leaks**
   - Use tools like Valgrind to detect and fix memory leaks, especially when working with dynamic memory (in serialization/deserialization).

2. **Test All Conversion Edge Cases**
   - Test invalid inputs and edge cases to ensure `ScalarConverter` handles them correctly.

3. **Verify Virtual Method Dispatch**
   - Ensure that virtual methods are being correctly dispatched, particularly in polymorphic scenarios with the `Base`, `A`, and `B` classes.

## 📜 License

This project is part of the 42 curriculum and is provided as-is.
