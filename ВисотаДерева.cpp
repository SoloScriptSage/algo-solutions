#include <bits/stdc++.h>

using namespace std;

struct Node{
    long long key;
    Node *left, *right;

    Node(long long x){
        key = x;
        left = right = nullptr;
    }
};

typedef Node* pNode;

void insertNode(pNode &v, long long x){
    if (v == nullptr){
        v = new Node(x);
        return;
    }

    if(v->key == x) return;

    if(x < v->key)
        insertNode(v->left, x);
    else insertNode(v->right, x);
}

pNode root;

int maxDepth(pNode v){
    if(v == nullptr) return 0;
    return max(maxDepth(v->left), maxDepth(v->right)) + 1;
}

long long x, ma;

int main(){
    root = nullptr;
    while(cin >> x)
    {
        if (x == 0)
            break;
        insertNode(root, x);
    }

    ma = maxDepth(root);
    cout << ma << endl;

    return 0;
}
