#include <iostream>

struct Node
{
    int value;
    Node* left;
    Node* right;
};

Node* createNode(int value)
{
    Node* newNode = new Node();
    newNode->value = value;
    newNode->left = nullptr;
    newNode->right = nullptr;
    return newNode;
}

Node* insert(Node* root, int value)
{
    if (root == nullptr)
    {
        return createNode(value);
    }

    if (value < root->value)
    {
        root->left = insert(root->left, value);
    }
    else if (value > root->value)
    {
        root->right = insert(root->right, value);
    }
    else
    {
        std::cout << "Value " << value << " already exists in the tree." << std::endl;
    }

    return root;
}

void printLeavesPreorder(Node* root)
{
    if (root == nullptr)
    {
        return;
    }

    if (root->left == nullptr && root->right == nullptr)
    {
        std::cout << "Leaf: " << root->value << std::endl;
    }

    printLeavesPreorder(root->left);
    printLeavesPreorder(root->right);
}

void destroyTree(Node* root)
{
    if (root == nullptr)
    {
        return;
    }

    destroyTree(root->left);
    destroyTree(root->right);
    delete root;
}

int main()
{
    Node* root = nullptr;

    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    std::cout << "Leaf nodes (preorder traversal):" << std::endl;
    printLeavesPreorder(root);

    destroyTree(root);
    root = nullptr;

    return 0;
}