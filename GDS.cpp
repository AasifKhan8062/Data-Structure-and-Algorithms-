#include <iostream>
using namespace std;
int gds(int a,int b){
   if(a==0)
      return b;
   else if(b==0)
      return a;

   while(a != b){
      if(a>b)
         a = a-b;
      else
         b = b-a;
   }
   return a;
}
int main() {
   cout<<"G.D.S."<<endl;
   while(true){
      int m;
      cout<<"Enter The Number : ";
      cin>>m;
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      cout<<"GDS : "<<gds(m,n)<<endl;
   }
   return 0;
}
