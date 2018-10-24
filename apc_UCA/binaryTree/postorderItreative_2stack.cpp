#include<iostream>
#include<stdlib>
#include<stack>
#include<vector>





vector<int> postorderTraversal(Root* root) {
    // 7 1 2 3 4 -1 -1 5 -1 -1 6 -1 -1 7 -1 -1
    vector<int> v;
    
    if(!root)
       return v;
    stack<TreeNode *> s1;
     stack<int> s2;
   // vector<int> v;
    s1.push(root);
    
   while(!s1.empty())
   {
       TreeNode *nn = s1.top();
       s1.pop();
       s2.push(nn->val);
       
       if(nn->left != NULL)
          s1.push(nn->left);
          
        if(nn->right != NULL)
           s1.push(nn->right);
           
  
   }
   
   while(!s2.empty())
   {
       v.push_back(s2.top());
       s2.pop();
   }
   
   return v;
}
