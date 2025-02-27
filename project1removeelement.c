#include <stdio.h>

struct ListNode {
  int val;
  struct ListNode *next;
};

struct ListNode *removeElements(struct ListNode *head, int val) {
  struct ListNode *temp = (struct ListNode *)malloc(sizeof(struct ListNode));
  temp->next = head;
  struct ListNode *curr = temp;
  while (curr->next != NULL) {
    if (curr->next->val == val)
      curr->next = curr->next->next;
    else
      curr = curr->next;
  }
  return temp->next;
}

int main() {
  struct ListNode *head = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->val = 1;
  head->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->val = 2;
  head->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->next->val = 4;
  head->next->next->next = (struct ListNode *)malloc(sizeof(struct ListNode));
  head->next->next->next->val = 3;

  head = removeElements(head, 4);
  return 0;
}
