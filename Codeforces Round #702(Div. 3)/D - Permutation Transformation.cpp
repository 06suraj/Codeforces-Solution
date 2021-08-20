#include<bits/stdc++.h>
using namespace std;
/*tree functions taken from https://www.geeksforgeeks.org/construct-binary-tree-from-inorder-traversal/ */
class node  
{  
    public: 
    int data;  
    node* left;  
    node* right;  
};  
  
/* Prototypes of a utility function to get the maximum  
value in inorder[start..end] */
int max(int inorder[], int strt, int end);  
  
/* A utility function to allocate memory for a node */
node* newNode(int data);  
  
/* Recursive function to construct binary of size len from  
Inorder traversal inorder[]. Initial values of start and end  
should be 0 and len -1. */
node* buildTree (int inorder[], int start, int end)  
{  
    if (start > end)  
        return NULL;  
  
    /* Find index of the maximum element from Binary Tree */
    int i = max (inorder, start, end);  
  
    /* Pick the maximum value and make it root */
    node *root = newNode(inorder[i]);  
  
    /* If this is the only element in inorder[start..end],  
    then return it */
    if (start == end)  
        return root;  
  
    /* Using index in Inorder traversal, construct left and  
    right subtress */
    root->left = buildTree (inorder, start, i - 1);  
    root->right = buildTree (inorder, i + 1, end);  
  
    return root;  
}  
  
/* UTILITY FUNCTIONS */
/* Function to find index of the maximum value in arr[start...end] */
int max (int arr[], int strt, int end)  
{  
    int i, max = arr[strt], maxind = strt;  
    for(i = strt + 1; i <= end; i++)  
    {  
        if(arr[i] > max)  
        {  
            max = arr[i];  
            maxind = i;  
        }  
    }  
    return maxind;  
}  
  
/* Helper function that allocates a new node with the  
given data and NULL left and right pointers. */
node* newNode (int data)  
{  
    node* Node = new node(); 
    Node->data = data;  
    Node->left = NULL;  
    Node->right = NULL;  
  
    return Node;  
}  
  
/* This funtcion is here just to test buildTree() */
void printInorder (node* node)  
{  
    if (node == NULL)  
        return;  
  
    /* first recur on left child */
    printInorder (node->left);  
  
    /* then print the data of node */
    cout<<node->data<<" ";  
  
    /* now recur on right child */
    printInorder (node->right);  
}  
int height( node* nod,int ata){
        // code here 
        if(nod==0)return 0;
        queue<node*>n;
        int h=0,count=0;
        n.push(nod);
        while(1)
        {
            count=n.size();
            if(count==0)return h;
            h++;
            while(count>0)
            {
                node*temp=n.front();
                n.pop();
                if(temp->data==ata)
                return h;
                if(temp->left!=0)
              n.push(temp->left);
                
                if(temp->right!=0)
                n.push(temp->right);
                count--;
                
            }
        }
    }
int main()
{
       int t;cin>>t;
       while(t--){
   
        int n;cin>>n;
        int arr[n];for(int i=0;i<n;i++)cin>>arr[i];
        node *root = buildTree(arr, 0, n - 1); 
        for(int i=0;i<n;i++)
        {
            cout<<height(root,arr[i])-1<<" ";
        }
        cout<<"\n";}
    
}
