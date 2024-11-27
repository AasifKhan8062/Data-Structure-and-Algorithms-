#include <iostream>
using namespace std;
int sum(int arr[],int n){
   if(n == 0)
      return 0;
   if(n == 1)
      return arr[0];
   int x = sum(arr+1,n-1);
   int y = arr[0] + x;
   return y;
}
int main() {
   cout<<"Sum Array using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      cout<<"Sum is : "<<sum(arr,n)<<endl;
   }   
   return 0;
}
