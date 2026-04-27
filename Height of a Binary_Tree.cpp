//Problem 
Statement: https://www.hackerrank.com/challenges/tree-height-of-a-binary-tree/problem

#include <bits/stdc++.h>
//thing to remeber 
//Clearly define the problem
//Break larger problems down into smaller problems
//Solve the problem abstractly(do not just jump to code)
//Write pseudo - code
/*The tree node has data, left child and right child
//Height = number of Nodes
class Node 
{
    int data;
    Node* left;
    Node* right;
};

*/
int height(Node* root)
{
    // Write your code here.
    int height(Node * root) 
    {
        if (root == nullptr) return -1;

        int leftHeight = height(root->left);
        int rightHeight = height(root->right);

        return max(leftHeight, rightHeight) + 1;
    }

}

//Pseudo Code
//function height(node):
//if node is NULL :
//return -1
//leftHeight = height(node.left)
//rightHeight = height(node.right)
//return max(leftHeight, rightHeight) + 1
}; //End of Solution