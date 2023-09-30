#include<iostream>
#include<set>
#include<vector>
using namespace std;
 set<int>  possiMarks (int n,int p,int q){
    set<int> possimarks;
    for (int i=0;i<=n;i++){
        for (int j=0;j<=n;j++){
            int correct =i;
            int incorrect =j;
            int unattempt = n-i-j;
            if (unattempt>=0){
                int score= correct*p + incorrect*q;
                possimarks.insert(score);
            }
            else break;
        }
    }
    return possimarks;
}
int main (){
    cout<<"enter the number of question : ";
    int n;
    cin>>n;
    cout<<"inter marks for correct question : ";
    int p;
    cin>>p;
    cout<<"enter the marks for incorrect question : ";
    int q;
    cin>>q;
    set<int>ans = possiMarks(n,p,q);
    cout<<"the possible marks is \n";
    for (auto marks : ans){
        cout<<marks<<" ";
    }
    cout<<endl;
}