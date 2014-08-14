/***
 * 编辑距离
 * 给出两个单词A和B, 通过插入,删除和替换三种操作, 可以从A转换到B. 
 * 每一次操作为一步, 给出最短操作数. 
 * 这是经典的动态规划问题: 编辑距离. 
 * 稍微变换一下，你可以用递归来解决这个问题吗？ 
 ***/
// 
// Edit distance. 
// 
/*
class Solution { 
public: 
    int editDistance(string word1, string word2) { 
        // Start typing your C++ solution below 
        // DO NOT write main() function 
        const int n1 = word1.size();
        const int n2 = word2.size();
        
        vector<vector<int> > dp(n1+1, vector<int>(n2+1, 0));
        for (int i = 0; i <= n1; ++i)
            dp[i][0] = i;
        for (int j = 0; j <= n2; ++j)
            dp[0][j] = j;
        for (int i = 1; i <= n1; ++i)
        {
            for (int j = 1; j <= n2; ++j)
            {
                if (word1[i-1] == word2[j-1])
                    dp[i][j] = dp[i-1][j-1];
                else
                    dp[i][j] = min(min(dp[i-1][j], dp[i][j-1]), dp[i-1][j-1]) + 1;
            }
        }
        return dp[n1][n2];
    } 
};
*/

class Solution { 
public: 
    int editDistance(string word1, string word2) { 
        const int n1 = word1.size();
        const int n2 = word2.size();
        vector<int> dp(n2+1, 0);
        for (int j = 0; j <= n2; ++j)
            dp[j] = j;
        for (int i = 1; i <= n1; ++i)
        {
            int upper_left = dp[0];
            dp[0] = i;
            for (int j = 1; j <= n2; ++j)
            {
                int upper = dp[j];
                if (word1[i-1] == word2[j-1])
                    dp[j] = upper_left;
                else
                    dp[j] = min(min(dp[j-1], dp[j]), upper_left) + 1;
                upper_left = upper;
            }
        }
        return dp[n2];
    }
};