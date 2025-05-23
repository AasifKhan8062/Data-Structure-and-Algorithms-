#include <iostream>
using namespace std;

int main() {
  cout << "Fahrenheit to Celsius"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
       cout<<((i-32)*5/9)<<endl;
    }
     cout<<endl;
  }
  return 0;
}
