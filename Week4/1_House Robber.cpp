#include <iostream>
#include <array>
using namespace std;

int max_robbery(int nums[], int l){
    
     if (l==0){
        return 0;
     }
     else if (l==1){
        return nums[0];
     }
     else if (l==2){
        return max(nums[0],nums[1]);
     }
     else{
        int arr[l];
        arr[0] = nums[0];
        arr[1] = nums[1];
        arr[2] = nums[0] + nums[2];
        for (int i=3; i<l; i++){
            arr[i] = max(arr[i-3],arr[i-2]) + nums[i];
        }
        return max(arr[l-1],arr[l-2]);
     }
}

int main(){
    int nums[] = {2,7,9,3,1};
    int l = sizeof(nums)/sizeof(nums[1]);
    // cout<<l<<endl;
    int n = max_robbery(nums, l);
    cout<<n;

}