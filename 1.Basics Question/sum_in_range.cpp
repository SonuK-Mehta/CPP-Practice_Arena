#include<iostream>
using namespace std;

void sumInRange(int a, int b){
  int result = 0;
  for(int i = a; i<=b; i++){
    result = result + i;
  }
  cout << "Sum of Number between "<<a<< " and "<<b<< " is: "<<result<< endl;
}

int main(){
cout << "\n\n";

  int num1, num2;
  cout << "Enter Two Number: ";
  cin >> num1 >> num2;

  sumInRange(num1, num2);

cout << "\n\n";
return 0;
}