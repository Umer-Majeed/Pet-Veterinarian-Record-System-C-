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
