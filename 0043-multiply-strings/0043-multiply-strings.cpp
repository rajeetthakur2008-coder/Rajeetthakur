class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();
        vector<int> ans(n + m, 0);
        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int a = num1[i] - '0';
                int b = num2[j] - '0';
                int mul = a * b + ans[i + j + 1];
                ans[i + j + 1] = mul % 10;
                ans[i + j] += mul / 10;
            }
        }
        string result = "";
        for (int i = 0; i < n + m; i++) {
            if (result.empty() && ans[i] == 0)
                continue;
            result += to_string(ans[i]);
        }
        if (result == "")
            return "0";
        return result;
    }
};
