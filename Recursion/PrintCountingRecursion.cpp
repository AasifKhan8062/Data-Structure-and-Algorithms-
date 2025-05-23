#include <iostream>
using namespace std;
void factorial(int n){
   if(n == 0)
      return;
   factorial(n-1);
   cout<<n<<" ";
}
int main() {
   cout<<"Print Counting using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;
      
      factorial(n);
      cout<<endl;
   }   
   return 0;
}
