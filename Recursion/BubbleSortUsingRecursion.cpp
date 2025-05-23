#include <iostream>
using namespace std;
void increasebubble(int arr[],int n){
   if(n == 0 || n == 1)
      return;

   for(int i=0;i<n-1;i++){
      if(arr[i]>arr[i+1]){
         int a = arr[i];
         int b = arr[i+1];
         arr[i] = b;
         arr[i+1] = a;
      }
   }
   increasebubble(arr,n-1);
}

void decreasebubble(int arr[],int n){
   if(n == 0 || n == 1)
      return;

   for(int i=0;i<n-1;i++){
      if(arr[i] < arr[i-1]){
         int a = arr[i];
         int b = arr[i+1];
         arr[i] = b;
         arr[i+1] = a;
      }
   }
   decreasebubble(arr,n-1);
}

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
      cout<<endl;
}
int main() {
   cout<<"Bubble Sort in Array using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      
      increasebubble(arr,n);
      cout<<"Increase Order "<<endl;
      print(arr,n);

      decreasebubble(arr,n);
      cout<<"Decrease Order "<<endl;
      print(arr,n);
      
   }
   return 0;
}
