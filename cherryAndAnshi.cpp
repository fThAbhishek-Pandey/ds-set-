#include<iostream>
#include<set>
#include<string>
using namespace std;
int main (){
    cout<<"enter the number of name which added anshi : ";
    int n;
    cin>>n;
    cout<<"enter the names written by Anshi in invite list \n";
    set<string> inviteList;
    for (int i=0;i<n;i++){
            string name;
            cin>>name;
            inviteList.insert(name);
    }
    cout<<"the final list is \n";
    for (auto name:inviteList){
            cout<<name<<" ";
    }
    cout<<"\nthe totale invite friend is : "<<inviteList.size()<<endl;
    return 0;
}