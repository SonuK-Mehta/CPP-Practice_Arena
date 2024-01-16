#include<iostream>
#include<windows.h>
using namespace std;

int funSum(int num){
  return (num * (num+1)) / 2; //Eg- num=5 -> (5*(5+1))/2 -> 5*(6)/2 -> 30/2 -> 15
}

int main() {
  system("cls");

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  cout << "Sum is: " << funSum(num) << endl;

  return 0;
}
