/***
 * ������Ϸ
 * ����һ����������A, A[i]�Ǵ�λ��i������ǰ���Ĳ���. 
 * ���A[i]Ϊ��, �������. �����Ƿ���ܴӿ�ʼ��λ��(A[0])��������λ��(A[n-1]). 
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