#include<iostream>
#include<vector>
#include<set>
using namespace std;
int main(){
    cout<<"enter the number of element in first vector : ";
    int n;
    cin>>n;
    cout<<"enter the element of first vector \n";
    vector<int> vec1(n);
    for (int i=0;i<n;i++){
        cin>>vec1[i];
    }
    cout<<"enter the number of element in second vector : ";
    int m;
    cin>>m;
    cout<<"enter the element of second vector \n";
    vector<int> vec2(m);
    for (int i=0;i<m;i++){
        cin>>vec1[i];
    }
    int sum=0;
    set<int> s;
    for(int i=0;i<vec1.size();i++){
        s.insert(vec1[i]);
    }
    for (auto ele: vec2){
        if (s.find(ele)!=s.end()) sum+= ele;
    }
    cout<<"sum : "<<endl;
    return 0;
}