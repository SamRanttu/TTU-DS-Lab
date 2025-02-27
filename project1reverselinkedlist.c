#include <stdio.h>

struct ListNode {
    int val;
    struct ListNode *next;
};

struct ListNode* reverseList(struct ListNode* head) {
    struct ListNode* previous = NULL;

    while (head) {
        struct ListNode* temp = head->next;
        head->next = previous;
        previous = head;
        head = temp;
    }
    return previous;
}

int main() {
    struct ListNode* head = (struct ListNode*)malloc(sizeof(struct ListNode));
    int val = 5;

    for (int i = 0; i < val; i++) {
        head->val = i;
        head->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        head = head->next;
    }
    head = reverseList(head);
}