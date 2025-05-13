#include <iostream>
using namespace std;
int main() {
  cout<<"Positive Nagetive Number"<<endl;
  cout<<"Enter Any Number ";
  int n;
  cin>>n;
  if(n>0){
    cout<<"Positive Number ";
  }
  else if(n<0){
    cout<<"Nagetive Number ";
  }
  else{
    cout<<"Zero Number ";
  }
  return 0;
}