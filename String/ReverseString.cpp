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
void reverse(string str){
   int i=0;
   int j = lenght(str);
  int n = j;
  while(i<=j){
    char a = str[i];
    char b = str[j];
    str[i] = b;
    str[j] = a;
    i++;
    j--;
  }
  for(i=0;i<=n;i++){
    cout<<str[i];
  }
  cout<<endl;
}
int main() {
   cout<<"Reverse String"<<endl;
   while(true){
      string arr;
      cout<<"Enter your of String : ";
      getline(cin,arr);
      reverse(arr);
   }
   return 0;
}
