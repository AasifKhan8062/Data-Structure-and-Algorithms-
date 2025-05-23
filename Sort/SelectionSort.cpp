#include <iostream>
using namespace std;
void sortDecrease(int arr[],int n){
   for(int i=0;i<n-1;i++){
      int index = i;
      for(int j=i+1;j<n;j++){
         if(arr[index] < arr[j])
            index = j;
      }
      int a = arr[index];
      int b = arr[i];
      arr[index] = b;
      arr[i] = a;
   }
   cout<<"Sort By Decreasing Order"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void sortIncrease(int arr[],int n){
   for(int i=0;i<n-1;i++){
      int index = i;
      for(int j=i+1;j<n;j++){
         if(arr[index] > arr[j])
            index = j;
      }
      int a = arr[index];
      int b = arr[i];
      arr[index] = b;
      arr[i] = a;
   }
   cout<<"Sort By increasing Order"<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Selection Sort"<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      sortIncrease(arr,n);
      sortDecrease(arr,n);
   }
   return 0;
}
