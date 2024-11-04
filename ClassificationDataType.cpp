#include <iostream>
using namespace std;
int main() {
  cout << "Classification" << endl;
  while (true) {
    cout << "Enter the Velue :- ";
    char n;
    cin >> n;
    if (n >= 'A' && n <= 'Z') {
      cout << "Upper case 11 <<< endl";
    } else if (n >= 'a' && n <= 'z') {
      cout << "Lower case" << endl;
    } else if (n >= '0' && n <= '9') {
      cout << "Number" << endl;
    } else {
      cout << "Special character" << endl;
    }
  }

  return 0;
}