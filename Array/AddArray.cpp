#include <iostream>
using namespace std;
void addArray(int arr1[],int m,int arr2[],int n){
   int i=m-1;
   int j=n-1;
   int ans = 0;
   int newarr[100];
   int k;
   if(m>n)
      k = m-1;
   else
      k = n-1;
   int b = k;
   
   while(i>=0 && j>=0){
      ans = arr1[i--] + arr2[j--];
      ans = ans % 10;
      newarr[k--] = ans;
   }
   while(i>=0){
      newarr[k--] = arr1[i--];
   }
   while(i>=0){
      newarr[k--] = arr2[j--];
   }

   for(int a=0;a<b+1;a++){
      cout<<newarr[a]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Add Array "<<endl;
   while(true){
      int arr1[100];
      int m;
      cout<<"Enter size of Array : ";
      cin>>m;
      for(int i=0;i<m;i++){
         cout<<"Enter the number: ";
         cin>>arr1[i];
      }
      int arr2[100];
      int n;
      cout<<"Enter size of Array : ";
      cin>>n;
      for(int i=0;i<n;i++){
         cout<<"Enter the number: ";
         cin>>arr2[i];
      }
      addArray(arr1,m,arr2,n);
   }
   return 0;
}
