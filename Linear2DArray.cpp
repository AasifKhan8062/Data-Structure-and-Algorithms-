#include <iostream>
#include <string>
using namespace std;
int main() {
   cout<<"Linear Search for 2d Array"<<endl;
   while(true){
      int arr[100][100];
      int m,n;
      cout<<"Enter the Velue of row : ";
      cin>>m;
      cout<<"Enter the Velue of column : ";
      cin>>n;
      cout<<"Enter the Velue of 2 array"<<endl;
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cin>>arr[i][j];
         }
      }
      int k;
      cout<<"Enter key Velue : ";
      cin>>k;
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
         }
         cout<<endl;
      }
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            if(arr[i][j] == k)
               cout<<"index row = "<<i<<" col = "<<j<<endl;
         }
      }
      
   }
   return 0;
}
