#include <iostream>
using namespace std;
void Digits(int n){
   if(n <= 0)
      return;
   string arr[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
   int a = n%10;
   n = n/10;
   Digits(n);
   cout<<arr[a]<<" ";
}
int main() {
   cout<<"Say Digits using Recursion"<<endl;;
   while(true){
      int n;
      cout<<"Enter The Number : ";
      cin>>n;  
      Digits(n);
      cout<<endl;
   }   
   return 0;
}
