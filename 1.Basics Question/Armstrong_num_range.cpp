#include<iostream>
using namespace std;

// Armstrong Number in Range - 

int main() {
cout << "\n\n";

  int a, b, sum = 0;
  cout << "Enter Two Number: ";
  cin >> a >> b;

  cout << "Armstrong Number are: ";
  for (int i = a; i <= b; i++) {
    int count = 0;
    int res = 0; // Initialize res to 0
    int num = i;

    while (num != 0) {
      ++count;
      num /= 10;
    }

    int cnt = count;
    int n = i;

    while (n != 0) {
      int rem = n % 10;
      int temp = 1; // Initialize temp to 1

      // Calculate power of rem with respect to count
      while (cnt != 0) {
        temp *= rem;
        cnt--;
      }

      res += temp; // Add temp to res

      cnt = count;
      n /= 10;
    }

    if (res == i)
      cout << res << " ";
  }

cout << "\n\n";
return 0;
}
