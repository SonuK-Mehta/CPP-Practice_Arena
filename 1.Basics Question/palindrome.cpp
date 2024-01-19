#include<iostream>
using namespace std;

bool palindrome(int n){
  int rev = 0, temp = n;

  while(temp != 0){
    int rem = temp % 10;
    rev = rev * 10 + rem;
    temp = temp/10;
  }

  return (rev == n);
}

int main(){
  cout << "\n\n";

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  if (palindrome(num))
    cout << "It's a Palindrome Number";
  else
    cout << "It's Not a Palindrome Number";

  cout << "\n\n";
  return 0;
}
