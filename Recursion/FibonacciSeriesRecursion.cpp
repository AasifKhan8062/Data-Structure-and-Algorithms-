#include <iostream>
using namespace std;
int factorial(int n){
   if(n == 0)
      return 0;
   if(n == 1)
      return 1;
   return factorial(n-1)+factorial(n-2);
   cout<<n<<" ";
}
int main() {
   cout<<"Fibonacci Series using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      
      cout<<"Factorial : "<<factorial(n)<<endl;
      cout<<endl;
   }   
   return 0;
}
