class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int i, j;
        string str1, str2, cstr;
        size_t minlen;

        if (strs.size() > 0) {
            cstr = strs[0];
            for (i = 1; i < strs.size(); ++i) {
                str1 = cstr;
                str2 = strs[i];
                minlen = min(str1.size(), str2.size());
                for (j = 0; j < minlen; ++j) {
                    if (str1[j] != str2[j]) {
                        cstr = str1.substr(0, j);
                        break;
                    }
                }
                if (j == minlen) {
                    cstr = str1.substr(0, minlen);
                }
            }
        }
        return cstr;
    }
};
