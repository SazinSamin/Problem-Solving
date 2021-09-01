#include <bits/stdc++.h>
using namespace std;

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

class Solution {
    public:
  		Node* insert(Node* root, int data) {
            if(root == NULL) {
                return new Node(data);
            } else {
                Node* cur;
                if(data <= root->data) {
                    cur = insert(root->left, data);
                    root->left = cur;
                } else {
                    cur = insert(root->right, data);
                    root->right = cur;
               }

               return root;
           }
        }
/*The tree node has data, left child and right child 
class Node {
    int data;
    Node* left;
    Node* right;
};

*/
    // The height of a binary tree is the number of edges between the tree's root and its furthest leaf
    // This function compute the height of the tree...
    // We need two base case here...
    // 1. If any node is NULL 
    // 2. Another if a node right & left both subtree is NULL
    // If we just use root == NULL base case we get height + 1
    // bacause when we go deep, without middle base case we go to a position where node is NULL
    // But when we return from there, as we recursively add 1 to compute height
    // we add 1 here also, but there no edges between leaf and NULL pointer.
    // So we add the middle base case to identify the leaf node and return from there
    //But we still need 1st base case,because if a node have only one child, then another would be NULL, 
    //So we have to return from there.
    
    int height(Node* root) {
       // 1st base case
       if(root == NULL){
           return 0;
       }
       //2nd base case 
       if(root->left == NULL && root->right == NULL){
           return 0;
       }
       return 1 + max(height(root->left), height(root->right));
    }

}; //End of Solution

int main() {
  
    Solution myTree;
    Node* root = NULL;
    
    int t;
    int data;

    std::cin >> t;

    while(t-- > 0) {
        std::cin >> data;
        root = myTree.insert(root, data);
    }
  
    int height = myTree.height(root);
    
  	std::cout << height;

    return 0;
}

