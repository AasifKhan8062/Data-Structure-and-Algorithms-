#include <iostream>
using namespace std;
int squareRoot(int k){
   int s=0;
   int e=k;
   int m=0;
   int ans = 1;
   while(s<=e){
      m = s+(e-s)/2;
      int sqr = m*m;
      if(sqr == k){
         return m;
      }
      else if(sqr < k){
         ans = m;
         s = m+1;
      }
      else{
         e = m-1;
      }
   }
   return ans;
}
int main() {
   cout<<"Square Binary search "<<endl;
   while(true){
      int n;
      cout<<"Enter Root Velue : ";
      cin>>n; 
      cout<<"Square Root velue : "<<squareRoot(n)<<endl;
   }
   return 0;
}
