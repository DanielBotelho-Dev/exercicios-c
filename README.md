# C Programming Projects

Collection of C programs focused on problem-solving and algorithm implementation, featuring CPF validation using the official Brazilian modulo 11 algorithm.

## Technologies

* Language: C
* Compiler: GCC
* Environment: Windows (Dev-C++ / terminal)

## Projects

### CPF Validator - Digit by Digit

This version was intentionally implemented using individual variables and separate `scanf` calls for each digit (11 inputs total).
The goal is to reinforce fundamental concepts of input handling and variable manipulation in C.

**How to run:**

1. Compile: `gcc validador_cpf_digitos.c -o cpf_digitos`
2. Run: `./cpf_digitos`

**Example:**

```
Input: 5 2 9 9 8 2 2 4 7 2 5
Output: Valid CPF
```

---

### CPF Validator - Complete Number

User inputs the full 11-digit CPF number as a string. The program validates the CPF using the official Brazilian modulo 11 algorithm.

This version includes:

* Support for leading zeros
* Input validation (length and numeric characters)
* Detection of invalid CPFs with repeated digits
* Formatted output (XXX.XXX.XXX-XX)

**How to run:**

1. Compile: `gcc validador_cpf_completo.c -o cpf_completo`
2. Run: `./cpf_completo`

**Example:**

```
Input: 05673113099
Output: CPF: 056.731.130-99 ✓
```

---

## Project Structure

* `validador_cpf_digitos.c` — basic implementation using individual inputs
* `validador_cpf_completo.c` — improved version using strings and validation

## Skills Developed

* Implementation of the modulo 11 validation algorithm
* Use of arrays and iterative structures (for loops)
* Handling numeric and string data types in C
* Input validation techniques
* String manipulation in C (`char` arrays, `strlen`, ASCII arithmetic)
* Converting character input to numeric values (`char - '0'`)
* Understanding different approaches to input handling

## Future Improvements

* Accept formatted CPF input (e.g., 123.456.789-09)
* Refactor validation logic into reusable functions
* Improve code organization and modularity
