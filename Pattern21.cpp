#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 21"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n-i+1;j++){
        cout<<j<<" ";
      }
      for(int k=1;k<=i-1;k++){
        cout<<"* ";
      }
      for(int m=1;m<=i;m++){
        cout<<"* ";
      }
      for(int l=n-i+1;l>=1;l--){
        cout<<l<<" ";
      }
      cout<<endl;
    }
    for(int z=1;z<=n+n+1;z++){
        cout<<"* ";
    }
    cout<<endl;
    for(int a=1;a<=n;a++){
      
      for(int b=1;b<=a;b++){
        cout<<b<<" ";
      }
      for(int c=1;c<=n-a+1;c++){
        cout<<"* ";
      }
      for(int d=n-a;d>=1;d--){
        cout<<"* ";
      }
      for(int e=a;e>=1;e--){
        cout<<e<<" ";
      }
      
      cout<<endl;
    }
  }
  return 0;
}