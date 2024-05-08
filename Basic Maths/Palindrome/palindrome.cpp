class Solution {
public:
    bool isPalindrome(int x) {

    if(x<0) return false; // if the number is negative then return false.

    int tmpOriginalNumber = x; // as we dont tamper the input unless theres no problem. but here as we will compare the original with the reversed number thats why we are storing a copy of the input to work upon.
    long int reversedNumber = 0; // taking long int so that it doesnt get overflowed out of integer range while reversing.

    while(tmpOriginalNumber != 0){
        reversedNumber = reversedNumber*10 + tmpOriginalNumber%10;  // same logic as the reversing number
        tmpOriginalNumber = tmpOriginalNumber/10;  // updating the temporary copy.
    }
    return reversedNumber == x;  // return true if its equal to input or else false.
    }
};