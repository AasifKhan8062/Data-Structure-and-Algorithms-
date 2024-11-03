#include <iostream>
using namespace std;
int main() {
  cout<<"Sum and Multiple numbers"<<endl;
  int n;
  while(true){
    cout<<"Enter the Velue : ";
    cin>>n;
    int a = 0;
    int sum = 0;
    int multi = 1;
    while(n!=0){
      a = n%10;
      sum += a;
      multi *= a;
      n = n / 10;
    }
    cout<<"Sum is : "<<sum<<endl;
    cout<<"multi is : "<<multi;
    cout<<endl;
  }

  return 0;
}