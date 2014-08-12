/***
 * 蛙跳游戏II
 * 给出一个整数数组A, A[i]是从位置i可以向前跳的步数. 如果A[i]为负, 则向回跳. 
 * 返回是否从开始的位置(A[0])跳到最后的位置(A[n-1])有多少种跳法. 
 ***/
// 该题题意不清，当A[i] < 0时，可能有无穷种跳法
// 例如：2 -1 0, 可以在2 -1 之间来回跳
// 
// Number of jump ways. 
// 
class Solution { 
public: 
    int jumpWays(vector<int> A) { 
        // Start typing your C++ solution below 
        // DO NOT write main() function 
        const int n = A.size();
        vector<int> dp(n, 0);
        int maxr = 0;
        for (int i = 0; i < n-1; ++i)
        {
            maxr = max(maxr, i + A[i]);
            if (maxr < i+1)
                return 0;
            for (int j = 1; (j <= A[i]) && ((i+j) < n); ++j)
                dp[i+j] += (dp[i] ? dp[i] : 1);  // at least 1
        }
        return dp[n-1];
    } 
};