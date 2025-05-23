#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 14"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    char ch = 'A'-1;
    for(int i=0;i<n+1;i++){
      char c = ch + i;
      for(int j=0;j<i;j++){
        cout<<(c++)<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}