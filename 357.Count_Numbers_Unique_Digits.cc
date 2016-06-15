class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
        if(n > 10){
            return 0;   //Impossible to have more than 10 unique digits..don't you think?
        }
        int i, j;
        int num = 0;
        int partial, val;
        for(i=0; i<n; i++) {
            partial = 9;
            val = 9;
            for(j=0; j<i; j++) {
                partial *= val;
                --val;
            }
            num += partial;
        }
        ++num; //Accounting for 0...
               /*If you don't think it should be there, remember that 
                *0000...0 is written as 0 only.*/
        return num;
    }
};
