#include<iostream>
#include<set>
using namespace std;
int main (){
    cout<<"enter the size of set :";
    int n;
    cin>>n;
    cout<<"enter the element of set \n";
    set<int> set1;// declaration of set 
    for (int i=0;i<n;i++){
        int ele;
        cin>>ele;
        set1.insert (ele);// insertion of set 
    }
    // trivaring and printing of set   
   for (set<int>:: iterator itr =set1.begin();itr!=set1.end();itr++){
    cout<<*itr<<" ";
   }
   cout<<endl;
  // deleton of set elements
   set1.erase(5);//delete element by value 
    for (set<int>:: iterator itr =set1.begin();itr!=set1.end();itr++){
    cout<<*itr<<" ";
   }cout<<endl;
   set<int>::iterator itr = set1.begin();
   advance(itr,3);
    set1.erase(itr);// delete the element by position 
    for (set<int>:: iterator itr =set1.begin();itr!=set1.end();itr++){
    cout<<*itr<<" ";
   }cout<<endl;
   set<int> :: iterator str_ptr= set1.begin();
   str_ptr++;
   set<int> ::iterator end_ptr = set1.begin();
   advance (end_ptr,3);
   set1.erase (str_ptr,end_ptr);// delete the range 
    for (set<int>:: iterator itr =set1.begin();itr!=set1.end();itr++){
    cout<<*itr<<" ";
   }
   return 0;
}