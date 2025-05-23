#include <iostream>
using namespace std;
void reverseArray(int arr[],int n){
   int s=0;
   int e=n-1;
   while(s<=e){
      int a = arr[s];
      int b = arr[e];
      arr[e] = a;
      arr[s] = b;
      s++;
      e--;
   }
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Reverse Array"<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      reverseArray(arr,n);
   }
   return 0;
}
