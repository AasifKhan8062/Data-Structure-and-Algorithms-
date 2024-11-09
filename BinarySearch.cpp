#include <iostream>
using namespace std;
int binarysearch(int arr[],int n,int k){
   int s=0;
   int e=n-1;
   int m=0;
   while(s<=e){
      m = s+(e-s)/2;
      if(arr[m] == k){
         return m;
      }
      else if(arr[m] < k){
         s = m+1;
      }
      else{
         e = m-1;
      }
   }
   return -1;
}
int main() {
   cout<<"Binary search "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      int k;
      cout<<"Enter Key Value : ";
      cin>>k;
      cout<<"Index Number key velue : "<<binarysearch(arr,n,k)<<endl;
   }
   return 0;
}
