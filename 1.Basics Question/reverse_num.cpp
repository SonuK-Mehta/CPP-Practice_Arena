#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, sum = 0;
  cout << "Enter a Number: ";
  cin >> num;

  while(num != 0){
    int rem;
    rem = num % 10;
    sum = sum*10 + rem;
    num = num/10;
  }

  cout << "Reverse of Number is: "<< sum;

cout << "\n\n";
return 0;
}