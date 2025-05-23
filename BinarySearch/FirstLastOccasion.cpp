#include <iostream>
using namespace std;
int firstOccasion(int arr[],int n,int k){
   int s=0;
   int e=n-1;
   int m=0;
   int ans = -1;
   while(s<=e){
      m = s+(e-s)/2;
      if(arr[m] == k){
         ans = m;
         e = m-1;
      }
      else if(arr[m] < k){
         s = m+1;
      }
      else{
         e = m-1;
      }
   }
   return ans;
}
int lastOccasion(int arr[],int n,int k){
   int s=0;
   int e=n-1;
   int m=0;
   int ans = -1;
   while(s<=e){
      m = s+(e-s)/2;
      if(arr[m] == k){
         ans = m;
         s = m+1;
      }
      else if(arr[m] < k){
         s = m+1;
      }
      else{
         e = m-1;
      }
   }
   return ans;
}
int main() {
   cout<<"First And Last Occasion "<<endl;
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
      cout<<"First occasion index is : "<<firstOccasion(arr,n,k)<<endl;
      cout<<"Last occasion index is : "<<lastOccasion(arr,n,k)<<endl;
   }
   return 0;
}
