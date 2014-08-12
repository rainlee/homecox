/***
 * 末尾单词的长度
 * 给出由空格分开的单词组成的字符串, 返回最后一个单词的长度. 
 ***/
//  
// struct ListNode { 
//     int val; 
//     ListNode * next; 
//     ListNode(int v) : val(v), next(NULL) {} 
// } 
// 
 
class Solution { 
public: 
    ListNode * reverseList(ListNode * n) { 
        ListNode *pre = NULL;
        ListNode *cur = n;
        while (cur)
        {
            ListNode *next = cur->next;
            cur->next = pre;
            pre = cur;
            cur = next;
        }
        return pre;
    } 
};