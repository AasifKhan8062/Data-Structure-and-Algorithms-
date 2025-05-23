#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 5"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;

    for(int i=1;i<=n;i++){
      for(int j=1;j<=i;j++){
        cout<<i<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
