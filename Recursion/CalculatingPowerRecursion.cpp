#include <iostream>
#include <string>
using namespace std;
int power(int n,int p){
   if(p == 0)
      return 1;

   return n*power(n,p-1);
}
int main() {
   cout<<"Calculating Power using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter Number : ";
      cin>>n; 
      
      int k;
      cout<<"Enter power : ";
      cin>>k;

      cout<<"Power is : "<<power(n,k)<<endl;
   }
   return 0;
}
