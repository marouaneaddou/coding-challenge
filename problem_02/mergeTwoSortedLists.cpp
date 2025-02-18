


# include <iostream>
using namespace std;


    // Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

class Solution {
    public:
        ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
            
            if ( list1 == nullptr && list2 == nullptr ) return nullptr;
            
            ListNode* head = new ListNode(0);
            ListNode* tmp = head;

            while( list1 != nullptr && list2 != nullptr ) {
                ListNode *node = new ListNode();
                if ( list1->val <= list2->val ) {
                    node->val = list1->val;
                    tmp->next = node;
                    list1 = list1->next;
                }
                else {
                    node->val = list2->val;
                    tmp->next = node;
                    list2 = list2->next;
                }
                tmp = tmp->next;
            }

            while( list1 != nullptr ) {
                tmp->next = new ListNode(list1->val);
                list1 = list1->next;
                tmp = tmp->next;
            }

            while( list2 != nullptr ) {
                tmp->next = new ListNode(list2->val);
                list2 = list2->next;
                tmp = tmp->next;
            }

            return head->next;
        }
};