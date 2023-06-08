/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

Node *removeKthNode(Node *head, int K) {
  // Write your code here.
  Node *ans = new Node();
  ans->next = head;
  Node *fast = ans, *slow = ans;
  for (int i = 1; i <= K; i++) {
    if (!fast)
      return NULL;
    fast = fast->next;
  }
  while (fast->next) {
    fast = fast->next;
    slow = slow->next;
  }
  slow->next = slow->next->next;
  return ans->next;
}
