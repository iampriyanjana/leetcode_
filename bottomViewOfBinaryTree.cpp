#include <bits/stdc++.h> 
/*************************************************************
 
    Following is the Binary Tree node structure.

    class BinaryTreeNode 
    {
    public : 
        T data;
        BinaryTreeNode<T> *left;
        BinaryTreeNode<T> *right;

        BinaryTreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }
    };

*************************************************************/

vector<int> bottomView(BinaryTreeNode<int> * root){

    // Write your code here.
     vector<int> v;
    if(root==NULL){
        return v;
    }
    queue<pair<BinaryTreeNode<int> *,int>> q;
    map<int,int> mpp;
 
    q.push({root,0});
    while(!q.empty()){
        auto it=q.front();
        q.pop();
        BinaryTreeNode<int> *node=it.first;
        int line=it.second;
            mpp[line]=node->data;
            
            if(node->left!=NULL){
                q.push({node->left,line-1});
            }
            if(node->right!=NULL){
                q.push({node->right,line+1});
            }
        }
        for(auto val:mpp){
           v.push_back(val.second);
        }
        return v;
    
}
