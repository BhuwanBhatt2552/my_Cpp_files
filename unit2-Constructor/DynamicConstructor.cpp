#include <iostream>

class DynamicArray {
private:
int* data; // Pointer to hold the dynamically allocated array
int size;

public:
// Dynamic Constructor
DynamicArray(int s) {
size = s;
// Allocating memory dynamically on the heap at runtime
data = new int[size];
std::cout << "Dynamic constructor: Allocated array of size " << size << "\n";
}

// Method to populate the array
void setValues()
{
for (int i = 0; i < size; ++i) {
data[i] = (i + 1) * 10;
}
}

// Method to display array contents
void display() const {
for (int i = 0; i < size; ++i) {
std::cout << data[i] << " ";
}
std::cout << "\n";
}

// Destructor (Crucial for freeing up memory allocated by the dynamic constructor)
~DynamicArray() {
delete[] data;
std::cout << "Destructor: Deallocated dynamic memory.\n";
}
};

int main() {
int userSize;
std::cout << "Enter the size of the array: ";
std::cin >> userSize;

// The dynamic constructor runs here based on runtime input
DynamicArray arr(userSize);

arr.setValues();
std::cout << "Array elements: ";
arr.display();

return 0;
}