#include <stdio.h>
#include <string.h>

using namespace std;

struct Node{
    Node *leftChild;
    char value;
    Node *rightChild;
};

Node* createTree(char *DLR, char *LDR){
    Node *Tree = NULL;
    int length = 0;
    for (int i = 0; i < 26; i++){
        if(DLR[i] >= 'A' && DLR[i] <= 'Z')
            length++;
    }
    if (length == 0)
        return NULL;
    if (length > 0){
        Tree = new Node;
        Tree->value = DLR[0];
        int location;
        int i;
        for (i = 0; i < length; i++){//LENGTH
            if(LDR[i] == DLR[0])
                break;
        }
        location = i;

        char ldr_left[26] = {0};//LDR LEFT CHILD
        for (i = 0; i < location; i++){
            ldr_left[i] = LDR[i];
        }
        char ldr_right[26] = {0};//LDR RIGHT CHILD
        int j = 0;
        for (i = location+1; i < length; i++){
            if(LDR[i] >= 'A' && LDR[i] <= 'Z' ){
                ldr_right[j] = LDR[i];
                j++;
            }
        }

        int len_left = location;//LEFT LENGTH
        int len_right = j;//RIGHT LENGTH

        char dlr_left[26] = {0};
        j = 0;
        for(i = 1; i < len_left+1; i++){
            dlr_left[j] = DLR[i];
            j++;
        }
        char dlr_right[26] = {0};
        j = 0;
        for(i = len_left+1; i < length; i++){
            if(DLR[i] >= 'A' && DLR[i] <= 'Z'){
                dlr_right[j] = DLR[i];
                j++;
            }
        }
        Tree->leftChild = createTree(dlr_left, ldr_left);
        Tree->rightChild = createTree(dlr_right, ldr_right);
        return Tree;
    }
}

void getLRD(Node *root){
    if (root == NULL){
        return;
    }
    getLRD(root->leftChild);
    getLRD(root->rightChild);
    printf("%c", root->value);
}

int main()
{
    char DLR[26] = {0};
    char LDR[26] = {0};
    while(scanf("%s", DLR) == 1){
        scanf("%s", LDR);
        Node *root = createTree(DLR, LDR);
        getLRD(root);
        printf("\n");
        for(int i = 0; i < 26; i++){
            DLR[i] = 0;
            LDR[i] = 0;
        }
    }

    return 0;
}
