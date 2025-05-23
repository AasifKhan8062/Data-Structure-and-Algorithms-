#include <iostream>
#include <string>
using namespace std;

void lenght(string arr){
   int count = 0;
   for(int i=0;arr[i] != '\0';i++){
      count++;
   }
   cout<<"Count the string : "<<count<<endl;
}
int main() {
   cout<<"Length "<<endl;
   while(true){
      string arr;
      cout<<"Enter size of Array : ";
      getline(cin,arr);
      lenght(arr);
   }
   return 0;
}
