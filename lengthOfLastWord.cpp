// 
// Length of last word. 
// 
class Solution { 
public: 
    int lengthOfLastWord(const char *s) { 
        // Start typing your C++ solution below 
        // DO NOT write main() function 
        int last = 0;
        int cnt = 0;
        while ('\0' != *s)
        {
            if (' ' == *s)
            {
                last = (cnt ? cnt : last);
                cnt = 0;
            }
            else
                ++cnt;
            ++s;
        }
        return (cnt ? cnt : last);
    } 
};