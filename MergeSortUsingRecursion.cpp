#include <iostream>
using namespace std;

void increasemerge(int oldarr[],int s,int e){
   
   int m = s+(e-s)/2;
   int len1 = m - s + 1;
   int len2 = e - m;

   int *newarr1 = new int [len1];
   int *newarr2 = new int [len2];

   //copy
   int k = s;
   for(int i=0;i<len1;i++){
      newarr1[i] = oldarr[k++];
   }
   
   k = m + 1;
   for(int i=0;i<len2;i++){
      newarr2[i] = oldarr[k++];
   }

   //merge
   int i = 0;
   int j = 0;

   k = s;
   while(i<len1 && j<len2){
      if(newarr1[i] < newarr2[j]){
         oldarr[k++] = newarr1[i++];
      }
      else{
         oldarr[k++] = newarr2[j++];
      }
   }
   while(i<len1){
      oldarr[k++] = newarr1[i++];
   }
   while(j<len2){
      oldarr[k++] = newarr2[j++];
   }
   delete [] newarr1;
   delete [] newarr2;
}
void increasemergesort(int arr[],int s,int e){
   
   if(s>=e)
      return;

   int m = s+(e-s)/2;
   
   increasemergesort(arr,s,m);
   increasemergesort(arr,m+1,e);

   increasemerge(arr,s,e);
}

void decreasemerge(int oldarr[],int s,int e){
   
   int m = s+(e-s)/2;
   int len1 = m - s + 1;
   int len2 = e - m;

   int *newarr1 = new int [len1];
   int *newarr2 = new int [len2];

   //copy
   int k = s;
   for(int i=0;i<len1;i++){
      newarr1[i] = oldarr[k++];
   }
   
   k = m + 1;
   for(int i=0;i<len2;i++){
      newarr2[i] = oldarr[k++];
   }

   //merge
   int i = 0;
   int j = 0;

   k = s;
   while(i<len1 && j<len2){
      if(newarr1[i] > newarr2[j]){
         oldarr[k++] = newarr1[i++];
      }
      else{
         oldarr[k++] = newarr2[j++];
      }
   }
   while(i<len1){
      oldarr[k++] = newarr1[i++];
   }
   while(j<len2){
      oldarr[k++] = newarr2[j++];
   }
   delete [] newarr1;
   delete [] newarr2;
}
void decreasemergesort(int arr[],int s,int e){
   
   if(s>=e)
      return;

   int m = s+(e-s)/2;
   
   decreasemergesort(arr,s,m);
   decreasemergesort(arr,m+1,e);

   decreasemerge(arr,s,e);
}

void print(int arr[],int n){
   for(int i=0;i<n;i++){
      cout<<arr[i]<<" ";
   }
   cout<<endl;
}

int main() {
   cout<<"Merge Sort in Array using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Array Size : ";
      cin>>n; 
      int arr[100];
      cout<<"Enter Array Elements : ";
      for(int i=0;i<n;i++){
         cin>>arr[i];
      }
      
      increasemergesort(arr,0,n-1);
      cout<<"Increase Order "<<endl;
      print(arr,n);
      decreasemergesort(arr,0,n-1);
      cout<<"Decrease Order "<<endl;
      print(arr,n);
      
   }
   return 0;
}
