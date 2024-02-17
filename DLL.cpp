#include <iostream>
using namespace std;
 
class node{
	public:
		int data;
		node *next,*pre;
		
		node(int x){
			data =x;
			next =NULL;
			pre=NULL;
		
		} 
};
class DLL
{
	private:
		node *head;
	public :
		DLL()
		{
			head=NULL;
		}
		void create(){
			int n,i,x;
			node *temp,*r;
			cout<<"How many Values do you want to save\n";
			cin>>n;
			if (n==0)
				cout<<"0 Eliments entered \n";
			else
			{
				cout <<"\nEnter Data :";
				cin >>x;
				head=new node(x);
				r=head;
				for(i=0;i<n-1;i++){
					cout <<"\n Enter Data :";
					cin >>x;
					temp=new node(x);
					r->next=temp;
					temp ->pre=r;
					r=temp;
				}
				display();
			}
		}
		void display(){
			if (head==NULL)
				cout<<"List is empty";
				
			else{
				node *temp=head;
				while(temp!=NULL){
					cout<<temp->data<<"\t";
					temp=temp->next;
				}
				cout<<"\n";
			}
		}
		node *search()
		{
			if (head==NULL){
				cout<<"List is empty";
				return head;
			}
			else{
				int key;
				cout<<"Enter a key to Search :";
				cin>>key;
				node *temp=head;
				while(temp!=NULL){	
					if (temp->data==key)
						break;
					temp=temp->next;
				}
				if (temp==NULL){
					cout<<"Node is not present\n";	
				}
				else
				   	cout<<"Node is  present\n";
				return temp;
			}
		}
		void insertafter()
		{
			if (head==NULL){
				cout<<"List is empty";
			}
			else{		
				node *temp,*r,*nex;
				int x;
				cout<<"Insert element ";
				temp=search();
				nex=temp->next;
				if (temp==NULL)
					cout<<"insertaction failed because element not found\n";
				else
				{
					cout<<"Give me a eliment to insert after the searched element :";
					cin>>x;
					r=new node(x);
					if (temp->next!=NULL)
						nex->pre=r;	
					r->next=temp->next;
					r->pre=temp;
					temp->next=r;
				}
			}
			display();
		}
		
		void delspecefic(){
			node *temp,*r;

			if (head==NULL)
				cout<<"Link list is empty \n";		
			else{
				cout<<"Delete ";
				temp=search();

				if (temp==NULL)
					cout<<"NO element is Deleated \n";
				
				else if(temp==head){
				  	head=head->next;
				  	head->pre=NULL;
				}
				else{
					r=temp->next;
					r->pre=temp->pre;
					r=temp->pre;
					r->next=temp->next;			
						
				}
				delete temp;
				display();

			}
		}
		
};

int main()
{
	DLL D;
	D.create();
	D.search();
	D.insertafter();
	D.delspecefic();
	
}


