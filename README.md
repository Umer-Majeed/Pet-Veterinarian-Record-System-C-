🐾 Pet & Veterinarian Record System (C++)
This is a simple console-based C++ program that demonstrates the use of structures, arrays, pointers, and nested structures to store and display information about pets and their assigned veterinarians.

📌 Features
Define a structure for a Veterinarian (name, specialization, contact number).

Define a structure for a Pet, which includes the veterinarian as a nested structure.

Use pointer arithmetic to input and display data for multiple pets.

Stores data for 3 pets in an array.

💡 Concepts Covered
struct and nested structures

Pointer arithmetic and -> notation

Arrays of structures

getline() for multi-word input

Clean separation of input and output logic

🧾 Example Input/Output
yaml
Copy
Edit
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
📂 File Structure
cpp
Copy
Edit
/PetVetSystem
│
├── main.cpp         // Source code file
└── README.md        // Project explanation
🚀 How to Run
Clone this repo:

bash
Copy
Edit
git clone https://github.com/Umer-Majeed/PetVetSystem.git
Open in any C++ IDE or compile with g++:

bash
Copy
Edit
g++ main.cpp -o PetVetSystem
./PetVetSystem
📚 Educational Purpose
This project is ideal for beginners who want to strengthen their understanding of:

Pointers

Arrays

Structures

C++ input/output

🧑‍💻 Author
Made with ❤️ by Umer Majeed 
