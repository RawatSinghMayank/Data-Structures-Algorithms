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
        
        ListNode *temp1 = l1, *temp2 = l2;
        ListNode *newList = new ListNode(-1);
        ListNode *temp = newList;
        int sum = 0, carry = 0;
        while(temp1 != NULL || temp2 != NULL){
            
            sum += carry;
            if (temp1 != NULL){
                sum += temp1 -> val;
                temp1 = temp1 -> next;
            }
            if (temp2 != NULL){
                sum += temp2 -> val;
                temp2 = temp2 -> next;
            }

            carry = sum / 10;
            sum = sum % 10;
            
            ListNode *newNode = new ListNode(sum);
            temp -> next = newNode;
            temp = temp -> next;
            sum = 0;
        }

        if (carry == 1){
            temp -> next= new ListNode(1);
            temp = temp -> next;
        }
        newList = newList -> next;
        return newList;
    }
};


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

        if (l1 == nullptr && l2 == nullptr) return NULL;
        int  sum = 0;
        int  carry = 0;
        ListNode * result = nullptr;
        if  (l1 != nullptr) sum += l1 -> val, l1 = l1 -> next;
        if  (l2 != nullptr) sum += l2 -> val, l2 = l2 -> next;
        
        carry = sum / 10;
        sum = sum % 10;
        result = new ListNode (sum);

        if (l1 != nullptr) l1 -> val = l1 ->val + carry;
        else if (l2 != nullptr) l2 -> val = l2->val + carry;
        else if (carry == 1) l1 = new ListNode(carry);
        result -> next = addTwoNumbers (l1,l2);
        return result;

    }
};