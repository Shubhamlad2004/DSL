#include<iostream>

using namespace std;

class matrix
{
	private:
		int a[10][10],r,c,i,j,big,smo,row[10],col[10];
	public: 
	void getdata(){
		cout<<"\n enter size of row : ";
		cin>>r;
		cout<<"\n enter size of colem : ";
		cin>>c;
		cout<<"\n enter "<<r*c<<" elements \n";
		for (i=0;i<r;i++){
			for(j=0;j<c;j++){
				cin>>a[i][j];
			}
			cout<<"\n";
		}
		
	}
	void putdata(){
		for (i=0;i<r;i++){
			for(j=0;j<c;j++){
				cout<<a[i][j]<<",";
			}
			cout<<"\n";
		}
	}
	void biggest(){
		cout<<"The biggest element is : ";
		big=a[0][0];
		for (i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(big<a[i][j]){
					big=a[i][j];
				}
			}
		}
		cout<<big<<"\n";
	}
	void smoller(){
		cout<<"The smolest element is :";
		smo=a[0][0];
		for (i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(smo>a[i][j]){
					smo=a[i][j];
				}
			}
		}
		cout<<smo<<"\n";
	}
	
	void bigrow(){
		cout<<"The biggest element in every row is: \n";
		for (i=0;i<r;i++){
			row[i]=a[i][0];
			for(j=0;j<c;j++){
				if(row[i]<a[i][j]){
					row[i]=a[i][j];
				}
			}
			cout<<"Row "<<i+1<<" = "<<row[i]<<"\n";
		}

	}
	
	void smollrow(){
		cout<<"The smolest element in every row is: \n";
		for (i=0;i<r;i++){
			row[i]=a[i][0];
			for(j=0;j<c;j++){
				if(row[i]>a[i][j]){
					row[i]=a[i][j];
				}
			}
			cout<<"Row "<<i+1<<" = "<<row[i]<<"\n";
		}

	}
	
	
	
	void bigc(){
		cout<<"The biggest element in every colem is: \n";
		for (i=0;i<c;i++){
			col[i]=a[0][i];
			for(j=0;j<r;j++){
				if(col[i]<a[j][i]){
					col[i]=a[j][i];
				}
			}
			cout<<"colem "<<i+1<<" = "<<col[i]<<"\n";
		}

	}


	void insert (){

	}

	void  maximum(){
		int max=a[0][0];
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if (a[i][j]<max){
					max=a[i][j];
				}
			}
		}
		cout <<"The biggest element in the array is :"<<max;
	}
	
	void search() {
		cout<<"enter a key element ";
		int key;
		cin>>key;
		for(i=0;i<r;i++)
			for(j=0;j<c;j++)
				if(a[i][j]==key){
					cout<<"element found";
					break;
				}
		if(i==r && j==c){
			cout<<"element not found";
		}
			
		
	}
	
	
};
int main(){
	// int ch;
	// cout<<"finction to get data \n";
	matrix a;
	a.getdata();
	a.search();
	
	// do{
	//  cout<<"Enter number you want the function to run \n 1 To Print Data \n 2 To get Biggest element \n 3 To get Smollest element \n 4 To get the biggest element in every row \n 5 To get the smollest element in every row \n 6 To get the biggest element in every row\n  : ";
	 
	//  cin>>ch;
	//  switch(ch){
	//  	case 1:
	//  		a.putdata();
	//  	break;
	//  	case 2:
	//  		a.biggest();
	//  	break;
	//  	case 3:
	//  		a.smoller();
	//  	break;
	//  	case 4:
	//  		a.bigrow();
	//  	break;
	//  	case 5:
	//  		a.smollrow();
	//  	break;
	//  	case 6:
	//  		a.bigc();
	//  	break;
	 	
	//  }
	
	// }while(ch=0);

	

	
	
	
	
	
}  	 	
// 1 2 3 4 5 6 7
// 3 4 6 7 8 6 8
