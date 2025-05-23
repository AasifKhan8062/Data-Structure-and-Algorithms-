#include <iostream>
using namespace std;
int factorial(int n){
   if(n == 0)
      return 1;
   return n * factorial(n-1);
}
int main() {
   cout<<"Factorial using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      
      cout<<"Factorial of "<<factorial(n)<<endl;;
   }   
   return 0;
}
