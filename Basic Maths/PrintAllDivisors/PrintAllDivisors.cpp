#include<iostream>
using namespace std;

void sumOfAllDivisors(int n){
    // for (int i = 1; i <= n; i++) {
	// 	if(n%i == 0) cout<<i<<endl;
	// } // this has the time complexity of O(n)
    vector<int> ls;
    for(int i=0; i*i<=n; i++){
        if(n%i == 0) {
            ls.push_back(i);
            if((n%i) != i) ls.push_back(n/i);
        }
    }
    sort(ls.begin(), ls.end());
    for(auto it : ls) cout<<it<<endl;
}


int main(){

    sumOfAllDivisors(36);

    return 0;
}