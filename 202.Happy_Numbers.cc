class Solution {
public:
    bool isHappy(int n) {
        if( (n==1)||(n==7))
            return 1;
        else if( n<10 )
            return 0;
        int temp = 0, digit, digit_squared;
        while(n>0){
            digit = n%10;
            digit_squared = digit*digit;
            temp += digit_squared;
            n /= 10;
        }
        return isHappy(temp);
    }
};
