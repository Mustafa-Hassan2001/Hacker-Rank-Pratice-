#include<iostream>
#include<queue>
using namespace std;
struct Node{
	int data;
	struct Node* left;
	struct Node* right;
};

Node* newNode(int val){
	Node *temp = new Node();
	temp->data = val;
	temp->right = NULL;
	temp->left = NULL;
	return temp;
}

Node* insert(Node* root, int val){
	if(root == NULL){
		root = newNode(val); 
	}
	else if(val < root->data)
		root->left = insert(root->left,val);
	else
		root->right = insert(root->right,val);
	return root;	
}

void display(Node* root){
		cout<<root->data<<" -> ";
		display(root->right);
	}


Node* findMaximum(Node * node){
	if(node == NULL)
		return node;
	if(node->right == NULL){
			return node;
	}
	else
		return findMaximum(node->right);
}
Node* findMinimum(Node * node){
	if(node == NULL)
		return node;
	if(node->left == NULL){
			return node;
	}
	else
		return findMinimum(node->left);
}
void preorder(Node* node){
	if(node != NULL){
		cout<<node->data<<" ";
		preorder(node->left);
		preorder(node->right);
	}
}
void postorder(Node* node){
	if(node!=NULL){
		postorder(node->left);
		postorder(node->right);
		cout<<node->data<<" ";
	}
}
void inorder(Node* node){
	if(node!=NULL){
		postorder(node->left);
		cout<<node->data<<" ";
		postorder(node->right);
	}
}

void levelorder(Node* node){
	if(node == NULL)
		return;
	queue<Node*> myqueue;
	myqueue.push(node);
	while(!myqueue.empty()){
		Node* frontNode = myqueue.front();
		cout<<frontNode->data<<" ->";
		if(frontNode->left != NULL)
			myqueue.push(frontNode->left);
		if(frontNode->right != NULL)
			myqueue.push(frontNode->right);
		myqueue.pop();
	}
}
bool search(Node* root,int item){
	if(root==NULL)
		return false;
	if(item == root->data){
			return true;
	}
	else if(item < root->data){
		search(root->left,item);		
	}
	else if(item > root->data){
		search(root->right,item);
	}
	else
	return false;
}
int findHeight(Node *node){
	if(node == NULL){
		return -1;
	}
	else{
		int leftheight = findHeight(node->left);
		int rightheight = findHeight(node->right);
		return max(leftheight,rightheight) + 1;
	}
}
int main(){
	cout<<"Enter the  no of elements\n";
	int n,item;
	Node *root = NULL;
	cin>>n;
	cout<<"Enter the datas to insert\n";
	for(int i=0;i<n;i++){
		cin>>item;
		root = insert(root,item); //store the returned valued into the root itself everytime necessary
	}
	
	cout<<"Tree formed\n";
	display(root);
	
	cout<<"\nFinding the minimum and maximul value in the tree\n";
	Node *min = findMinimum(root);
	Node *max = findMaximum(root);
	if(min == NULL )
		cout<<"Tree is empty\n";
	else{
		cout<<"Maximum element is : "<<max->data<<" \n";
		cout<<"Minimum element is : "<<min->data<<" \n";
	}
	cout<<"Finding the height of the binary tree\n";
	cout<<"Height of the tree: "<<findHeight(root);
	cout<<"\nPreorder traversal: ";
	preorder(root);
	cout<<"\nPostOrder traversal: ";
	postorder(root);
	cout<<"\nInorder traversal: ";
	inorder(root);
	cout<<"\nLevel Order traversal: ";
	levelorder(root);
	//Searching any element in the tree..
	cout<<"\nEnter the  item to find (Enter -1 to exit searching)\n";
	do{
		cin>>item;
		if(search(root,item))
			cout<<"Found..\n";
		else
			cout<<"Not Found!\n";
	}
	while(item!=-1);
	return 0;
}
