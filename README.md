# High Performance Finance Engine (C++)

## Overview

High Performance Finance Engine is a C++ based financial management system designed to simulate basic banking operations with efficient object-oriented design. The project focuses on account management, secure transactions, and clean modular architecture.

The goal of this project is to demonstrate strong C++ concepts such as OOP, classes, constructors, encapsulation, file organization, and efficient data handling.

---

## Features

* Create and manage user accounts
* Deposit money into accounts
* Withdraw money with balance validation
* Check account balance
* Secure transaction handling
* Object-oriented architecture
* Modular `.h` and `.cpp` file structure

---

## Technologies Used

* C++
* Object-Oriented Programming (OOP)
* STL
* File Handling
* C++17

---

## Project Structure

```
FinanceEngine/

│
├── include/
│   └── Account.h
│
├── src/
│   ├── Account.cpp
│   └── main.cpp
│
├── README.md
└── CMakeLists.txt
```

---

## Class Design

### Account Class

The `Account` class represents a bank account.

### Data Members

```cpp
int id;
string name;
long long balance;
```

### Member Functions

```cpp
void deposit(long long amount);
bool withdraw(long long amount);
long long getBalance();
```

---

## Constructor Implementation

The project uses a parameterized constructor to initialize account details.

Example:

```cpp
Account user(101, "Rajat", 50000);
```

This creates an account with:

* Account ID: 101
* Name: Rajat
* Initial Balance: 50000

---

## Example Usage

```cpp
Account acc(101, "Rajat", 50000);

acc.deposit(10000);

bool status = acc.withdraw(20000);

cout << acc.getBalance();
```

Output:

```
40000
```

---

## Concepts Implemented

* Classes and Objects
* Constructors
* Encapsulation
* Member Functions
* Access Specifiers
* Header and Source File Separation
* Object-Oriented Design

---

## Future Improvements

* Add multiple account management
* Add transaction history
* Add file/database storage
* Implement authentication
* Add multithreading support
* Add fraud detection system
* Connect with SQL database

---

## Author

Rajat Pandey

## License

This project is open-source and available for learning and development purposes.
