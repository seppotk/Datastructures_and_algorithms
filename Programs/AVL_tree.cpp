// C++ program for AVL Tree  
#include<iostream> 
using namespace std; 
   
// An AVL tree node  
class AVLNode  
{  
    public: 
    int key;  
    AVLNode *left;  
    AVLNode *right;  
    int depth;  
};  
   
//get max of two integers 
int max(int a, int b){
    return (a > b)? a : b;
}  
   
//function to get height of the tree 
int depth(AVLNode *n)  
{  
    if (n == NULL)  
        return 0;  
    return n->depth;  
}  
// allocate a new node with key passed
AVLNode* newNode(int key)  
{  
    AVLNode* node = new AVLNode(); 
    node->key = key;  
    node->left = NULL;  
    node->right = NULL;  
    node->depth = 1; // new node added as leaf 
    return(node);  
}  
// right rotate the sub tree rooted with y
AVLNode *rightRotate(AVLNode *y)  
{  
    AVLNode *x = y->left;  
    AVLNode *T2 = x->right;  
   
    // Perform rotation  
    x->right = y;  
    y->left = T2;  
   
    // Update heights  
    y->depth = max(depth(y->left),  
                    depth(y->right)) + 1;  
    x->depth = max(depth(x->left),  
                    depth(x->right)) + 1;  
   
    // Return new root  
    return x;  
}  
   
// left rotate the sub tree rooted with x 
AVLNode *leftRotate(AVLNode *x)  
{   
    AVLNode *y = x->right;  
    AVLNode *T2 = y->left;  
   
    // Perform rotation  
    y->left = x;  
    x->right = T2;  
    // Update heights  
    x->depth = max(depth(x->left),  
                    depth(x->right)) + 1;  
    y->depth = max(depth(y->left),  
                    depth(y->right)) + 1;  
   
    // Return new root  
    return y;  
}  
   
// Get Balance factor of node N  
int getBalance(AVLNode *N)  
{  
    if (N == NULL)  
        return 0;  
    return depth(N->left) -  
           depth(N->right);  
}    
//insertion operation for node in AVL tree 
AVLNode* insert(AVLNode* node, int key)  {  
    //normal BST rotation
    if (node == NULL)  
        return(newNode(key));  
   
    if (key < node->key)  
        node->left = insert(node->left, key);  
    else if (key > node->key)  
        node->right = insert(node->right, key);  
    else // Equal keys not allowed  
        return node;  
   
    //update height of ancestor node
    node->depth = 1 + max(depth(node->left),  depth(node->right));  
   
    int balance = getBalance(node);        //get balance factor
   
    // rotate if unbalanced 
   
    // Left Left Case  
    if (balance > 1 && key < node->left->key)  
        return rightRotate(node);  
   
    // Right Right Case  
    if (balance < -1 && key > node->right->key)  
        return leftRotate(node);  
  // Left Right Case  
    if (balance > 1 && key > node->left->key)  
    {  
        node->left = leftRotate(node->left);  
        return rightRotate(node);  
    }  
   
    // Right Left Case  
    if (balance < -1 && key < node->right->key)  
    {  
        node->right = rightRotate(node->right);  
        return leftRotate(node);  
    }  
    return node;  
}  
   
// find the node with minimum value 
AVLNode * minValueNode(AVLNode* node)  
{  
    AVLNode* current = node;  
   
    // find the leftmost leaf */
    while (current->left != NULL)  
        current = current->left;  
   
    return current;  
}  
// delete a node from AVL tree with the given key  
AVLNode* deleteNode(AVLNode* root, int key)  
{  
    if (root == NULL)  
        return root;  
   
    //perform BST delete 
    if ( key < root->key )  
        root->left = deleteNode(root->left, key);  
   
    else if( key > root->key )  
        root->right = deleteNode(root->right, key);  
   
else
    {  
        // node with only one child or no child  
        if( (root->left == NULL) || 
            (root->right == NULL) )  
        {  
            AVLNode *temp = root->left ?  
                         root->left :  
                         root->right;  
   
            if (temp == NULL)  
            {  
                temp = root;  
                root = NULL;  
            }  
            else // One child case  
            *root = *temp;   
            free(temp);  
        }  
   else
        {  
            AVLNode* temp = minValueNode(root->right);  
   
            root->key = temp->key;  
   
            // Delete the inorder successor  
            root->right = deleteNode(root->right,  
                                     temp->key);  
        }  
    }  
   
    if (root == NULL)  
    return root;  
   
    // update depth  
    root->depth = 1 + max(depth(root->left),  
                           depth(root->right));  
   
    // get balance factor 
    int balance = getBalance(root);  
   
    //rotate the tree if unbalanced
   
    // Left Left Case  
    if (balance > 1 &&  
        getBalance(root->left) >= 0)  
        return rightRotate(root);  
   
    // Left Right Case  
    if (balance > 1 &&  getBalance(root->left) < 0)  {  
        root->left = leftRotate(root->left);  
        return rightRotate(root);  
    }  
    // Right Right Case  
    if (balance < -1 &&  getBalance(root->right) <= 0)  
        return leftRotate(root);  
   
    // Right Left Case  
    if (balance < -1 && getBalance(root->right) > 0)   {  
        root->right = rightRotate(root->right);  
        return leftRotate(root);  
    }  
    return root;  
}  
// prints inOrder traversal of the AVL tree
void inOrder(AVLNode *root)  
{  
    if(root != NULL)  
    {  
        inOrder(root->left);
        cout << root->key << " ";  
        inOrder(root->right);  
    }  
}  
  // main code 
int main()  
{  
    AVLNode *root = NULL;  
   
    // constructing an AVL tree
    root = insert(root, 12);  
    root = insert(root, 8);  
    root = insert(root, 18);  
    root = insert(root, 5);  
    root = insert(root, 11);  
    root = insert(root, 17);  
    root = insert(root, 4);  
     
    //Inorder traversal for above tree : 4 5 8 11 12 17 18 
    cout << "Inorder traversal for the AVL tree is: \n";  
    inOrder(root);  
    root = deleteNode(root, 5);  
    cout << "\nInorder traversal after deletion of node 5: \n";  
    inOrder(root);  
   
    return 0;  
}