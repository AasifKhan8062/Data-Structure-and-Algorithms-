#include <iostream>
#include <math.h>
using namespace std;
int main() {
  cout<<"Binary To Decimal"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    int i = 0;
    int digit = 0;
    int ans = 0;
    while(n != 0){
      digit = n%10;
      if(digit == 1)
        ans += pow(2,i);
      i++;
      n = n/10;
    }
    cout<<"Answer :"<<ans<<endl;
  }
  return 0;
}
