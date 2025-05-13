#include <iostream>
using namespace std;

int main() {
  cout << "Prime Number"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
    bool ans = false;
    for(int i=1;i<=n;i++){
       if(n%i==0){
          ans = true;
       }
    }
     if(ans){
        cout<<"Not Prime Number"<<endl;
     }
     else{
        cout<<"Prime Number "<<endl;
     }
  }
  return 0;
}