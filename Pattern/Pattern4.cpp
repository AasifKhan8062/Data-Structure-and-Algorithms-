#include <iostream>
using namespace std;
int main() {
  cout<<"Pattern 4"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    int sum = 1;
    for(int i=1;i<=n;i++){
      for(int j=1;j<=n;j++){
        cout<<(sum++)<<" ";
      }
      cout<<endl;
    }
  }
  return 0;
}
