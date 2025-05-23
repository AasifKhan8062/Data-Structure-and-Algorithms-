#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 12"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    
    for(int i=0;i<n;i++){
      char ch = 'A'+i;
      for(int j=0;j<n;j++){
        char c = ch + j;
        cout<<c<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}