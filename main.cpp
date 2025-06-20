#include <iostream>      // For input and output
#include <string>        // To use string data type
using namespace std;

// Step 1: Define structure for Veterinarian
struct Veterinarian {
    string name;             // Name of the vet
    string specialization;   // Vet's field like surgery, medicine, etc.
    string contactNo;        // Vet's contact number
};

// Step 2: Define structure for Pet
struct Pet {
    string name;             // Pet's name
    string species;          // Species like Dog, Cat, etc.
    Veterinarian vet;        // Assigned vet (structure inside another structure)
};

int main() {
    const int SIZE = 3;      // We want to store data for 3 pets

    Pet pets[SIZE];          // Create an array of Pet structures
    Pet* ptr = pets;         // Pointer pointing to the first element of pets array

    // Step 3 & 4a: Input details using pointer and loop
    cout << "----- Enter details for 3 pets and their assigned veterinarians -----\n";

    for (int i = 0; i < SIZE; i++) {
        cout << "\nPet #" << (i + 1) << " Details:\n";

        // Input pet name
        cout << "Enter Pet Name: ";
        getline(cin, (ptr + i)->name);  // Using pointer to access name

        // Input pet species
        cout << "Enter Pet Species (e.g., Dog, Cat): ";
        getline(cin, (ptr + i)->species);  // Using pointer to access species

        // Input veterinarian name
        cout << "Enter Veterinarian Name: ";
        getline(cin, (ptr + i)->vet.name);  // Accessing vet name using pointer

        // Input veterinarian specialization
        cout << "Enter Veterinarian Specialization: ";
        getline(cin, (ptr + i)->vet.specialization);  // Accessing vet specialization

        // Input veterinarian contact number
        cout << "Enter Veterinarian Contact Number: ";
        getline(cin, (ptr + i)->vet.contactNo);  // Accessing vet contact number
    }


