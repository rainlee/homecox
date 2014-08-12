/***
 * 蛙跳游戏
 * 给出一个整数数组A, A[i]是从位置i可以向前跳的步数. 
 * 如果A[i]为负, 则向回跳. 返回是否可能从开始的位置(A[0])跳到最后的位置(A[n-1]). 
 ***/
// 
// Jump Game. 
// 
class Solution { 
public: 
    bool canJump(vector<int> A) { 
        // Start typing your C++ solution below 
        // DO NOT write main() function 
        
        // greedy
        int maxr = 0;   // max right
        for (int i = 0; i < A.size(); ++i)
        {
            maxr = max(maxr, i + A[i]);
            if (maxr >= A.size()-1)
                return true;
            if (maxr < i+1)
                return false;
        }
        return false;
    } 
};