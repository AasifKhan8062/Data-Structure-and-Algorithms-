#include <iostream>
using namespace std;
int main() {
  cout << "Classification" << endl;
  int n;
  while (true) {
    cout << "Enter the Velue :- ";
    cin >> n;
    int m = n;
    int mask = 0;
    while (m != 0) {
      mask = (mask << 1) | 1;
      m = m >> 1;
    }
    cout << "Ans is: " << ((~n) & mask) << endl;
  }
  return 0;
}