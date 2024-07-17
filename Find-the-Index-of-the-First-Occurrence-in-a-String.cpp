class Solution {
public:
    int strStr(std::string haystack, std::string needle) {
        int m = haystack.length(), n = needle.length();
        if (m < n)
            return -1;
        for (int i = 0; i <= m - n; i++) {
            if (haystack[i] == needle[0]) {
                int temp = i + 1;
                bool flag = true;
                for (int l = 1; l < n; l++) {
                    if (needle[l] != haystack[temp]) {
                        flag = false;
                        break;
                    }
                    temp++;
                }
                if (flag)
                    return i;
            }
        }
        return -1;
    }
};
