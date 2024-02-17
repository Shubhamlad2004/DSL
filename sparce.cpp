//Name - Shubham Lad
// RollNo - 51
// Practical Sparce matrix

#include<iostream>
using namespace std; 
class student {

    private:
        int a[10][10],r,c,i,j,count,sparce[10][3],x=1;
    public :
        void create(){
            cout<<"\nenter rows and columns\n";
            cin>>r>>c;
            cout<<"\nENTER "<<r*c<<" Elements\n";
            for(i=0;i<r;i++)
                for(j=0;j<c;j++)
                    cin>>a[i][j];
        }
        void checksparce(){
            if (c==0){
                cout<<"matrix is empty ";
            }
            else{
                count=0;
                for(i=0;i<r;i++)
                    for(j=0;j<c;j++)
                        if (a[i][j]==0){
                            count++;
                        }
                if (count>r*c-count){
                    cout<<"Matrix is Sparce \n";
                }
                else{
                    cout<<"Matrix is not sparce \n";
                }
            }
        }
        void convert(){
                    for (i=0;i<r;i++){
                        for (j=0;j<c;j++){
                            if (a[i][j]!=0){
                                sparce[x][0]=i;
                                sparce[x][1]=j;
                                sparce[x][2]=a[i][j];
                                x++;
                            }
                        }
                    }
                    sparce[0][0]=r;
                    sparce[0][1]=c;
                    sparce[0][2]=x-1;
        }
        void printsp(){
            for(i=0;i<x;i++){
                for(j=0;j<3;j++)
                    cout<<sparce[i][j] <<" ";
                cout<<"\n";
            }
        }


};
int main()
   {

    student s;
    s.create();
    s.checksparce();
    s.convert();
    s.printsp();
   }
