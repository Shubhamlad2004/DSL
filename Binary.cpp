#include<iostream>

using namespace std;

class Bina{
    public:
    void B(){
        int arr[10]={10,9,8,7,6,5,4,3,2,1};
        int key,bull=20;
        cout<<"Ente a element ";
        cin>>key;
        for (int i=0;i<sizeof(arr);i++){
            if (key==arr[i]){
                bull=i;
                break;
            }
        }
        if (bull<20)
            cout<<"The key is present at :- "<<bull;
        
        else 
            cout<<"The key is not present\n";

    }
};



int main(){
    Bina obj;
    obj.B();
}


