#include <iostream>
#include <math.h>
using namespace std;
int power(int n,int p){
  int ans = 1;
  for(int i=1;i<=p;i++){
    ans *= n;
  }
  return ans;
}
int main() {
  cout<<"Power"<<endl;
  int n,p;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    cout<<"Enter the power : ";
    cin>>p;
    cout<<"Answer :"<<power(n,p)<<endl;
    }
  return 0;
}
