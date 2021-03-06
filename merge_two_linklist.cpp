ListNode* mergeTwoSortedLinkList(ListNode *head1, ListNode *head2) {
    ListNode *p[2], *q, *ret;
    ret = (ListNode *)malloc(sizeof(ListNode));
    p[0] = head1;
    p[1] = head2;
    q = ret;
    int ind;
    while (p[0] != NULL || p[1] != NULL) {
        if (p[1] == NULL) {
            ind = 0;
        } else if (p[0] == NULL) {
            ind = 1;
        } else {
            ind = (p[0]->val < p[1]->val ? 0 : 1);
        }
        q->next = p[ind];
        p[ind] = p[ind]->next;
        q = q->next;
        q->next = NULL;
    }
    q = ret->next;
    free(ret);
    return q;
}//
