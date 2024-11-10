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

bool vaild(char s){
   if((s >='a' && s<='z') ||
      (s >='A' && s<='Z') ||
      (s >='0' && s<='9')){
      return true;
   }
   return false;
}

char islowercase(char s){
   if(s >='a' && s<='z'){
      return s;
   }
   else if(s>='0' && s<='9')
      return s;
   
   return (s-'A'+'a');
}

bool vaildpalindrome(string arr){
   string str = "";
   for(int i=0;i<lenght(arr);i++){
      if(vaild(arr[i])){
         str = str + islowercase(arr[i]);
      }
   }
   int i=0;
   int j=lenght(str)-1;
   cout<<"Filter String : "<<str<<endl;
   while(i<=j){
      if(str[i] != str[j])
         return false;
      i++;
      j--;
   }
   return true;
}

int main() {
   cout<<"Vaild Palindrome String"<<endl;
   while(true){
      string arr;
      cout<<"Enter your of String : ";
      getline(cin,arr);
      if(vaildpalindrome(arr)){
         cout<<"This is Palindrome "<<endl;
      }
      else{
         cout<<"This is not Palindrome "<<endl;
      }
   }
   return 0;
}
