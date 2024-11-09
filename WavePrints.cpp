#include <iostream>
using namespace std;
int main() {
   cout<<"Wave 2D Array"<<endl;
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
      cout<<"Wave Print"<<endl;
      for(int i=0;i<n;i++){
         if(i&1){
            for(int j=m-1;j>=0;j--){
               cout<<arr[j][i]<<" ";
            }
         }
         else{
            for(int j=0;j<m;j++){
               cout<<arr[j][i]<<" ";
            }
         }
      }
      cout<<endl;
   }
   return 0;
}
