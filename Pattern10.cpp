#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 10"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    for(int i=1;i<=n;i++){
      char ch = 'A';
      for(int j=1;j<=n;j++){
        cout<<(ch++)<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}