/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* findLastNode(ListNode* head, int k){
        int cnt = 1;
        while(head!=nullptr){
            if(cnt == k) return head;
            cnt++;
            head = head->next;
        }
        return head;
    }

    ListNode* rotateRight(ListNode* head, int k) {
        if(head == nullptr || head->next == nullptr) return head;
        ListNode* tail = head;
        int cnt = 1;
        while(tail->next!=nullptr){
            cnt++;
            tail = tail->next;
        }
        if(k ==  0) return head;
        k = k%cnt;
        tail->next = head;
        ListNode* lastNode = findLastNode(head,cnt-k);
        head = lastNode->next;
        lastNode->next = nullptr;

        return head;
    }
};