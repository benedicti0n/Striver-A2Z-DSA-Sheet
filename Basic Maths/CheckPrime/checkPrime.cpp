#include<iostream>
using namespace std;

void checkPrime(int n){
    bool isPrime = true;
    for(int i=2; i<n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout<<"It is Prime 1"<<endl;
    else cout<<"Not Prime 1"<<endl;
}

void checkPrimeOptimal(int n){
    bool isPrime = true;
    for(int i=2; i*i<n; i++){ // T.C.: O(sqrt(n))
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }

    if(isPrime) cout<<"It is Prime 2"<<endl;
    else cout<<"Not Prime 2"<<endl;
}

int main(){
    int N = 7;

    checkPrime(N);
    checkPrimeOptimal(N);


    return 0;
}