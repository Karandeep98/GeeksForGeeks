#include <bits/stdc++.h>
using namespace std;
struct Node
{
    int data;
    struct Node* next;
};
Node* addOne(Node *head);
Node* newNode(int key)
{
    Node *temp = new Node;
    temp->data = key;
    temp->next = NULL;
    return temp;
}
Node *ZZZZZZZZZZ(Node *head)
{
    Node * prev   = NULL;
    Node * current = head;
    Node * next;
    while (current != NULL)
    {
        next  = current->next;
        current->next = prev;
        prev = current;
        current = next;
    }
    return prev;
}
void print(struct Node *head)
{
	Node *temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data;
		temp=temp->next;
	}
}
// This function mainly uses addOneUtil().
int main() {
	// your code goes here
	int T;
	cin>>T;
	int no;
	while(T--)
	{
		struct Node *head = NULL;
        struct Node *temp = head;

		cin>>no;
		while(no!=0)
			{
			if(head==NULL)
			head=temp=newNode(no%10);
			else
			{
				temp->next = newNode(no%10);
				temp=temp->next;
			}
			no/=10;
		}
		head = ZZZZZZZZZZ(head);

		head=addOne(head);
		print(head);
		cout<<endl;
	}
	return 0;
}// } Driver Code Ends
/* Node structure
struct Node
{
    int data;
    Node* next;
}; */


// Returns new head of linked List.
Node *addOne(Node *head)
{
    string s;
  struct Node* temp=head;
  struct Node* temp2= new Node();
   while(temp!=NULL){
       s+=to_string(temp->data);
       temp=temp->next;
   }
  int x=stoi(s);
  x++;
  s=to_string(x);
  reverse(s.begin(),s.end());
  int len=s.length();
  x=stoi(s);
  temp=head;
  while(temp!=NULL){
      temp->data=x%10;
       temp=temp->next;
       x/=10;
       len--;
   }
   temp=head;
   while(temp->next!=NULL){
       temp=temp->next;
   }
   if(len>0){
       temp2->data=x;
       temp2->next=NULL;
    temp->next=temp2;


   }

   return head;
}
