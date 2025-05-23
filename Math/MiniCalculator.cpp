#include <iostream>
using namespace std;
int main() {
  cout<<"Mini Calculator"<<endl;
  int a,b;
  char c;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>a;
    cout<<"Enter the Velue : ";
    cin>>b;
    cout<<"Enter the operator : ";
    cin>>c;
    switch(c){
      case '+':
        cout<<"Sum : "<<a+b<<endl;
        break;
      case '-':
        cout<<"Sub : "<<a-b<<endl;
        break;
      case '*':
        cout<<"Multi : "<<a*b<<endl;
        break;
      case '/':
        if(a>b){
          cout<<"Division : "<<a/b<<endl;
        }
        else if(b>a){
          cout<<"Division : "<<b/a<<endl;
        }
        else{
          cout<<"Division not possible: "<<endl;
        }
        break;
      default:
        cout<<"invalid"<<endl;
    }
    
  }
  return 0;
}
