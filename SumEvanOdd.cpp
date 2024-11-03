#include <iostream>
using namespace std;

int main() {
  cout << "Sum of Even and Odd"<<endl;
  int n;
  while (true) {
    int even = 0;
    int odd = 0;
    cout << "Enter your number: ";
    cin >> n;
    for(int i=1;i<=n;i++){
       if(i%2==0){
         even += i;
       }
      else{
        odd += i;
      }
    }
    cout<<"Even : "<<even<<endl;
    cout<<"Odd : "<<odd<<endl;
  }
  return 0;
}
