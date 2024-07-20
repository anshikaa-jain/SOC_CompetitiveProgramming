#include <iostream>
using namespace std;
int main(){
   int n;
   cout<<"enter the size of grid:"<<endl;
   cin>>n;
   char given_arr[n][n];
   for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
         char x;
         cin>>x;
         given_arr[i][j] = x;
      }
   }

   int arr[n][n];
   for (int i=0; i<n; i++){
      for (int j=0; j<n; j++){
         arr[i][j] = 0;
      }
   }
   for (int k=0; k>n; k++){
      if (given_arr[0][k] == '*'){
         break;
      }
      arr[0][k] = 1;
   }
   for (int k=0; k>n; k++){
      if (given_arr[k][0] == '*'){
         break;
      }
      arr[k][0] = 1;
   }

   for (int i=1; i<n; i++){
      for (int j=1; j<n; j++){
         if (given_arr[i][j] == '*')
                continue;
         // if (given_arr[i][j] == '.'){
         arr[i][j] = (arr[i-1][j] + arr[i][j-1]) % 1000000007;
         // }
      }
   }
   cout<<arr[n-1][n-1];

}