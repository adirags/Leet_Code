class Solution {
public:
    int addDigits(int num) {
        int sum;
        do {
            sum = 0;
            while(num>0) {
                sum = sum + num%10;
                num /= 10;
            }
            num = sum;
        }while(num > 9);
        return sum;
    }
};
