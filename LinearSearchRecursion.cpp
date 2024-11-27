#include <iostream>
using namespace std;
bool linear(int arr[],int n,int k){
   if(n < 0)
      return false;

   if(arr[0] == k)
      return true;

   return linear(arr+1,n-1,k);
}
int main() {
   cout<<"Linear Search For Recursion"<<endl;;
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
      cout<<"Enter Array Size : ";
      cin>>k; 
      if(linear(arr,n,k))
         cout<<"Velue Find"<<endl;
      else
         cout<<"Velue Not Find"<<endl;
   }   
   return 0;
}
