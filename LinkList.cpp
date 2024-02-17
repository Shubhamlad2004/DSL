#include <iostream>
using namespace std;
 
class node{
	public:
		int data;
		node *next;
		
		node(int x){
			data =x;
			next =NULL;
		
		} 
};





class sll{
	private:
		node *head;
		string word;
	
	public: 
		sll(){
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
		node *search(string w){
			if (head==NULL){
				cout<<"List is empty";
				return head;
			}
			else{
				int key;
				
				node *temp=head;
				node *r=temp;
				r->next=head;
				cout<<"Enter a key to "<<w<<" :";
				cin>>key;
				while(temp!=NULL){	
					if (temp->data==key)
						break;
					r=temp;
					temp=temp->next;
				}
				if (temp==NULL){
					cout<<"\n Node is not present\n";	
				}
				else
				   cout<<"\n Node is  present\n";
				return r;
			}	
		}


		void insertbeg(){
			int x;
			node *temp;
			cout<<"Give me a eliment to insert at begning :";
			cin>>x;
			temp=new node(x);
			temp->next=head;
			head=temp;
			
		}
		void insertend(){
			if (head==NULL){
				int x;
				cout<<"Give me a eliment to insert at begning :";
				cin>>x;
				head=new node(x);
			}
			else{
				int x;
				node *temp,*r;
				cout<<"Give me a eliment to insert at end :";
				cin>>x;
				temp=head;
				while (temp->next!=NULL)
					temp=temp->next;
				
				r=new node(x);
				if (temp==head)
					head->next=r;
				
				temp->next=r;
			}
		}

		void insertbefore(){
			if(head==NULL){
				cout<<"List is empty";
			}
			else{		
				node *temp,*r;
				int x;
				r=search("Insert data before ");
				if (r->next==NULL)
					cout<<"insertaction failed \n";
				else if(r->next==head) {
					cout<<"Give me a eliment to insert before the searched element :";
					cin>>x;
					temp =new node(x);
					temp->next=r->next;
					head=temp;
				}
				else{
					cout<<"Give me a eliment to insert before the searched element :";
					cin>>x;
					temp =new node(x);
					temp->next=r->next;
					r->next=temp;
				}
				display();
			}
		}


		void delbeg(){
			if (head==NULL)
				cout<<"List is empty";
			else{
				node *temp=head;
				head=head->next;
				delete temp;
			}
		}

		void delend(){
			if (head==NULL)
				cout<<"List is empty";
			else{
				node *temp,*r;
				temp=head;
				while (temp->next!=NULL)
				{
					r=temp;
					temp=temp->next;
				}
				if (temp==head){
					head=NULL;
				}
				else{
					r->next=NULL;
				}
				delete temp;

			}
			
		}


		void delspecefic(){
			node *temp,*r;

			if (head==NULL)
				cout<<"Link list is empty \n";		
			else{
				r=search("Delete");

				if (r->next==NULL){
					cout<<"NO element is Deleated \n";
				}
				else if(r->next==head){
					temp=head;
				  	head=head->next;
				}
				else{
					temp=r->next;			
					r->next=temp->next;		
				}
				delete temp;
				display();

			}
		}

};




int main(){
	int ch;
	cout<<"Function for Link List \n";
	sll s;
	s.create();
	s.search("Search");
	s.delspecefic();
	do{
		cout<<"Enter number you want the function to run \n1 To Print Data\n2 To search any element\n3  ";
		cin>>ch;
		switch(ch){
			case 1:
				s.display();
			break;
			case 2:
				s.search("search");
			break;
		}
	}while(ch!=0);

}
