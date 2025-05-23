#include <iostream>
#include <math.h>
using namespace std;
int main() {
  cout << "Power of 2"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
    int power = 1;
    bool ok = false;
    for(int i=0;i<32;i++){
      if(power == n){
        ok = true;
      }
      power *= 2;
    }
    if(ok){
      cout<<"Yes"<<endl;
    }
    else{
      cout<<"No"<<endl;
    }
  }
  return 0;
}
