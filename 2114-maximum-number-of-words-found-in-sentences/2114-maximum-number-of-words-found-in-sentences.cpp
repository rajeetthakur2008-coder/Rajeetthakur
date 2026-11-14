class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxWords = 0;
        for (int i = 0; i < sentences.size(); i++) {
            stringstream ss(sentences[i]);
            string word;
            int count = 0;
            while (ss >> word) {
                count++;
            }
            if (count > maxWords) {
                maxWords = count;
            }
        }
        return maxWords;
    }
};