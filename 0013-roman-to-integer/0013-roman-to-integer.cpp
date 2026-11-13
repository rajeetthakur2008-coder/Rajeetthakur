class Solution {
public:
    int romanToInt(string s) {
        int total = 0;
        for (int i = 0; i < s.length(); i++) {
            int num = 0;
            if (s[i] == 'I') num = 1;
            else if (s[i] == 'V') num = 5;
            else if (s[i] == 'X') num = 10;
            else if (s[i] == 'L') num = 50;
            else if (s[i] == 'C') num = 100;
            else if (s[i] == 'D') num = 500;
            else if (s[i] == 'M') num = 1000;
            if (i + 1 < s.length()) {
                int next = 0;
                if (s[i + 1] == 'I') next = 1;
                else if (s[i + 1] == 'V') next = 5;
                else if (s[i + 1] == 'X') next = 10;
                else if (s[i + 1] == 'L') next = 50;
                else if (s[i + 1] == 'C') next = 100;
                else if (s[i + 1] == 'D') next = 500;
                else if (s[i + 1] == 'M') next = 1000;
                if (num < next) {
                    total = total - num;
                }
                else {
                    total = total + num;
                }
            }
            else {
                total = total + num;
            }
        }
        return total;
    }
};
