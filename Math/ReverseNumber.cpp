#include <iostream>
using namespace std;
int main() {
  cout<<"Reverse integer"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    int digit= 0;
    int ans = 0;
    while(n!=0){
      digit = n%10;
      ans = (ans * 10) + digit;
      n = n / 10;
    }
    
    cout<<"answer is : "<<ans<<endl;
  }

  return 0;
}
