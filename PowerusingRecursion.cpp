#include <iostream>
using namespace std;
int power(int n,int p){
   if(p == 0)
      return 1;
   return n * power(n,p-1);
}
int main() {
   cout<<"Power using Recursion"<<endl;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      int p;
      cout<<"Enter The Power : ";
      cin>>p;
      cout<<"power of "<<power(n,p)<<endl;;
   }   
   return 0;
}
