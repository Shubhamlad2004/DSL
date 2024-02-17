#include<iostream>
using namespace std;
class node{
    public:
        int data;
        node *next;
        node(int x){
            data=x;
        }
};


class cll{
    private:
        node *head;

    public:
        cll(){
            head=NULL;

        }
        void create(){
            node *temp,*r;
            int i,n,x;
            cout <<"\nhow many nodes you want to create :";
            cin>>n;
            cout<<"Enter Data :";
            cin>>x;
            head=new node(x);
            head->next=head;
            r=head;
            for(i=1;i<n;i++){
                cout<<"\nEnter Data :";
                cin>>x;
                temp=new node(x);
                temp->next=head;
                r->next=temp;
                r=temp;
            }
        }

        void display(){
            if (head==NULL)
                cout<<"List empty \n";
            else{
                node *r,*temp;
                temp=head;
                while (r!=head)
                {
                    cout<<temp->data<<"\t";
                    temp=temp->next;
                    r=temp;
                }
                cout<<"\n";
                
            }
        }

        void insertatbegning(){
            node *r,*temp;
            int x;
            cout<<"Enter Data to insert at Begning :";
            cin>>x;
            temp=new node(x);
            if (head==NULL){
                head=temp;
                head->next=head;
            }
            else{
                r=head;
                while (r->next!=head){
                    r=r->next;
                }
                r->next=temp;
                temp->next=head;
                head=temp;

            }

        }

        void insertatEnd(){
            node *r,*temp;
            int x;
            cout<<"Enter Data to insert at Begning :";
            cin>>x;
            temp=new node(x);
            if (head==NULL){
                head=temp;
                head->next=head;
            }
            else{
                r=head;
                while (r->next!=head){
                    r=r->next;
                }
                r->next=temp;
                temp->next=head;
            }

        }

};



int main (){
    cll c;
    c.create();
    c.display();
    c.insertatbegning();
    c.display();
    c.insertatEnd();
    c.display();
}