#include <iostream>
#include <math.h>
using namespace std;
int main() {
  cout<<"Decimal To Binary"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    int i = 0;
    int bit = 0;
    int ans = 0;
    while(n != 0){
      bit = n&1;
      ans = bit * pow(10,i) + ans;
      n = n>>1;
      i++;
    }
    cout<<"Answer :"<<ans<<endl;
  }

  return 0;
}