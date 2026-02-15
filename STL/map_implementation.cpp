#include<iostream>
using namespace std;
#include <unordered_map>
#include<map>

int main(){
    unordered_map<string,int>m;
    //insert
    pair<string,int>p=make_pair("Rahul",3);
    m["kumar"]=4;
    m["og"]=6;

    //search
    cout<<m["Rahul"]<<endl;
    cout<<m.at("kumar")<<endl;
    cout<<m["og"]<<endl;

    //size
    cout<<m.count("Rahul")<<endl;
    cout<<m.size()<<endl;

}
