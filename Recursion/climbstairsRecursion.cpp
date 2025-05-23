#include <iostream>
using namespace std;
int climbstairs(int n){
   if(n < 0)
      return 0;
   if(n == 0)
      return 1;
   return climbstairs(n-1)+climbstairs(n-2);
}
int main() {
   cout<<"Climb Stairs using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      
      cout<<"Climb : "<<climbstairs(n)<<endl;
      cout<<endl;
   }   
   return 0;
}
