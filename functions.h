typedef long long int Item_type;

typedef struct Tree_Node_Pers_tag 
{
	Item_type key;
    Item_type height;
	char email[50];
    char fname[10];
    char lname[10];
	struct Tree_Node_Pers_tag *left;
	struct Tree_Node_Pers_tag *right;
    
}Tree_Node_Pers;

typedef struct Tree_Node_Pro_tag
{
	Item_type key;
    Item_type height;
    Item_type off_no;
    char email[20];
    char fname[10];
    char lname[10];
    char add[60];
	char insti[50];		
	struct Tree_Node_Pro_tag *left;
	struct Tree_Node_Pro_tag *right;
	
}Tree_Node_Pro;


// Tree_Node_Pers* Insert_Tree(Tree_Node_Pers* n, Tree_Node_Pers_Pers* Root);
Tree_Node_Pers* insert_Pers(Tree_Node_Pers* node, long long  int key);
Tree_Node_Pro* insert_Pro(Tree_Node_Pro* node, long long  int key);

Tree_Node_Pers* newNode_Pers(long long int key);
Tree_Node_Pro* newNode_Pro(long long int key);

Tree_Node_Pers *leftRotate_Pers(Tree_Node_Pers *x);
Tree_Node_Pro *leftRotate_Pro(Tree_Node_Pro *x);

Tree_Node_Pers *rightRotate_Pers(Tree_Node_Pers *x);
Tree_Node_Pro *rightRotate_Pro(Tree_Node_Pro *x);

Tree_Node_Pers * minValueNode_Pers(Tree_Node_Pers* node);
Tree_Node_Pro * minValueNode_Pro(Tree_Node_Pro* node);

void In_Order_Pers(Tree_Node_Pers *root);
void In_Order_Pro(Tree_Node_Pro *root);

Tree_Node_Pers* deleteNode_Pers(Tree_Node_Pers* root, long long int key);
Tree_Node_Pro* deleteNode_Pro(Tree_Node_Pro* root, long long int key);


int max(long long int a,long long int b);

int height_Pers(Tree_Node_Pers* Root);
int height_Pro(Tree_Node_Pro* Root);

int getBalance_Pers(Tree_Node_Pers* N);
int getBalance_Pro(Tree_Node_Pro* N);

Tree_Node_Pers * Create_Contact_Pers(Tree_Node_Pers* node);
Tree_Node_Pro * Create_Contact_Pro(Tree_Node_Pro* node);

// Tree_Node_Pers *main_per ;
// Tree_Node_Pro *main_pro ;

void In_Order_Pers_D(Tree_Node_Pers *root);
void In_Order_Pro_D(Tree_Node_Pro *root);

void Search_Pers(Tree_Node_Pers* root,long long int no);
void Search_Pro(Tree_Node_Pro* root,long long int no);

void Print_Pers(Tree_Node_Pers* root, long long int k1, long long int k2);
void Print_Pro(Tree_Node_Pro* root, long long int k1, long long int k2);

void Edit_Pers(Tree_Node_Pers* root, long long int no);
void Edit_Pro(Tree_Node_Pro* root, long long int no);