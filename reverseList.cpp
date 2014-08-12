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