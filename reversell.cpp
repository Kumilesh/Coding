//Balayya Forever
#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef pair<int, int> ii;
typedef vector<ii> vii;
typedef vector<int> vi;
#define M 1000000007
//#define for(u,i,j) for(int u=i;u<j;u++)
#define print(x) cout << x
#define prints(x) cout << x << " "
#define println(x) cout << x << "\n"

struct Node{
    int data;
    struct Node* next;
    Node(int data){
        this->data=data;
        next=NULL;
    }
};
struct LinkedList{
    Node* head;
    LinkedList(){
        head=NULL;
    }
    Node* reverse(Node* head){
        if(head==NULL|| head->next==NULL)return head;
        Node * rest=reverse(head->next);
        head->next->next=head;
        head->next=NULL;
    }
};
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);

    
}
