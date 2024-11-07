#include <iostream>
using namespace std;

int main() {
   int m,n;
   cout << "Array intersection"<<endl;

   while(true){
      cout << "Enter the array size: ";
      cin >> m;
      int arr1[100];
      for(int i=0;i<m;i++){
         cout<<"Enter the Number ";
         cin>>arr1[i];
      }
     cout << "Enter the array size: ";
     cin >> n;
     int arr2[100];
     for(int i=0;i<n;i++){
        cout<<"Enter the Number ";
        cin>>arr2[i];
     }
     int i=0;
     int j=0;
     while(i<m && j<n){
       if(arr1[i] == arr2[j]){
         cout<<arr1[i]<<" ";
         i++;
         j++;
       }
       else if(arr1[i] < arr2[j])
         i++;
         
       else if(arr1[i] > arr2[j])
         j++;
     }
     cout<<endl;
   }
   return 0;
}
