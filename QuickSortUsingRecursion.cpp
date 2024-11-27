#include <iostream>
using namespace std;

int increasequick(int arr[],int s,int e){
   int pivot = arr[s];
   int count = 0;
   for(int i=s+1;i<=e;i++){
      if(pivot >= arr[i])
         count++;
   }
   
   int pivotindex = s + count;
   swap(arr[pivotindex],arr[s]);

   int i = s;
   int j = e;

   while(i<pivotindex && j>pivotindex){
      while(arr[i]<pivot){
         i++;
      }
      while(arr[j]>pivot){
         j--;
      }
      if(i<pivotindex && j>pivotindex)
         swap(arr[i++],arr[j--]);
   }
   return pivotindex;
}
void increasequicksort(int arr[],int s,int e){
   
   if(s>=e)
      return;

   int m = increasequick(arr,s,e);
   increasequicksort(arr,s,m-1);
   increasequicksort(arr,m+1,e);
}

int decreasequick(int arr[],int s,int e){
   int pivot = arr[s];
   int count = 0;
   for(int i=s+1;i<=e;i++){
      if(pivot <= arr[i])
         count++;
   }
   
   int pivotindex = s + count;
   swap(arr[pivotindex],arr[s]);

   int i = s;
   int j = e;

   while(i<pivotindex && j>pivotindex){
      while(arr[i]>pivot){
         i++;
      }
      while(arr[j]<pivot){
         j--;
      }
      if(i<pivotindex && j>pivotindex)
         swap(arr[i++],arr[j--]);
   }
   return pivotindex;
}
void decreasequicksort(int arr[],int s,int e){
   if(s>=e)
      return;

   int m = decreasequick(arr,s,e);
   decreasequicksort(arr,s,m-1);
   decreasequicksort(arr,m+1,e);
}

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
      }
      cout<<endl;
}

int main() {
   cout<<"Quick Sort in Array using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      
      increasequicksort(arr,0,n-1);
      cout<<"Increase Order"<<endl;
      print(arr,n);

      decreasequicksort(arr,0,n-1);
      cout<<"Decrease Order"<<endl;
      print(arr,n);
   }
   return 0;
}
