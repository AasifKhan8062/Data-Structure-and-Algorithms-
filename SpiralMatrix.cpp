#include <iostream>
using namespace std;
int main() {
   cout<<"Spiral Matrix"<<endl;
   while(true){
      int arr[100][100];
      int m;
      cout<<"Enter size of Array : ";
      cin>>m;
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      cout<<"Enter Element Array"<<endl;
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cin>>arr[i][j];
         }
      }

      int total = m*n;
      int count = 0;
      
      int srow = 0;
      int scol = 0;
      int erow = m-1;
      int ecol = n-1;
      
      while(count<total){ 
         
         for(int i=scol;i<=ecol && count<total;i++){
            cout<<arr[srow][i]<<" ";
            count++;
         }
         srow++;

         for(int i=srow;i<=erow && count<total;i++){
            cout<<arr[i][ecol]<<" ";
            count++;
         }
         ecol--;

         for(int i=ecol;i>=scol && count<total;i--){
            cout<<arr[erow][i]<<" ";
            count++;
         }
         erow--;

         for(int i=erow;i>=srow && count<total;i--){
            cout<<arr[i][scol]<<" ";
            count++;
         }
         scol++;
      }
      cout<<endl;
      
   }
   return 0;
}
