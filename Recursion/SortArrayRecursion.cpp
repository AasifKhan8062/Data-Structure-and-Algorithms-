#include <iostream>
using namespace std;
bool sort(int arr[],int n){
   if(n == 0 || n == 1)
      return true;

   if(arr[0] > arr[1])
      return false ;

   return sort(arr+1,n-1);
}
int main() {
   cout<<"Sort Array using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      if(sort(arr,n)){
         cout<<"Array is Sorted"<<endl;
      }
      else{
         cout<<"Array is not Sorted"<<endl;
      }
   }   
   return 0;
}
