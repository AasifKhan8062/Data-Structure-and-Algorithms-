#include <iostream>
using namespace std;
int peakMountain(int arr[],int n){
   int s=0;
   int e=n-1;
   int m=0;
   while(s<=e){
      m = s+(e-s)/2;
      if(arr[m-1] < arr[m] && arr[m] > arr[m+1]){
         return arr[m];
      }
      else if(arr[m] < arr[m+1]){
         s = m+1;
      }
      else{
         e = m;
      }
   }
   return -1;
}

int main() {
   cout<<"Peak Mountain Elements "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      
      cout<<"Peak Element is : "<<peakMountain(arr,n)<<endl;
   }
   return 0;
}
