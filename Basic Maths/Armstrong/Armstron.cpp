//In number theory, a narcissistic number in a given number base is a number that is the sum of its own digits each raised to the power of the number of digits.
// Number theroy te narcissistic number holo: number tir prottek digits ke, total digits er sokhya die power kore jog kore dili sei number tai abr chole ase.

#include<iostream>
using namespace std;

bool checkArmstrong(int n){
	int tempInput1 = n; // taking temporary space for storing the input.
	int sum = 0; // sum space where we will store the sum of the each digit^noOfDigit.
	int numberOfDigits = 0;

	int tempInput = n;
	//isko ragra jayega :)
	int sum = 0;
	int totalDigitCount = 0; 
 
	while(tempInput != 0){
		totalDigitCount++;
		tempInput /= 10;
	}

	tempInput = n;
	while(tempInput != 0){
		int lastDigit = tempInput%10;
		sum = sum + pow(lastDigit, totalDigitCount);
		tempInput = tempInput/10;
	}










	while(tempInput2 != 0){
		int lastDigit = tempInput2%10; // last digit extraction logic.
		sum = sum + pow(lastDigit, numberOfDigits); // pow function takes 2 arguments. first one is for the base and second one is for the power.
		tempInput2 = tempInput2/10; 
	}
	return sum == n; // if equal then return true or else false.
}

int main(){
	int n = 9474;

	cout<<checkArmstrong(n)<<endl;

	return 0;
}