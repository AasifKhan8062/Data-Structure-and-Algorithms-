#include <iostream>
using namespace std;

int main() {
  cout << "Celsius to Fahrenheit"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
       cout<<((i*5/9)+32)<<endl;
    }
     cout<<endl;
  }
  return 0;
}
