#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Pair Sum"<<endl;

   while(true){
      cout << "Enter the array size: ";
      cin >> n;
      int arr[100];
      for(int i=0;i<n;i++){
         cout<<"Enter the Number ";
         cin>>arr[i];
      }
     int k;
     cout << "Enter the key Elements : ";
     cin >> k;
     
     for(int i=0;i<n;i++){
       for(int j=i+1;j<n;j++){
         if((arr[i] + arr[j]) == k){
           cout<<"Pair of elements : "<<arr[i]<<" "<<arr[j]<<endl;
         }
       }
     }
     cout<<endl;
   }
   return 0;
}
