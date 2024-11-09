#include <iostream>
using namespace std;
int main() {
   cout<<"Row Sum 2D Array"<<endl;
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
      int k=0;
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            k += arr[i][j];
         }
         cout<<"Sum : "<<k<<endl;
         k = 0;
      }
   }
   return 0;
}
