#include <iostream>
#include <vector>
#include <queue>

using namespace std;

// Define a structure for the tree node
struct Node {
    int value;
    Node* left;
    Node* right;

    Node(int val) : value(val), left(nullptr), right(nullptr) {}
};

// Function to swap nodes at specified levels
void swapAtLevels(Node* root, int k) {
    if (!root) return;

    queue<Node*> q;
    q.push(root);
    
    int level = 1; // Start from level 1
    while (!q.empty()) {
        int size = q.size();
        
        // Store the nodes of the current level
        vector<Node*> nodes;
        for (int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();
            nodes.push_back(current);
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        
        // Swap nodes if we are at the correct level
        if (level % k == 0) {
            for (int i = 0; i < nodes.size() / 2; i++) {
                swap(nodes[i]->left, nodes[nodes.size() - 1 - i]->left);
                swap(nodes[i]->right, nodes[nodes.size() - 1 - i]->right);
            }
        }
        level++;
    }
}

// Function to build the binary tree and perform swaps
vector<vector<int>> swapNodes(vector<vector<int>> indexes, vector<int> queries) {
    Node* root = new Node(1);
    vector<Node*> tree;
    tree.push_back(root);

    // Build the binary tree from the indexes
    for (const auto& index : indexes) {
        int parentIndex = index[0] - 1; // Convert to zero-based index
        int leftChild = index[1];
        int rightChild = index[2];

        if (parentIndex < tree.size()) {
            Node* parent = tree[parentIndex];
            if (leftChild != -1) {
                parent->left = new Node(leftChild);
                tree.push_back(parent->left);
            }
            if (rightChild != -1) {
                parent->right = new Node(rightChild);
                tree.push_back(parent->right);
            }
        }
    }

    // Perform swaps for each query
    for (int k : queries) {
        swapAtLevels(root, k);
    }

    // Collect results in level order
    vector<vector<int>> result;
    queue<Node*> q;
    q.push(root);
    
    while (!q.empty()) {
        vector<int> levelNodes;
        int size = q.size();
        for (int i = 0; i < size; i++) {
            Node* current = q.front();
            q.pop();
            levelNodes.push_back(current->value);
            
            if (current->left) q.push(current->left);
            if (current->right) q.push(current->right);
        }
        result.push_back(levelNodes);
    }

    return result;
}

// Function to print the resulting tree in level order
void printResult(const vector<vector<int>>& result) {
    for (const auto& level : result) {
        for (int value : level) {
            cout << value << " ";
        }
        cout << endl;
    }
}

int main() {
    // Sample input
    vector<vector<int>> indexes = {
        {2, 3}, // Node 1 has children 2 (left) and 3 (right)
        {4, -1}, // Node 2 has left child 4, no right child
        {5, 6}, // Node 3 has children 5 (left) and 6 (right)
        {-1, -1}, // Node 4 has no children
        {-1, -1}, // Node 5 has no children
        {-1, -1}  // Node 6 has no children
    };

    vector<int> queries = {1, 1}; // Example queries

    // Call the swapNodes function
    vector<vector<int>> result = swapNodes(indexes, queries);

    // Print the result
    cout << "Resulting tree after swaps:" << endl;
    printResult(result);

    return 0;
}
