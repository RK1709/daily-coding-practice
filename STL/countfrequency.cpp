/*❓ Problem:

Print frequency of each element in array.

Example:
Input:  [1,2,2,3,3,3]
Output:
1 → 1
2 → 2
3 → 3*/
#include <iostream>
#include <unordered_map>
#include <vector>
using namespace std;
int main(){
    vector<int>v={1,2,2,3,3,3};

    unordered_map<int,int>m;
    for(auto &x:v){
        m[x]++;
    }
    for(auto &it:m){
cout<<it.first<<"->"<<it.second<<endl;
    }

}
