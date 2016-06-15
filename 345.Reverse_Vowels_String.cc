class Solution {
public:
    string reverseVowels(string s) {
        int len = s.length();
        int i, j, last;
        last = len;
        for(i=0; i<last; i++) {
            if( (s[i] == 'a')||(s[i] == 'e')||(s[i] == 'i')||(s[i] == 'o')||(s[i] == 'u')||(s[i] == 'A')||(s[i] == 'E')||(s[i] == 'I')||(s[i] == 'O')||(s[i] == 'U') ){
                for(j=last-1; j>i; j--) {
                    if( (s[j] == 'a')||(s[j] == 'e')||(s[j] == 'i')||(s[j] == 'o')||(s[j] == 'u')||(s[j] == 'A')||(s[j] == 'E')||(s[j] == 'I')||(s[j] == 'O')||(s[j] == 'U') ) {
                        last = j;
                        swap(s[i],s[j]);
                        break;
                    }
                }
            }
        }
        return s;
    }
};
