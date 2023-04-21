//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

// typedef long long ll;
// typedef pair<int, int> ii;
// typedef vector<ii> vii;
// typedef vector<int> vi;
// #define M 1000000007
// #define print(x) cout << x
// #define prints(x) cout << x << " "
// #define println(x) cout << x << "\n"
class node
{
public:
    int data;
    node *next;
   node(int data)
   {
       this->data=data;
       next=NULL;
   }
};
void create(node* head,int data)
{
    cout<<"smdc ";
    if(head==NULL)
    {
        head=new node(data);
        cout<<head->data;
        return;
    }
    node* n=new node(data);
    n->next = head;
    head = n;
    cout<<"a"<<head->data;
}
void display(node* head)
{
    //cout<<"skdmc";
    while(head!=NULL)
    {
        cout << head->data << "-->";
        head=head->next;
    }
}
node* recReverse(node* &head)
{
    if(head->next==NULL || head==NULL)
    {
        return head ;
    }
    node* shead=recReverse(head->next);
    head->next->next=head;
    head->next=NULL;
    return shead;

}
void address_pointing(node * head,int i)
{
    if(i==1)
    {
        cout<<head;
    }
}

int main(){
    //cout<<"sd c";
     node* head= NULL;
    create(head,4);
    //cout<<"abc";
     create(head,5);
    //  create(head,1);
    // display(head);
    // head=recReverse(head);
    // cout<<"\n";
    // display(head);
    // cout<<head<<endl;
    // address_pointing(head,1);


    return 0;
}
