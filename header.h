struct node
{
	int value;
	struct node* next;
};
typedef struct node node;
typedef struct node* link;

link createnode(int);
int calculatecount(link);
void reverseprint(link, int);
void printmiddle(link, int);
void printlist(link, int);
void deleteodd(link, int);
void printeven(link, int);