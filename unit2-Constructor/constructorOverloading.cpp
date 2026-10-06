// Constructor Overloading (Complex Numbers):

// Design Complex class that represents complex numbers (real + imaginary parts) 

// Use constructor overloading in it.

// Default constructor (values ko 0 initialize kare).

// Parameterized constructor (values assign kare).

// Copy constructor.

// Create function that add two complex numbers and display result (e.g., 3 + 4i).

#include<iostream>
using namespace std;

class Complex {
    private:
        int real; 
        int imag;

    public:
        // 1. Default constructor (Values ko 0 initialize kare)
        Complex() {
            real = 0;
            imag = 0;
        }

        // 2. Parameterized constructor (Values assign kare)
        Complex(int r, int i) {
            real = r; 
            imag = i;
        }

        // 3. Copy constructor (Ek object ka data doosre me copy kare)
        Complex(Complex &obj) {
            real = obj.real;
            imag = obj.imag;
        }

        // 4. Function to add two complex numbers
        // Ye function ek Complex object receive karta hai, aur return bhi Complex object karta hai
        
        Complex addComplex(Complex c2) {
            Complex result;  // Naya object banaya (Default constructor call hoga, real=0, imag=0)
            
            result.real = real + c2.real; // Pehle object ka real + Doosre object ka real
            result.imag = imag + c2.imag; // Pehle object ka imag + Doosre object ka imag
            
            return result; // Resultant object wapas bhej diya
        }

        // Display function
        void display() {
            cout << real << " + " << imag << "i" << endl;
        }
};

int main() {
    // 1. Parameterized constructor ka use (Hardcoded values bhej rahe hain)
    Complex c1(3, 4); 
    Complex c2(5, 2); 
    
    // 2. Default constructor ka use
    Complex c3;       

    cout << "\n1st Complex Number: ";
    c1.display();
    
    cout << "\n2nd Complex Number: ";
    c2.display();

    // Addition operation: c1 call kar raha hai aur c2 ko as argument bhej raha hai
    c3 = c1.addComplex(c2);

    cout << "\n---------------------------" << endl;
    cout << "Sum of Complex Numbers: ";
    c3.display();
    cout << "---------------------------" << endl;

    // 3. Copy constructor ka use
    Complex c4(c3); 
    cout << "\nObject created from Copy constructor : ";
    c4.display();

    return 0;
}