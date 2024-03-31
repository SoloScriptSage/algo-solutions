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

void postOrder(pNode v){
    if(v == nullptr) return;

    postOrder(v->left);
    postOrder(v->right);
    cout << v->key << endl;
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

    postOrder(root);

    return 0;
}
