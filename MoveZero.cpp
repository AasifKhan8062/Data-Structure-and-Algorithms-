#include <iostream>
using namespace std;
void movezero(int arr[],int n){
   int i=0;
   int j=0;
   while(j<n){
      if(arr[j] != 0){
         int a = arr[i];
         int b = arr[j];
         arr[i] = b;
         arr[j] = a;
         i++;
         j++;
      }
      else {
         j++;
      }
   }
   cout<<"Move Zero "<<endl;
      for(int a = 0;a<n;a++){
         cout<<arr[a]<<" ";
      }
      cout<<endl;
}
int main() {
   cout<<"Move Zeros problem "<<endl;
   while(true){
      int arr[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr[i];
      }

      movezero(arr,n);
      
   }
   return 0;
}
