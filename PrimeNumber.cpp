#include <iostream>
using namespace std;
bool Prime(int n){
   for(int i=2;i<n;i++){
       if(n%i == 0){
          return false;
       }
   }
   return true;
}
int main() {
  cout << "Prime Number"<<endl;
  int n;
  while (true) {
    cout << "Enter your number: ";
    cin >> n;
     if(Prime(n)){
        cout<<"This is Prime Number"<<endl;
     }
     else{
        cout<<"This is Not Prime Number"<<endl;
     }
  }
  return 0;
}
