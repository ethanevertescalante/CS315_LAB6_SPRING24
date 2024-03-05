//
// Created by Ali Kooshesh on 3/1/23.
//

#include "BinSearchTree.hpp"

BinSearchTree::BinSearchTree(): root{nullptr} {}

TreeNode *BinSearchTree::insert( TreeNode *root, int v ) {
    if( root == nullptr )
        return new TreeNode( v );
    if( root->value() < v )
        root->rightSubtree( insert( root->rightSubtree(), v ) );
    else
        root->leftSubtree( insert( root->leftSubtree(), v ) );
    return root;
}

void BinSearchTree::insert(int v) {
    // Insert v in the tree if it is not already a member.
    if( ! find(v) ) {
        root = insert(root, v);
    }
}

int BinSearchTree::size() {
    // Write this function first!
    return 0;
}

bool BinSearchTree::find(int v) {
    // You need to write a recursive implementation for this function.
    // Right now, it returns false so that insert can do its job.
    // That means, it will add duplicates to the tree, which is not desirable.
    return false;
}

BinSearchTree::~BinSearchTree() {
    // This function should delete every node in the tree.
    // To do that, you will have to recursively traverse the tree, using
    // a post-order traversal.
}