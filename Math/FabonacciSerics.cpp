#include <iostream>
using namespace std;
int main() {
  cout<<"Fibonacci Series"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;

    int a = 0;
    int b = 1;
    int c = 0;
    int i = 1;
    cout<<a<<" "<<b<<" ";
    while(i<=n){
      c = a+b;
      cout<<c<<" ";
      a = b;
      b = c;
      i++;
    }
    cout<<endl;
  }

  return 0;
}
