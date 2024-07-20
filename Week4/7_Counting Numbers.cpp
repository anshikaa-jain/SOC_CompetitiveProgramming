#include <iostream>
#include <cmath>
using namespace std;

int count_digits(int N){
    int l = 0;
    if (N == 0)
        return 1;
    while (N != 0) {
        N = N / 10;
        ++l;
    }
    return l;
}

int main(){
    int a,b;
    cin>>a;
    cin>>b;
    int l1 = count_digits(a);
    int l2 = count_digits(b);

    int count = 0;

    for (int x=a; x<=b; x++){     // acc to test case a and b are also included so changed for (int x=a+1; x<b; x++) to for (int x=a; x<=b; x++)
        int l = count_digits(x);
        int y = x;
        int arr[l];
        for (int i = 0; i < l; i++) {
            int rem = y %10;
            y = y / 10;
            arr[l-1-i] = rem;
        }
        int z=0;
        for(int j=0; j<l-1; j++){
            if (arr[j] == arr[j+1]){
                z += 1;
            }
        }
        if (z == 0){
            count += 1;
        }
    }
    cout<<count<<endl; 
}