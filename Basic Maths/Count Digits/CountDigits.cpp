/*

*/



/*
Given a number N. Count the number of digits in N.

Example:
Input:
    N = 1234
Output:
    4
*/

#include <iostream>
using namespace std;

int countDigits(int n){

    int count = 0;

    while(n != 0){
        count++;
        n = n/10;
        // here we are dividing by 10.

    return count;
}

//Another approach
// int countDigits(int n){
//     int count = log10(n) + 1;
//     return count;
// }

//driver code
int main(){
    int n = 237987345;
    cout<<countDigits(n)<<endl;
}