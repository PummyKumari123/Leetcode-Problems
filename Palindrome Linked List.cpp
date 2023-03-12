class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* p = head;
        stack<int> s;
        while(p!=NULL){
        s.push(p->val);
            p = p->next;
        }

        while(head && !s.empty()){
            if(head->val != s.top()) return false;
            head = head->next;
            s.pop();
        }

        return true;
    }
};
