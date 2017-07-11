/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {
    int temp = 0;
    struct ListNode* result = malloc(sizeof(struct ListNode));
    temp = temp + l1->val + l2->val;
    result->val = temp%10;
    if(temp >= 10) temp = (int)temp/10;
    else temp = 0;
    result->next = NULL;
    struct ListNode* r = result;
    while(l1->next || l2->next || temp != 0){
        if(l1->next) l1 = l1->next;
        else l1->val = 0;
        if(l2->next) l2 = l2->next;
        else l2->val = 0;
        temp = temp + l1->val + l2->val;
        
        struct ListNode* rt = malloc(sizeof(struct ListNode));;
        rt->val = temp%10;
        if(temp >= 10) temp = (int)temp/10;
        else temp = 0;
        rt->next = NULL;
        result->next = rt;
        result = result->next;
    }
    return r;
}