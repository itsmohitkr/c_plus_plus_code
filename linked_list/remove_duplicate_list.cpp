node* removeDuplicates(node* head) {

    node*prev = head;
    node*curr = head->next;

    while (curr != NULL) {
        if (prev->data != curr->data) {
            prev = curr;
            curr = curr->next;
        }
        else {
            curr = curr->next;
            prev->next = curr;

        }
    }
    return head;
}