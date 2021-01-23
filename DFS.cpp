#include <iostream>
#include<stack>
#include"caynhiphan.h"
using namespace std;
bool DFS(int goal,TREE t){
    stack <TREE> Mo;
    stack <int> Dong;
    int n;
    Mo.push(t);
    while(!Mo.empty()){
        NODE *p=Mo.top();
        cout<<"\nket qua: "<<p->data;
        Mo.pop();
        if(p->data==goal){
            // cout<<"\nXuat dong: ";
            // while(!Dong.empty()){
            //     cout<<" "<<Dong.front();
            //     Dong.pop();
            // }
            return true;
        
        }
        if(p->pRight!=nullptr){
            Mo.push(p->pRight);
        }
        if(p->pLeft!=nullptr){
            Mo.push(p->pLeft);
        }
        
        Dong.push(p->data);

    }
    return false;
}
int main(){
    TREE t;
    CreateTree(t);
    ifstream filein;
	filein.open("input.txt", ios_base::in);
	Doc_File(t, filein);
	cout << "\nXuat cay theo dang NLR: ";
	NLR(t);
    int x;
    cout<<"\nNhap x:";
    cin>>x;
    if(DFS(x,t)){
        cout<<"tim thay";
    };
    
    return 0;
}