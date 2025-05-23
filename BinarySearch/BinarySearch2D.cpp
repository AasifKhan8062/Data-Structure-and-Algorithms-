#include <iostream>
using namespace std;
int main() {
   cout<<"Binary Search"<<endl;
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

      int i=0;
      int j=n*m-1;
      int a = 0;
      while(i<=j){
         
         a = i+(j-i)/2;
         int ans = arr[a/n][a%n];
         if(ans == k){
            cout<<"Index Number: "<<(a/n)<<" "<<(a%n)<<endl;
            break;
         }
         else if(ans < k){
            i = a + 1;
         }
         else{
            j = a - 1;
         }
      }
   }
   return 0;
}
