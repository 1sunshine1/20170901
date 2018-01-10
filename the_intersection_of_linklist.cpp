int getLastNode(ListNode *head, ListNode **p) {
    *p = NULL;
    if (head == NULL) return 0;
    int cnt = 1;
    *p = head;
    while ((*p)->next != NULL) {
        ++cnt;
        (*p) = (*p)->next;
    }
    return cnt;
}
ListNode* findIntersectionListNode(ListNode *head1, ListNode *head2) {
    ListNode *p[2];
    int cnt[2], sub;
    cnt[0] = getLastNode(head1, &p[0]);
    cnt[1] = getLastNode(head2, &p[1]);
    if (p[0] != p[1]) return NULL;
    p[0] = cnt[0] <= cnt[1] ? head1 : head2;
    p[1] = cnt[0] > cnt[1] ? head1 : head2;
    sub = abs(cnt[0] - cnt[1]);
    while (sub--) {
        p[1] = p[1]->next;
    }
    while (p[0] != p[1]) {
        p[0] = p[0]->next;
        p[1] = p[1]->next;
    }
    return p[0];
}
