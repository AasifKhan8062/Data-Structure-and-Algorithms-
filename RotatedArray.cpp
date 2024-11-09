#include <iostream>
using namespace std;
void rotatedArray(int arr[],int n,int k){
   int temp[100];
   for(int i=0;i<n;i++){
      temp[(i+k)%n] = arr[i];
   }
   for(int i=0;i<n;i++){
      cout<<temp[i]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Rotated Array "<<endl;
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
      cout<<"Enter Rotated velue: ";
      cin>>k;
      
      rotatedArray(arr,n,k);
   }
   return 0;
}
