#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 8"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    for(int i=1;i<=n;i++){
      for(int j=i;j>=1;j--){
        cout<<j<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
