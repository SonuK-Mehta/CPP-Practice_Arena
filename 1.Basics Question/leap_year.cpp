#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int year;
  cout << "Enter year: ";
  cin >> year;

  if(year % 400 == 0)
    cout << "It's a Leap year."<<endl;
  else if (year % 4 == 0 && year % 100 != 0)
    cout << "It's a Leap year."<<endl;
  else cout << "It's Not a Leap year."<<endl;

cout << "\n\n";
return 0;
}