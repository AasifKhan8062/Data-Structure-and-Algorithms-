#include <iostream>
using namespace std;
void sortIncreare(int arr[],int n){
   for(int i=1;i<n;i++){
      for(int j=0;j<n-i;j++){
         if(arr[j] > arr[j+1]){
            int a = arr[j];
            int b = arr[j+1];
            arr[j] = b;
            arr[j+1] = a;
         }
      }
   }
   cout<<"Sort Increase Order "<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

void sortDecrease(int arr[],int n){
   for(int i=0;i<n;i++){
      for(int j=0;j<n-i-1;j++){
         if(arr[j] < arr[j+1]){
            int a = arr[j];
            int b = arr[j+1];
            arr[j] = b;
            arr[j+1] = a;
         }
      }
   }
   cout<<"Sort Decrease Order "<<endl;
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Bubble Sort "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      sortIncreare(arr,n);
      sortDecrease(arr,n);
   
   }
   return 0;
}
