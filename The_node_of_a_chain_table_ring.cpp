ListNode* linkedListCycleLinkedNode(ListNode *head) {
    ListNode *p, *q;
    if (head == NULL) return NULL;
    p = q = head;
    do {
        p = p->next;
        q = q->next;
        if (q == NULL) break;
        q = q->next;
        if (q == NULL) break;
    } while (p != q);
        if (q == NULL) return NULL;
        int cnt = 0;
        do {
            p = p->next;
            q = q->next->next;
            ++cnt;
        } while (p != q);
        p = q = head;
        while (cnt--) {
            q = q->next;
        }
        while (p != q) {
            p = p->next;
            q = q->next;
        }
    return p;
}
