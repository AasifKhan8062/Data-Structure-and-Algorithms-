#include <iostream>
using namespace std;
bool rotatedSort(int arr[],int n){
   int temp = 0;
   for(int i=0;i<n;i++){

      if(arr[i] > arr[i+1])
         temp++;
   }
   if(arr[n-1] > arr[0])
         temp++;
   return temp == 1;
}
int main() {
   cout<<"Rotated Sort Array "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      bool velue = rotatedSort(arr,n);
      for(int i=0;i<n;i++){
         cout<<arr[i]<<" ";
      }
      cout<<endl;
      if(velue){
         cout<<"Array is Rotated and sort"<<endl;
      }
      else{
         cout<<"Array is not Rotated and sort"<<endl;
      }
   }
   return 0;
}
