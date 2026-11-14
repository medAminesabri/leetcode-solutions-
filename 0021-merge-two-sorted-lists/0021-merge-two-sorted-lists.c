/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* mergeTwoLists(struct ListNode* list1, struct ListNode* list2) {
    struct ListNode* tmp1 = list1 ;
    struct ListNode* tmp2 = list2 ; 
    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode)) ;
    newhead->next = NULL ; 
    struct ListNode* tmp3 = newhead ;
    if(list1 == NULL)return list2 ; 
    if(list2 == NULL)return list1 ; 
    while(tmp1 && tmp2){
        tmp3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        if(tmp1->val <= tmp2->val){
            tmp3->val = tmp1->val ; 
            tmp1 = tmp1->next ;
        }
        else{
            tmp3->val = tmp2->val ; 
            tmp2 = tmp2->next ; 
        }
        tmp3->next->next = NULL ; 
        tmp3 = tmp3->next ; 
    }
    while(tmp1){
        tmp3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp3->next->next = NULL ; 
        tmp3->val = tmp1->val ;
        tmp3 = tmp3->next ; 
        tmp1 = tmp1->next ; 
    }
    while(tmp2){
        tmp3->next = (struct ListNode*)malloc(sizeof(struct ListNode));
        tmp3->next->next = NULL ; 
        tmp3->val = tmp2->val ; 
        tmp3 = tmp3->next ; 
        tmp2 = tmp2->next ; 
    }
    tmp3 = newhead ; 
    while(tmp3->next->next != NULL){
        tmp3=tmp3->next ; 
    }
    tmp3->next = NULL ;  
    return newhead ; 
}