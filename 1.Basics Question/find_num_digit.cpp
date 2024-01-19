#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, count = 0;
  cout << "Enter a Number: ";
  cin >> num;

  while(num != 0){
    num /= 10;
    ++count;
  }

  cout << "Number of Digit is: "<< count;

cout << "\n\n";
return 0;
}