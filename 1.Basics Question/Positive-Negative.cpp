#include<iostream>
#include<windows.h>
using namespace std;

int main() {
system("cls");
cout << "\n\n";

  int num;
  cout << "Enter a Number: ";
  cin >> num;

  if (num > 0)
      cout << "Positive Number";
  else if (num < 0)
      cout << "Negative Number";
  else if (num == 0)
      cout << "\nEnter a Number greater than zero\nOR Enter a Number less than Zero";

cout << "\n\n";
return 0;
}
