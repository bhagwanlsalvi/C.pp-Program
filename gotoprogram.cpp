#include<iostream>
#include <cmath>
using namespace std;
void printSquareRoot(int count) {
	
    if (count > 0) {
        float num;
        cout << "Enter a number: ";
        cin >> num;
        
        cout << "Square root of " << num << " is " << sqrt(num) << endl;

        printSquareRoot(count - 1);
    }
}

int main() {
    int numberOfFloats = 5;
    printSquareRoot(numberOfFloats);
    return 0;
}

