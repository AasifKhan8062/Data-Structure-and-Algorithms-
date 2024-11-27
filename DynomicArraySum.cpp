#include <iostream>
#include <string>
using namespace std;

int main() {
   cout<<"Dynamic 2D Array Sum "<<endl;
   while(true){
      
      int row;
      cout<<"Enter The size : ";
      cin>>row;
      int col;
      cout<<"Enter The size : ";
      cin>>col;
      int** arr = new int*[row];
      for(int i=0;i<row;i++){
         arr[i] = new int[col];
      }

      cout<<"Enter the Velue of Array : "<<endl;
      for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            cin>>arr[i][j];
         }
      }

      int sum = 0;
      for(int i=0;i<row;i++){
         for(int j=0;j<col;j++){
            sum += arr[i][j];
         }
      }
      cout<<"Sum of Array : "<<sum<<endl;
      
      for(int i=0;i<row;i++){
         delete[] arr[i] ;
      }
      delete[] arr;
   }
   return 0;
}
