class Solution {
public:
    int reverse(int x) {
        int reverse = 0;
        while(x!=0){
            if(reverse > INT_MAX/10 || reverse< INT_MIN/10) return 0;
            reverse=reverse*10 + x%10;
            x /=10;
        }
        return reverse;
    }
};

/*
Notes:-

INT_MAX = 2147483647;
INT_MIN = 2147483647 - 1;

Normal case:
    - when the number is less than the range of INT.

Special case:
    - when the number is on the edge of range of INT.

    so if we do ans*10 ans gets overflown and goes outside the range of INT.

*/