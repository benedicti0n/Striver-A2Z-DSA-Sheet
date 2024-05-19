#include<iostream>
using namespace std;

int sumOfDivisors(int a, int &sum){
    for(int i=1; i<=a; i++){
        if(a%i == 0) sum = sum + i;
    }

    return sum;
}
// CONTRIBUTION TECHNIQUE

// int contribution(int a, int N, int &sum){
//     sum = sum + (N/a) * a;
//     return sum;
// }

int main(){
    int N = 8;
    int sum = 0;

    for(int i=1; i<=N; i++){
        sumOfDivisors(i, sum);
    }

    // CONTRIBUTION TECHNIQUE
    // for(int i=1; i<=N; i++){
    //     contribution(i, N, sum);
    // }

    cout<<sum<<endl;

    return 0;
}