#include<iostream>

using namespace std;

class matrix
{
	private:
		int a[10][10],b[10][10],c[10][10],i,j,r1,r2,c1,c2;
	public: 
	void creat(){
		cout<<"\n enter size of array1 : ";
		cin>>r1>>c1;
		cout<<"\n enter "<<r1*c1<<" elements \n";
		for (i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>a[i][j];
			}
			cout<<"\n";
		}
		
		
		
		cout<<"\n enter size of array2 : ";
		cin>>r2>>c2;
		cout<<"\n enter "<<r2*c2<<" elements \n";
		for (i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				cin>>b[i][j];
			}
			cout<<"\n";
		}
		
		cout<<"the first array /n";
		for (i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cout<<a[i][j]<<",";
			}
			cout<<"\n";
		}
		
		cout<<"the second array /n";
		for (i=0;i<r2;i++){
			for(j=0;j<c2;j++){
				cout<<b[i][j]<<",";
			}
			cout<<"\n";
		}
		
		
	}
	void add(){
		cout<<"The addiction of array is \n";
		if ((r1==r2)&&(c1==c2))
			for (i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					c[i][j]=a[i][j]+b[i][j];
					cout<<c[i][j]<<",";
				}
				cout<<"\n";
			}
		else
			cout<<"Addiction can not be done";
	}
	void sub(){
		cout<<"The substraction of array is \n";
		if ((r1==r2)&&(c1==c2))
			for (i=0;i<r1;i++){
				for(j=0;j<c1;j++){
					c[i][j]=a[i][j]-b[i][j];
					cout<<c[i][j]<<",";
				}
				cout<<"\n";
			}
		else
			cout<<"substraction can not be done";
	}
	
	
	
	
	
};
int main(){
	int ch;
	cout<<"finction to get data \n";
	matrix a;
	a.creat();
	a.add();
	a.sub();	
}  	 	




















