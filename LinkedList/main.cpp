    #include<bits/stdc++.h>
    using namespace std;

    struct ListNode {
          int val;
          ListNode *next;
          ListNode() : val(0), next(NULL) {}
      };


    void print(ListNode* a){
        while(a!= NULL){

            cout<< a->val ;
            if(a->next!=NULL) cout<<"-->";
            a=a->next;
        }
        cout<<endl;
    }
    struct ListNode* head=NULL;

    void insertAtBeg(int d){
        struct ListNode* temp = new ListNode();

        temp->val=d;
        temp->next=head;
        head=temp;

    }
    void insertAtEnd(int d){
        struct ListNode* temp = new ListNode();
         struct ListNode* a = head;
        temp->val=d;
        temp->next=NULL;
        if(head==NULL){
            head=temp;
        }
        else{
            while(a->next!=NULL){
                a=a->next;
            }
            a->next=temp;
        }
    }
    bool isPalindrome(ListNode* A) {
    vector<int> v;
    struct ListNode* temp=A;
    while(temp!=NULL){
        v.push_back(temp->val);
        temp=temp->next;
    }
    int i=0,j=v.size()-1;
    while(i<j){
        if(v[i]==v[j]){
            i++;j--;
        }
        else return false;
    }
    return true;
}

int main(){

     struct ListNode* temp = head;

   /* insertAtEnd(1);insertAtEnd(2);insertAtEnd(3);insertAtEnd(4);insertAtEnd(5);
    print(head);
    if(isPalindrome(head)) cout<<"Given linked list is a palindrome";
    else cout<<"Given linked list is not a palindrome";*/

    insertAtEnd(1);insertAtEnd(2);insertAtEnd(3);insertAtEnd(2);insertAtEnd(1);
    print(head);
    if(isPalindrome(head)) cout<<"Given linked list is a palindrome";
    else cout<<"Given linked list is not a palindrome";

return 0;
}






