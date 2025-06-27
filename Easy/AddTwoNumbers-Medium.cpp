/*
You are given two non-empty linked lists representing two non-negative integers. The digits are stored in reverse order, and each of their nodes contains a single digit. Add the two numbers and return the sum as a linked list.

L1: 2->4->3
L2: 5->6->4

SOL: 342+465=807
HEAD: 7->0->8

COMPLEXITY: 
Time	O(max(m, n))
Space	O(max(m, n))
*/

#include <iostream>
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head=new ListNode();
        ListNode *t1=l1,*t2=l2;
        ListNode* tail=head;  
        int carry=0;                      //if carry is present
        while(t1!=nullptr || t2!=nullptr || carry!=0)
        {   
            int sum=carry;

            if(t1!=nullptr)
            {
                sum+=t1->val;
                t1=t1->next;
            }
            if(t2!=nullptr)
            {
                sum+=t2->val;
                t2=t2->next;
            }
            carry=sum/10;
            int value=sum%10;
            tail->next=new ListNode(value);
            tail=tail->next; 
        }
        return head->next ;                 // initial node will be dummy node with value zero, so we return head->next for solution
    }
};