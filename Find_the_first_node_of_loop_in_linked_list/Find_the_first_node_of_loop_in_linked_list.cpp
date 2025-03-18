
# include <iostream>
# include <unordered_map>

using namespace std;



struct Node
{
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

class Solution {
    public:
      Node* findFirstNode(Node* head) {
          std::unordered_map<Node*, int> node;
          Node* slow = head; 
          for ( ; slow != nullptr; ) {
             if ( node[slow] == 1 ) return slow;
             node[slow]++;
             slow = slow->next;
          }
          return nullptr;
      }
  };

int main(){}