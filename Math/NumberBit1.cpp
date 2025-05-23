#include <iostream>
using namespace std;
int main() {
  cout << "Number bit 1" << endl;
  int n;
  while (true) {
    cout << "Enter the Velue : ";
    cin >> n;
    int count = 0;
    int a = 0;
    while (n != 0) {
      a = n % 10;
      if (a == 1)
        count++;
      n = n / 10;
    }
    cout << "Count is: " << count << endl;
  }
  return 0;
}
