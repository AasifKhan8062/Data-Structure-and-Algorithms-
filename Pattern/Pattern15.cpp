#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 15"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    char ch = 'A' + n - 1;
    for(int i=0;i<n;i++){
      char c = ch-i;
      for(int j=0;j<i;j++){
        cout<<c<<" ";
        c++; 
      }
      cout<<endl;
    }
  }
  return 0;
}