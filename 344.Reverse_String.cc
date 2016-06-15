class Solution {
public:
    string reverseString(string s) {
        int len = s.length();
        int i = 0;
        for(i=0; i<len/2; i++) {
            swap(s[i],s[len-i-1]);
        }
        return s;
    }
};
