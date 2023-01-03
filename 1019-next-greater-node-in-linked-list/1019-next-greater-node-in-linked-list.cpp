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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int>res;
        ListNode* n=head;
        while (n != NULL) {
            res.push_back(n->val);
            n = n->next;
        }
        int sz=res.size();
    ;
        stack<int>q;
      vector<int>ans(sz,0);
        
       for(int i=sz-1;i>=0;i--){
           while(! q.empty() && res[q.top()]<=res[i])
            {
                q.pop();
            }
            if(!q.empty()) ans[i]=res[q.top()];
            q.push(i);
        }
        return ans;
    }
  };
        /*for(int i=sz;i>=0;i--)
        {
            while(! q.empty() && res[q.top()]<=res[i])
            {
                q.pop();
            }
            if(!q.empty())
            {
               ans[i]=res[q.top()];
                
            }
                
            q.push(i);
            
        }
        return ans;
        
    }

*/