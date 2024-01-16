#include<iostream>
using namespace std;

float greatestNumber(float a, float b, float c = 0, float d = 0) {
    float greatest = a;

    if (b > greatest)
        greatest = b;
    if (c > greatest)
        greatest = c;
    if (d > greatest)
        greatest = d;

    return greatest;
}

int main() {
    cout << "\n\n";

    int numberOfInputs;
    cout << "Enter the number of inputs (2, 3, or 4): ";
    cin >> numberOfInputs;

    float a, b, c = 0, d = 0;

    if(numberOfInputs == 2){
      cout << "Enter numbers: ";
      cin >> a >> b;
    }
    
    if (numberOfInputs == 3) {
      cout << "Enter numbers: ";
      cin >> a >> b >> c;
    }

    if (numberOfInputs == 4) {
      cout << "Enter numbers: ";
      cin >> a >> b >> c >>d;
    }

    cout << "Greatest Number is: " << greatestNumber(a, b, c, d);

    cout << "\n\n";
    return 0;
}
