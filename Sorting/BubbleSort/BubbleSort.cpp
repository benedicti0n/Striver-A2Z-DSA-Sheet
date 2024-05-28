#include<iostream>
using namespace std;

void swap(int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void bubbleSort(int arr[], int n) {

    for(int i=n; i>0; i--){
        for(int j=0; j<i-1; j++){
            if(arr[j]>arr[j+1]) swap(arr[j], arr[j+1]);
        }
    }

    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }

}

int main() {
    int n = 5;
    int arr[5] = {423, 523, 7893, 634, 9};

    bubbleSort(arr, n);

    return 0;
}
