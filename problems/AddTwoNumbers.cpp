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
        
        int sum = 0;
        bool carry = false;
        ListNode* l3 = nullptr;
        ListNode* zeroNode = new ListNode();
        
        //Iterate through both linked lists, adding a pair each time.
        while (l1 != nullptr || l2 != nullptr) {
            if (l1 == nullptr) {
                sum = l2->val + 0; 
            }
            else if (l2 == nullptr) {
                sum = l1->val + 0; 
            }
            else {
                sum = l1->val + l2->val;
            }
            
            if (carry) {
                sum++;
            }
            if (sum > 9) {
                carry = true;
                sum -= 10;
            }
            else {
                carry = false;
            }
            cout << sum << endl;
            l3 = appendNode(&l3, sum); 
            cout << "returnlist value: " << l3->val << endl;
            
            if (l1 != nullptr) {
                l1 = l1->next;
            }
            
            if (l2 != nullptr) {
                l2 = l2->next;    
            }

        }
                
            if (carry) {
                appendNode(&l3, 1);
            }
        return l3;
        
    }
    
    int addTwoNodes(ListNode* l1, ListNode* l2) {

        return l1->val + l2->val;  
        
    }
    
    ListNode* appendNode(ListNode** l, int newVal) {
        
        cout << "appending node" << endl;
        ListNode* lNew = new ListNode(newVal);
        ListNode* last = *l; 
        
        //If the list doesn't exist, make it and add the head.
        if (*l == nullptr) {
            cout << "Making start of list" << endl;
            
            *l = lNew;
            //cout << l->value << endl;
            return *l; 
        }

        //Append a node if the list exists already
        while (last->next != nullptr) {
            last = last->next;
        }
        
        //Then, since we've traversed the list, attach the new node
        last->next = lNew;
        return *l;
   
        
    }
    
    
};