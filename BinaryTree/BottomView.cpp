#include <iostream>
#include <map>
#include <queue>
using namespace std;

// Structure for a binary tree node
struct Node {
    int data;
    Node* left, *right;
    
    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

// Function to perform the bottom view traversal
void bottomView(Node* root) {
    if (root == NULL)
        return;

    // Map to store the bottom view of the tree.
    // Key: Horizontal distance, Value: Node's value at that horizontal distance.
    map<int, int> bottomViewMap;

    // Queue for level order traversal.
    // Each element is a pair containing the node and its horizontal distance.
    queue<pair<Node*, int>> q;

    // Start with the root at horizontal distance 0
    q.push({root, 0});

    while (!q.empty()) {
        // Extract the front of the queue
        pair<Node*, int> p = q.front();
        q.pop();

        Node* node = p.first;
        int hd = p.second;

        // Update the bottom view map with the current node's data
        bottomViewMap[hd] = node->data;

        // If the node has a left child, enqueue it with horizontal distance hd-1
        if (node->left != NULL)
            q.push({node->left, hd - 1});

        // If the node has a right child, enqueue it with horizontal distance hd+1
        if (node->right != NULL)
            q.push({node->right, hd + 1});
    }

    // Print the bottom view
    for (auto it : bottomViewMap) {
        cout << it.second << " ";
    }
    cout << endl;
}

// Driver code
int main() {
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);
    // root->left->right->left = new Node(8);
    // root->left->right->right = new Node(9);
         
        //         1
        //       /   \
//              2     3
//            /  \ /   \
//           4   5 6    7


    cout << "Bottom view of the given binary tree is:\n";
    bottomView(root);

    return 0;
}
