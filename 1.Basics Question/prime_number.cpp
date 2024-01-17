#include<iostream>
#include<string>
using namespace std;

int main(){
cout << "\n\n";

  int i, n;
  cout << "Enter Number: ";
  cin >> n;
  bool isPrime = true;

  if(n<2)
    isPrime = false;

  for(int i=2; i<=n; i++){
    if(n % i == 0){
      isPrime = false;
      break;
    }
  }

  string result = isPrime ? "Prime" : "Not Prime";
  cout << "Number "<<n<< " is: "<< result<<endl;

cout << "\n\n";
return 0;
}