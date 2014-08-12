/***
 * ������ϷII
 * ����һ����������A, A[i]�Ǵ�λ��i������ǰ���Ĳ���. ���A[i]Ϊ��, �������. 
 * �����Ƿ�ӿ�ʼ��λ��(A[0])��������λ��(A[n-1])�ж���������. 
 ***/
// �������ⲻ�壬��A[i] < 0ʱ������������������
// ���磺2 -1 0, ������2 -1 ֮��������
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