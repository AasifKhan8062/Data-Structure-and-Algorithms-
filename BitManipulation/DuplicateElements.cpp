#include <iostream>
using namespace std;

int main() {
   int n;
   cout << "Find Unique Number"<<endl;

   while(true){
      cout << "Enter the array size: ";
      cin >> n;
      int arr[100];
      for(int i=0;i<n;i++){
         cout<<"Enter the Number ";
         cin>>arr[i];
      }
      int ans = 0;
      for(int i=0;i<n;i++){
         ans = arr[i] ^ ans;
      }
      int an =0;
      for(int i=0;i<n;i++){
         an = an^ans;
      }

      cout<<"Ans is : "<<an<<endl;
   }
   return 0;
}
