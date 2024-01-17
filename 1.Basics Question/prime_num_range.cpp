#include<iostream>
#include<string>
using namespace std;

int main(){
cout << "\n\n";

  int a, b, i;

  cout << "Enter a Range: ";
  cin >> a >> b;

  cout << "Prime Number are: ";

  for(int i = a; i<b; i++){
    for(int j = 2; i<b; i++){
      if(i % j != 0){
        if(i == 1) continue;
        cout << i << " ";
      }
    }
  }

cout << "\n\n";
return 0;
}