#include <iostream>
using namespace std;

int numDistinct(string s, string t){
    int m = s.length();
    int n = t.length();
    int arr[n+1];
    arr[0] = 1;
    for(int k=1; k<=n; k++){
        arr[k] = 0;
    }
    for(int i=1; i<=m; i++){
        for(int j=n; j>=1; j--){
        if(s[i-1] == t[j-1])
            arr[j] += arr[j-1];
        }
    }
    // for(int i=0;i<=n;i++)
    //    cout<<dp[i]<<endl;
    return arr[n];
}

int main(){
    cout<<numDistinct("rabbbit","rabbit");
}