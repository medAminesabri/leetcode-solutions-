/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    if(head == NULL || head->next ==NULL )return true ;
    struct ListNode* p = head->next ;
    struct ListNode* q = head ; 
    struct ListNode* j = NULL ; 
    int c = 0 , i = 0 ;  
    while(q){
        c++ ; 
        q = q->next ;
    }
    q=head ;
    int T[c] ; 
    i = 0 ;
    while(q){
        T[i] = q->val ;
        i++;
        q = q->next ;  
    }
    q = head ;
    while(p->next){
        q->next = j ;
        j=q;
        q = p ; 
        p = p->next ; 
    } 
    p->next = q ; 
    q->next = j ; 
    j= p ;
    struct ListNode* k = j ;
    i = 0 ; 
    while(k){
        if(k->val != T[i]){
            return false ; 
        }
        i++ ; 
        k = k->next ; 
    }
return true ; 
}
