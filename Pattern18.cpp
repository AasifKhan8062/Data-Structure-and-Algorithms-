#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 18"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    for(int i=n;i>=1;i--){
      for(int k=1;k<=i;k++){
        cout<<"* ";
      }
      cout<<endl;
    }
  }
  return 0;
}