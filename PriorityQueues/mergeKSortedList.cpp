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
    
    ListNode * createList (vector <int> arr){
        if (arr.size() == 0) return NULL;
        ListNode* head = new ListNode(arr[0]);
        int n = arr.size();
        ListNode* temp = head;

        for (int i = 1; i < n; i++){
            temp->next = new ListNode (arr[i]);
            temp = temp->next;    
        }

        return head;
    }

    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        vector <int> ele;

        for (int i = 0; i < lists.size(); i++){
            ListNode *head = lists[i];
           while(head != NULL){
                ele.push_back(head->val);
                head = head-> next;
            }
        }
        sort(ele.begin(),ele.end());

        return createList(ele);

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

    ListNode * mergeTwoList (ListNode* head1, ListNode* head2){

        ListNode* merged = new ListNode(-1);
        ListNode *temp = merged;

        while (head1 != NULL && head2 != NULL){

            if (head1-> val <= head2-> val){
                temp ->next = head1;
                head1 = head1->next;
                temp = temp->next;
            }
            else{
                temp->next= head2;
                head2 = head2->next;
                temp = temp->next;
            }
        }

        if (head1 != NULL){
            temp ->next = head1;
        }

        if (head2 != NULL){
            temp ->next = head2;
        }

        return merged ->next;

    }


    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        if (lists.size() == 0) return {};
        int n = lists.size();
        if (n == 1) return lists[0];

        ListNode * result = lists[0];

        for (int i = 1; i < n; i++){
            result = mergeTwoList (result,lists[i]);
        }

        return result;

    }
};






class comp{
    public:
        bool operator() (const ListNode* l1, const ListNode* l2){
            return l1 -> val > l2 -> val;
        }

};

class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        
        ListNode* dummy = new ListNode(-1);
        ListNode* temp = dummy;
        priority_queue < ListNode* , vector <ListNode*> , comp> pq;

        for (int i = 0; i < lists.size(); i++){
            if (lists[i] == nullptr) continue;
            pq.push(lists[i]);
        }

        while (!empty(pq)){
            ListNode *curr = pq.top();
            pq.pop();
            temp -> next= curr;
            if (curr -> next) pq. push(curr ->next);
            temp = temp ->next;
        }

        return dummy -> next;
    }
};