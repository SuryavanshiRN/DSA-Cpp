class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string word, result = "";
        while (ss >> word) { // Automatically skips extra spaces
            if (result.empty())
                result = word;
            else
                result = word + " " + result; // Prepend word for reverse order
        }
        return result;
    }
};
