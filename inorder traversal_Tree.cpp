//Complete the  function in your editor below, which has  parameter: a pointer to the root of a binary tree. It must print the values in the tree's inorder traversal as a single line of space-separated values.
//Input Format
//Our hidden tester code passes the root node of a binary tree to your $inOrder* function.
//Inorder traversal is always
//left sub-tree first, then the root node, and finally the right sub-tree.
#include <bits/stdc++.h>

using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;
    Node(int d) {
        data = d;
        left = NULL;
        right = NULL;
    }
};

class Solution {
public:
    Node* insert(Node* root, int data) {
        if (root == NULL) {
            return new Node(data);
        }
        else {
            Node* cur;
            if (data <= root->data) {
                cur = insert(root->left, data);
                root->left = cur;
            }
            else {
                cur = insert(root->right, data);
                root->right = cur;
            }

            return root;
        }
    }

    /* you only have to complete the function given below.
    Node is defined as

    class Node {
        public:
            int data;
            Node *left;
            Node *right;
            Node(int d) {
                data = d;
                left = NULL;
                right = NULL;
            }
    };

    */

    void inOrder(Node* root) {
        if (root == nullptr) return;

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }

    int main()
    {
        // Building the sample tree manually
        Node* root = new Node(1);
        root->right = new Node(2);
        root->right->right = new Node(5);
        root->right->right->left = new Node(3);
        root->right->right->right = new Node(6);
        root->right->right->left->right = new Node(4);

        inOrder(root);

        return 0;
    }

}; //End of Solution