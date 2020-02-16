#include <iostream>
#include <malloc.h>
#include <stdio.h>
using namespace std;
struct TreeNode{
    TreeNode *left;
    int value;
    TreeNode *right;
};

int main()
{
    int n;
    while(scanf("%d", &n) == 1){
        int data[n+1];
        TreeNode *root = NULL;
        for(int i = 1; i <= n; i++){
            scanf("%d", &data[i]);
            if(root == NULL){
                TreeNode *temp = new TreeNode;
                temp->left = NULL;
                temp->value = data[i];
                temp->right = NULL;
                root = temp;
                printf("-1\n");
            }else{
                TreeNode *r = root;
                while(r != NULL){
                    if(data[i] < r->value && r->left == NULL){
                        TreeNode *temp = new  TreeNode;
                        temp->left = NULL;
                        temp->value = data[i];
                        temp->right = NULL;
                        r->left = temp;
                        printf("%d\n", r->value);
                        break;
                    }else if (data[i] > r->value && r->right == NULL){
                        TreeNode *temp = new  TreeNode;
                        temp->left = NULL;
                        temp->value = data[i];
                        temp->right = NULL;
                        r->right = temp;
                        printf("%d\n", r->value);
                        break;
                    }else if (data[i] < r->value){
                        r = r->left;
                        continue;
                    }else if (data[i] > r->value){
                        r = r->right;
                        continue;
                    }
                }
            }
        }
    }
    return 0;
}
