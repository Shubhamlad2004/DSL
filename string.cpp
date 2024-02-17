#include<iostream>
#include<string.h>
using namespace std;
//Shubham 
//08/07/2023
class stri{
	private :
		char a[10],b[10],c[20];
	public:
	
	void create (){
		cout<<"What is your first name : ";
		cin.getline(a,' ');
		//cout<<"What is your last name : ";
		//cin>>b;
	}	
	void compair(){
		int x;
		x=strcmp(a,b);
		if (x==0)
			cout <<"Your name can not be your sername \n";
		else
			cout <<"Your name and sername are not same \n";
	}	
	void print(){
		cout<<"Your name is ";
		cout<<a <<" "<<b<<"\n";
	}
	void length(){
		int i=0;
		while (a[i]!='\0')
			i++;
		cout<<i<<"\n";
		//cout<<"Your name is "<<strlen(a)<<" letters long \n";
	}
	
	
	void reverc(){
		int i=0,j=0,x=0;
		
		while (a[i]!='\0')
			i++;
		for(j=i-1;j>=0;j--)
			c[x++]=a[j];
			
		cout<<c;
	}
	
	
	
	void combine(){
		strcat(a,b);
		cout<<"Combine function ="<<a<<"\n";
	}
	void copy(){
		strcpy(c,a);
		cout<<"coppy function ="<<c<<"\n";
	}
};
int main(){
	stri s;
	s.create();
	//s.compair();
	//s.print();
	//s.length();
	//s.combine();
	//s.copy();
	s.reverc();
}
