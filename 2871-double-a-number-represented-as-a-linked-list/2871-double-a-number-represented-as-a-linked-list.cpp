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
    ListNode* doubleIt(ListNode* head) {
        stack<ListNode*> st;
        ListNode* curr=head;
        while(curr!=nullptr){
            st.push(curr);
            curr=curr->next;
        }
        int carry=0;
        while(!st.empty()){
            curr=st.top();
            st.pop();
            int newVal=(curr->val*2)+carry;
            curr->val=newVal%10;
            carry=newVal/10;
        }
        if(carry){
            ListNode* newNode=new ListNode(carry);
            newNode->next=head;
            return newNode;
        }
        return head;
    }
};