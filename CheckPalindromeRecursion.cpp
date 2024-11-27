#include <iostream>
#include <string>
using namespace std;
void reverse (string& arr,int s,int e){
   if(s > e)
      return;
   char a = arr[s];
   char b = arr[e];
   arr[e] = a;
   arr[s] = b;
   e--;
   s++;
   reverse(arr,s,e);
}
int main() {
   cout<<"Check Palindrome using Recursion"<<endl;;
   while(true){
      string arr;
      cout<<"Enter String : ";
      getline(cin,arr);
      string str = arr;
      reverse(arr,0,arr.length()-1);
      if(str == arr){
         cout<<"Palindrome String"<<endl;
      }
      else{
         cout<<"Not Palindrome String"<<endl;
      }
   }
   return 0;
}
