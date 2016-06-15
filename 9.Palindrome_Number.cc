class Solution {
public:
    bool isPalindrome(int x) {
       if(x<0)
            return false;   //Negative numbers are not considered palindromes by the online judge
       int temp = x;
       int flipped = 0, num_digits = 0;
       while(temp) {
           ++num_digits;
           temp /= 10;
       }
       temp = x;
       while(temp) {
            int digit = temp%10;
            digit *= pow(10, num_digits-1);
            --num_digits;
            temp /= 10;
            flipped += digit;
       }
       return x==flipped;
    }
};
