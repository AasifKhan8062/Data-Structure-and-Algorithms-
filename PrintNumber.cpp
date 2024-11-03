#include <iostream>
using namespace std;

int main() {
  cout << "Print Counting"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
       cout<<i<<" ";
    }
     cout<<endl;
  }
  return 0;
}
