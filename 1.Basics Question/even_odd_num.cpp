#include<iostream>
#include<string>
using namespace std;

string funOddEven(int num){
  return  num % 2 == 0 ? "Even" : "odd";
}

int main(){
cout << "\n\n";

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  cout << "Number is: "<< funOddEven(num);

cout << "\n\n";
return 0;
}