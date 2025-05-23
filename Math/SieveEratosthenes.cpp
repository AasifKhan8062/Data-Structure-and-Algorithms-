#include <iostream>
#include <vector>
using namespace std;
int SievraEratosthenes(int n){
   vector<bool>prime(n,true);
   int count =0;
   for(int i=2;i<n;i++){
      if(prime[i]){
         count++;
         for(int j=2*i;j<n;j+=i){
            prime[j] = false;
         }
      }
   }
   return count;
}
int main() {
   cout<<"Sieve of Eratosthenes"<<endl;
   while(true){
      int n;
      cout<<"Enter The Number: ";
      cin>>n;

      cout<<"Total Prime Number is : "<<SievraEratosthenes(n)<<endl;
   }
   return 0;
}
