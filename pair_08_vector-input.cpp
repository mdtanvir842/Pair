#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    /*cin>>v.first;
    cin>>v.second;*/
    for(int i=0;i<5;i++){
        pair<int,int>p;
        cin>>p.first>>p.second;
        v.push_back({p.first,p.second});
    }
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
