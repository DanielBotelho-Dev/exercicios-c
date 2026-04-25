# C Programming Projects

Collection of C programs focused on problem-solving and algorithm implementation, including CPF validation using the official Brazilian modulo 11 algorithm.

## Technologies

* Language: C
* Compiler: GCC
* Environment: Windows (Dev-C++ / terminal)

## Projects

### CPF Validator - Digit by Digit

User inputs each digit separately. Validates using the official Brazilian tax ID algorithm (modulo 11).

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

User inputs the full 11-digit CPF number. Validates using the official Brazilian tax ID algorithm (modulo 11).

**Known limitation:**
Currently uses numeric input (`long long`), which prevents handling CPFs with leading zeros. Future versions will implement string-based validation.

**How to run:**

1. Compile: `gcc validador_cpf_completo.c -o cpf_completo`
2. Run: `./cpf_completo`

**Example:**

```
Input: 52998224725
Output: Valid CPF
```

---

## Skills Developed

* Implementation of the modulo 11 validation algorithm
* Use of arrays and iterative structures (for loops)
* Handling numeric data types (`int`, `long long`)
* Input validation techniques

## Future Improvements

* Implement CPF validation using strings
* Improve input validation and error handling
* Refactor code into reusable functions
