#include<iostream>

using namespace std;

class matrix
{
	private:
		int a[10][10],i,j,x,r1,c1,z,h,out[10];
	public: 
	void creat(){
		cout<<"\n enter size of array1 : ";
		cin>>r1;
		cin>>c1;
		cout<<"\n enter "<<r1*c1<<" elements \n";
		for (i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cin>>a[i][j];
			}
			cout<<"\n";
		}
		
		cout<<"the first array \n";
		for (i=0;i<r1;i++){
			for(j=0;j<c1;j++){
				cout<<a[i][j]<<",";
			}
			cout<<"\n";
		}
		
		
	}
	void sadelpoint(){
		cout<<"Sadel point : \n";
		for(x=0;x<c1;x++){
			z=a[x][0];
			for (i=0;i<r1;i++){
				if (a[x][i]<h)
					h=a[x][i];
					z=j;
			}
			for(j=0;j<c1;j++){
				if (h>a[j][z]){
					break;
				}
			}
			if (j=!c1){
				cout<<h<<"\n";
			}	
		}
	
	}
	
	
	
	
	
};
int main(){
	int ch;
	cout<<"finction to get data \n";
	matrix a;
	a.creat();
	a.sadelpoint();
	
}  	 	




















