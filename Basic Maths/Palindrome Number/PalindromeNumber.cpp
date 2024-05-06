class Solution {
public:
    bool isPalindrome(int x) {

    if(x<0) return false;    // if the number is negative then according to the question its by default is false

    int tmpOriginalNumber = x;     // we know that we do not do anything to the input. if we do then the original number will change and wont be able to check if the reversed of the number is actually same as the original numebr.
    long int reversedNumber = 0;

    while(tmpOriginalNumber != 0){
        reversedNumber = reversedNumber*10 + tmpOriginalNumber%10;
        tmpOriginalNumber = tmpOriginalNumber/10;  
    }
    return reversedNumber == x;    // if the reversedNumebr is not equal to x then will return false or else true.
    }
};