#include <iostream>
using namespace std;
int pivotElement(int arr[],int n){
   int s=0;
   int e=n-1;
   int m=0;
   while(s<e){
      m = s+(e-s)/2;
      if(arr[m] >= arr[0]){
          s = m + 1;
      }
      else{
         e = m;
      }
   }
   return e;
}

int main() {
   cout<<"Pivot Elements "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }
      
      cout<<"Pivot Element is : "<<pivotElement(arr,n)<<endl;
   }
   return 0;
}
