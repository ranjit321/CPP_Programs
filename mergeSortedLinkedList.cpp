

/* Program  to merge two sorted linked List using extra space */
 #include<stdio.h>
 using namespace std;
 #include<bits/stdc++.h>

struct Node{
    int data;
    Node *next;
    Node(int x)
    {
        data=x;
        next=NULL;
    }

};

void printList(Node * head)
{
    while(head!=NULL)
    {
     cout<<head->data<<" ";
     head=head->next;
    }
    cout<<endl;
}

Node * mergeList(Node * head1, Node * head2)
{
    Node *dummy= new Node(0);
    Node * head=dummy;
    while(head1!=NULL && head2!=NULL)
    {
        
    if(head1->data <=head2->data)
    {
        head->next=head1;
        head1=head1->next;
        head=head->next;
    }
    else
    {
        head->next=head2;
        head2=head2->next;
        head=head->next;
    }
    }
   while(head1!=NULL)
   {
        head->next=head1;
        head1=head1->next;
        head=head->next;
   }
   
   while(head2!=NULL)
   {
        head->next=head2;
        head2=head2->next;
        head=head->next;
   }
   
   return dummy->next;
}

Node * mergeList_o1(Node *head1, Node * head2)
{
    
}
 int main()
 {
  Node *head1=NULL, *head2=NULL;
  Node * curr;
  int size1, size2;
  cin>>size1>>size2;

  while(size1--)
  {
    int data;
    cin>>data;
    if(head1==NULL)
     {
        head1=new Node(data);
        curr=head1;
     }
     else{
        curr->next=new Node(data);
        curr=curr->next;
     }
  }
  while(size2--)
  {
    int data;
    cin>>data;
    if(head2==NULL)
    {
        head2=new Node(data);
        curr=head2;
    }
    else{
        curr->next=new  Node(data);
        curr=curr->next;
    }
  }

printList(head1);
printList(head2);
printList(mergeList(head1, head2));
  return 0;
 }
