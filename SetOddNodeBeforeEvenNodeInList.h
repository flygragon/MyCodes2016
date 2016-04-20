/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
#include"StructListNode.h"
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head && head ->next)
        for (ListNode *temp1 =head,*temp2 =head ->next,*temp =temp2;temp2 && temp2 ->next;) {
            temp1 ->next =temp2 ->next;
            temp2 ->next =temp1 ->next ->next;
            temp1 =temp1 ->next;
            temp1 ->next =temp;
            temp2 =temp2 ->next;
        }
        return head;
    }
};