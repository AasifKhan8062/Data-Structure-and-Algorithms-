#include <iostream>
using namespace std;
int ncr(int f){
  int ans = 1;
  for(int i=f;i>=1;i--){
    ans *= i;
  }
  return ans;
}
int main() {
  cout<<"nCr Program"<<endl;
  int n,r;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    cout<<"Enter the Velue : ";
    cin>>r;
    int ans = ncr(n)/(ncr(r)*ncr(n-r));
    cout<<"Ans : "<<ans<<endl;
  }
  return 0;
}
