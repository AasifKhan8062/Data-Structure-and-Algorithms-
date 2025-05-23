#include <iostream>
using namespace std;
int main() {
  cout << "Sum of Series"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    int sum = 0;
    cin >> n;
    for(int i=0;i<=n;i++){
       sum += i;
    }
     cout<<"Sum : "<<sum<<endl;
  }
  return 0;
}
