#include <iostream>
using namespace std;
void SortIncrease(int arr[],int n){
   for(int i=1;i<n;i++){
      int j = i-1;
      int key = arr[i];
      while(j>=0 && arr[j] > key){
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
   }
   cout<<"Sort Increase Order"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
void SortDecrease(int arr[],int n){
   for(int i=1;i<n;i++){
      int j = i-1;
      int key = arr[i];
      while(j>=0 && arr[j] < key){
         arr[j+1] = arr[j];
         j--;
      }
      arr[j+1] = key;
   }
   cout<<"Sort Decrease Order"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Insertion Sort "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      SortIncrease(arr,n);
      SortDecrease(arr,n);
   }
   return 0;
}
