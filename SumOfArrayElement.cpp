#include <iostream>
using namespace std;
int getsum(int *arr,int n){
  int sum =0;
  for(int i=0;i<n;i++){
    sum += arr[i];
  }
  return sum;
}
int main() {
  cout<<"Sum of all Elements"<<endl;
  int n;
  while(true){
    cout<<"Enter the of Array size : ";
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
      cout<<"Enter the Velue : ";
      cin>>arr[i];
    }
    cout<<"Sum of all array Element : "<<getsum(arr,n)<<endl;
  }
  return 0;
}