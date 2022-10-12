/*
Provided a binary tree, program visits nodes of the trees that are making a slope of -1 with the previous node.
*/

#include <bits/stdc++.h>
using namespace std;
 
// Tree node
struct Node {
    int data;
    Node *left, *right;
};
 
vector<int> diagonal(Node* root)
{
    vector<int> diagonalNodes;
    if (!root)
        return diagonalNodes;
 
    queue<Node*> q;
    Node* node = root;
 
    while (node) {
 
        // Add current node to output
        diagonalNodes.push_back(node->data);
        // If left child available, add it to queue
        if (node->left)
            q.push(node->left);
      
        if (node->right)
            node = node->right;
 
        else {
            if (!q.empty()) {
                node = q.front();
                q.pop();
            }
            else {
                node = NULL;
            }
        }
    }
    return diagonalNodes;
}
 
// Utility method to create a new node
Node* newNode(int data)
{
    Node* node = new Node;
    node->data = data;
    node->left = node->right = NULL;
    return node;
}
 
// Driver program
int main()
{
    Node* root = newNode(8);
    root->left = newNode(3);
    root->right = newNode(10);
    root->left->left = newNode(1);
    root->left->right = newNode(6);
    root->right->right = newNode(14);
    root->right->right->left = newNode(13);
    root->left->right->left = newNode(4);
    root->left->right->right = newNode(7);
 
    vector<int> diagonalValues = diagonal(root);
    for (int i = 0; i < diagonalValues.size(); i++) {
        cout << diagonalValues[i] << " ";
    }
    cout << endl;
 
    return 0;
}
