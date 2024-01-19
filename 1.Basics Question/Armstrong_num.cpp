#include<iostream>
using namespace std;

int main(){
cout << "\n\n";

  int num, count = 0, res = 1, cnt, sum = 0;
  cout << "Enter a Number: ";
  cin >> num;

  int n = num;
  while(n!=0){
    ++count;
    n /= 10;
  }

  cnt = count;
  n = num;
  cout << "Number of Digit is: "<< count << endl;

  while(n!=0){
    int rem = n % 10;

    while(cnt!=0){
      res = res * rem;
      cnt--;
    }
    
    sum = sum + res;
    cnt = count;
    res = 1;
    n /=10;
  }

  cout << "Sum is: "<< sum<<endl;

  if(sum == num)
    cout << "Armstrong Number";
  else cout << "Not a Armstrong Number";

cout << "\n\n";
return 0;
}