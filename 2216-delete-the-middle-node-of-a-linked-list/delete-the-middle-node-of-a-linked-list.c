/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* deleteMiddle(struct ListNode* head) {
    int n=0;
    if(head == NULL) return NULL;
    if(head->next == NULL){
        free(head);
        return NULL;
    }
    struct ListNode *temp=head;
    while(temp!=NULL){
        n++;
        temp=temp->next;
    }
    int mid = n/2;
    temp=head;
    for(int i=0; i<mid-1; i++){
        temp=temp->next;
    }
    struct ListNode *toDelete=temp->next;
    temp->next=toDelete->next;
    free(toDelete);
    return head;
}