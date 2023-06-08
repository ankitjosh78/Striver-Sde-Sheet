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

LinkedListNode<int> *reverseLinkedList(LinkedListNode<int> *head) {
  // Write your code here
  LinkedListNode<int> *current = head;
  LinkedListNode<int> *prev = NULL;
  LinkedListNode<int> *next;
  while (current) {
    next = current->next;
    current->next = prev;
    prev = current;
    current = next;
  }
  return prev;
}
