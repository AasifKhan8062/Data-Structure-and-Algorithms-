#include <iostream>
using namespace std;
bool binary (int arr[],int s,int e,int k){
   if(s > e)
      return false;

   int m = s+(e-s)/2;
   if(arr[m] == k)
      return true;
   if(arr[m] < k)
      return binary(arr,m+1,e,k);
   
   return binary(arr,s,m-1,k);
}
int main() {
   cout<<"Binary Search using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      int k;
      cout<<"Enter find Velue : ";
      cin>>k; 
      if(binary(arr,0,n-1,k))
         cout<<"Velue Find"<<endl;
      else
         cout<<"Velue Not Find"<<endl;
   }   
   return 0;
}
