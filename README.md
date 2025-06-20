# 🐾 Pet & Veterinarian Record System (C++)

A beginner-friendly console-based C++ application that allows users to store and display details about pets and their assigned veterinarians using **structures**, **arrays**, **pointers**, and **nested structures**.

---

## 📌 Features

* Defines a structure for **Veterinarian** (name, specialization, contact number)
* Defines a structure for **Pet**, embedding the veterinarian structure within it
* Uses **pointer arithmetic** for dynamic data access and manipulation
* Stores and manages data for **three pets**
* Utilizes `getline()` for clean multi-word string input

---

## 💡 Concepts Demonstrated

* `struct` and **nested structures**
* **Pointer arithmetic** and the `->` operator
* **Arrays of structures**
* Clean **input/output separation**
* Real-world use of **modular and readable code**

---

## 🧾 Sample Input/Output

```
----- Enter details for 3 pets and their assigned veterinarians -----

Pet #1 Details:
Enter Pet Name: Bella
Enter Pet Species (e.g., Dog, Cat): Dog
Enter Veterinarian Name: Dr. Sarah
Enter Veterinarian Specialization: Surgery
Enter Veterinarian Contact Number: 1234567890

...

----- Displaying All Pet Records -----

Pet #1:
Name: Bella
Species: Dog
Assigned Veterinarian:
  Name: Dr. Sarah
  Specialization: Surgery
  Contact No: 1234567890
```

---

## 📂 Project Structure

```
PetVetSystem/
├── main.cpp        // C++ source code
└── README.md       // Project documentation
```

---

## 🚀 Getting Started

### 🔧 Prerequisites

* A C++ compiler (e.g., `g++`)
* Any IDE or terminal that supports C++ compilation

### 🛠️ Compile & Run

```bash
git clone https://github.com/Umer-Majeed/PetVetSystem.git
cd PetVetSystem
g++ main.cpp -o PetVetSystem
./PetVetSystem
```

---

## 🎓 Educational Value

This project is ideal for:

* Understanding the basics of **structures** and **arrays**
* Learning how to use **pointers** in real-world applications
* Practicing **nested data models** and clean input/output design

---

## 👨‍💻 Author

Made with ❤️ by **Umer Majeed**


