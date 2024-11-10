#include <iostream>
using namespace std;
int main() {
   cout<<"Search a 2D Matrix I"<<endl;
   while(true){
      int arr[100][100];
      int m;
      cout<<"Enter size of Array : ";
      cin>>m;
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      cout<<"Enter Element Array : ";
      for(int i=0;i<m;i++){
         for(int j=0;j<n;j++){
            cin>>arr[i][j];
         }
      }
      int k;
      cout<<"Enter Key Elements : ";
      cin>>k;
      int i = m;
      int row = 0;
      int col = n-1;
      while(row <= i && col >= 0){ 
         int ans = arr[row][col];
         if(ans == k){
            cout<<"Index Number: "<<(row)<<" "<<(col)<<endl;
            break;
         }
         else if(ans < k){
            row++;
         }
         else{
            col--;
         }
      }
   }
   return 0;
}
