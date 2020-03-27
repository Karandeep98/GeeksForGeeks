#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    struct Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};

void append(struct Node** headRef, struct Node** tailRef, int newData) {
    struct Node* new_node = new Node(newData);

    if (*headRef == NULL) {
        *headRef = new_node;
    }

    else {
        (*tailRef)->next = new_node;
    }
    *tailRef = new_node;
}

void printList(struct Node* head) {
    while (head) {
        cout << head->data << ' ';
        head = head->next;
    }
}

int countPairs(struct Node* head1, struct Node* head2, int x);

int main() {
    int T;
    cin >> T;
    while (T--) {
        struct Node* head1 = NULL;
        struct Node* tail1 = NULL;
        struct Node* tail2 = NULL;
        struct Node* head2 = NULL;
        int n1, n2, tmp, x;
        cin >> n1;
        while (n1--) {
            cin >> tmp;
            append(&head1, &tail1, tmp);
        }
        cin >> n2;
        while (n2--) {
            cin >> tmp;
            append(&head2, &tail2, tmp);
        }
        cin >> x;
        cout << countPairs(head1, head2, x) << '\n';
    }
    return 0;
}// } Driver Code Ends
/*
Structure of the node of the linked list is as
struct Node
{
    int data;
    struct Node* next;

    Node(int x){
        data = x;
        next = NULL;
    }
};
*/
// your task is to complete this function
int countPairs(struct Node* head1, struct Node* head2, int x) {
    // Code here
    struct Node*temp1=head1;
    struct Node*temp2=head2;

   int count=0;
   vector<int> v;
   vector<int> v2;
   while(temp1!=NULL){
       v.push_back(temp1->data);
       temp1=temp1->next;
   }
    while(temp2!=NULL){
       v2.push_back(temp2->data);
       temp2=temp2->next;
   }
   sort(v.begin(),v.end());
   sort(v2.begin(),v2.end());

   int i=0,j=v2.size()-1;
   while(i<v.size() && j>=0){
       if(v[i] + v2[j]==x) {
           count++;
           if(v[i+1]==v[i]) i++;
           else if(v2[j-1]==v2[j]) j--;
           else{ i++; j--;}
       }
       else if(v[i]+v2[j]<x) i++;
       else j--;
   }

    return count;
}








