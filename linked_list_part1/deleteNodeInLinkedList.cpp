#include <bits/stdc++.h>

/****************************************************************

    Following is the class structure of the LinkedListNode class:

    template <typename T>
    class LinkedListNode
    {
    public:
        T data;
        LinkedListNode<T> *next;
        LinkedListNode(T data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

*****************************************************************/

void deleteNode(LinkedListNode<int> *node) {
  // Write your code here.
  LinkedListNode<int> *prev = node;
  while (node) {
    if (node->next) {
      prev = node;
      node->data = node->next->data;
      node = node->next;
    } else {
      prev->next = NULL;
      return;
    }
  }
}
