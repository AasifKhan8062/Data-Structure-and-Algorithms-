#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 9"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    char ch = 'A';
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<ch<<" ";
      }
      ch++;
      cout<<endl;
    }
  }
  return 0;
}
