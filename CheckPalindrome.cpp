#include <iostream>
#include <string>
using namespace std;
int lenght(string arr){
   int count = 0;
   for(int i=0;arr[i] != '\0';i++){
      count++;
   }
  return count;
}
char islowercase(char s){
   if(s >='a' && s<='z'){
      return s;
   }
   return (s-'A'+'a');
}
bool checkpalindrome (string str){
   int i=0;
   int j = lenght(str) - 1;
   while(i<=j){
    if(islowercase(str[i]) != islowercase(str[j]))
       return false;
      i++;
      j--;
  }
   return true;
}
int main() {
   cout<<"Check Palindrome String"<<endl;
   while(true){
      string arr;
      cout<<"Enter your of String : ";
      getline(cin,arr);
      if(checkpalindrome(arr))
         cout<<"This is Palindrome "<<endl;
      else{
         cout<<"This is not Palindrome "<<endl;
      }
   }
   return 0;
}
