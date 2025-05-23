#include <iostream>
using namespace std;
void mergeArray(int arr1[],int m,int arr2[],int n){
   int i=0;
   int j=0;
   int newarr[100];
   int k=0;
   while(i<m && j<n){
      if(arr1[i] < arr2[j]){
         newarr[k++] = arr1[i++];
      }
      else{
         newarr[k++] = arr2[j++];
      }
   }
   
   while(i<m){
      newarr[k++] = arr1[i++];
   }
   
   while(j<n){
      newarr[k++] = arr2[j++];
   }
   
   cout<<"Merge Array "<<endl;

   for(int a=0;a<m+n;a++){
      cout<<newarr[a]<<" ";
   }
   cout<<endl;
}
int main() {
   cout<<"Merge two Array"<<endl;
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
      mergeArray(arr1,m,arr2,n);
   }
   return 0;
}
