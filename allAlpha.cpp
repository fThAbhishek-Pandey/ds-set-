#include<iostream>
#include<algorithm>
#include<set>
using namespace std;
bool isAlpha (string str){
    if (str.size()<26) return false;
    transform(str.begin(),str.end(),str.begin(),::tolower);
    set<char> alpha;
    for (auto ch:str){
        alpha.insert(ch);
    }
    return alpha.size()==26;
}
int main(){
    string str;
    cin>>str;
    if (isAlpha(str)) cout<<"All the chacrector are present in this string \n";
    else cout<<"here is missing one or more character\n";
}