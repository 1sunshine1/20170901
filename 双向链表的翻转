ListNode* reverseLinkedList(ListNode *head) {
    ListNode *p, *temp;
    p = head;
    while (1) {
        temp = p->next;
        p->next = p->pre;
        p->pre = temp;
        if (p->pre == NULL) break;
        p = p->next;
    }
    return p;
}
