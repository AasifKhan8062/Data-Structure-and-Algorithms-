#include <iostream>
using namespace std;
int main() {
  cout<<"Uppercase Lowercase Number"<<endl;
  cout<<"Enter Any Char ";
  char n;
  cin>>n;
  if(n>='A' && n<='Z'){
    cout<<"Uppercase ";
  }
  else if(n>='a' && n<='z'){
    cout<<"Lowercase ";
  }
  else{
    cout<<"Number ";
  }
  return 0;
}
