ListNode *deleteValNode(ListNode *head, int val) {
    if (head == NULL) return NULL;
    ListNode *virtualHead = (ListNode *)malloc(sizeof(ListNode));
    ListNode *p, *q;
    virtualHead->next = head;
    virtualHead->pre = NULL;
    head->pre = virtualHead;
    p = head;
    while (p) {
        if (p->val == val) {
            if (p->next != NULL) {
                p->next->pre = p->pre;
            }
            p->pre->next = p->next;
            q = p;
            p = p->next;
            free(q);
        } else {
            p = p->next;
        }
    }
    head = virtualHead->next;
    if (head != NULL) {
        head->pre = NULL;
    }
    free(virtualHead);
    return head;
}
ListNode* twoWayLinkListUnique(ListNode *head) {
    ListNode *p, *q;
    p = head;
    while (p) {
        q = deleteValNode(p->next, p->val);
        if (q != NULL) {
            q->pre = p;
        }
        p->next = q;
        p = p->next;
    }
    return head;
}
