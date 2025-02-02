class Solution {
public:
    int numComponents(ListNode* head, vector<int>& nums)
    {
        unordered_set<int> s;
        for(auto &x:nums)
            s.insert(x);
        int count=0;
        while(head!=NULL)
        {
            if(s.find(head->val)!=s.end()) count++;
            while(head!=NULL && s.find(head->val)!=s.end())
            {
                head=head->next;
            }
            if(head!=NULL)
            head=head->next;
        }
        return count;
    }
};