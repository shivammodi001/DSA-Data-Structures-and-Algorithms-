#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;
    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};

int heightOfBinaryTree(Node* root) {
    if (root == nullptr) {
        // edge count is height in the question
        // that is why we return -1 for empty trees
        return -1; //empty tree = -1
    }
    // left subtree height
    int leftHeight = heightOfBinaryTree(root->left);
    // right subtree height
    int rightHeight = heightOfBinaryTree(root->right);
    // return the maximum of the two heights
    return 1 + max(leftHeight, rightHeight);
}

<<<<<<< HEAD
// using level order traversal
int heightOfBinaryTreeIterative(Node* root) {
    if (root == nullptr) {
        return -1; // empty tree = -1
    }
    queue<Node*> q;
    q.push(root);
    int height = -1; // start from -1 to count edges
    while (!q.empty()) {
        int levelSize = q.size();
        height++; // increment height for each level
        for (int i = 0; i < levelSize; i++) {
            Node* currentNode = q.front();
            q.pop();
            if (currentNode->left) {
                q.push(currentNode->left);
            }
            if (currentNode->right) {
                q.push(currentNode->right);
            }
        }
    }
    return height;
}

=======
>>>>>>> 0e33bb6b43646af21838f024f23a57164dfeaeaa
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    cout << "Height of binary tree: " << heightOfBinaryTree(root) << endl;
    return 0;
}