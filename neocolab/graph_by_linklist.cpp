// #include<iostream>
// using namespace std;



// // Pre Order - Root Left Right (RLR)
// // Inorder - Left Root Right (LRR)
// // Post Order - Left Right Root (LRR)

// int main(){

// }
// //Graph by linklist
// struct Node{
//     int data;
//     Node *left;
//     Node *right;
// };

// //In order traversal

// int in_order(root, nodes){
//     if(root && root.left){
//         in_order(root.left, nodes);
//     }
// }


// // pre order traversal
// int pre_order(root, nodes){
//     nodes.push(root.data);
//     if(root && root.left){
//         pre_order(root.left, nodes);
//     }
//     if(root && root.right){
//         pre_order(root.right, nodes);
//     }
//     return nodes;
// }


// int post_order(root, nodes){
//     if(root && root.left){
//         post_order(root.left, nodes);
//     }
//     if(root && root.right){
//         post_order(root.right, nodes);
//     }
//     nodes.push(root.data);
//     return nodes;
// }
