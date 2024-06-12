#include <iostream>
using namespace std;

void rotateByOne(int nums[],int n,int num){
    int temp = nums[0];

    for(int i=n-2; i>0; i--){
        nums[i+1] = nums[i];
    }

    nums[0] = temp;
}