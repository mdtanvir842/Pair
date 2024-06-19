#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    v.push_back({10,12});
    v.push_back({8,11});
    v.push_back({11,9});
    v.push_back({2,4});
    v.push_back({5,9});
    v.push_back({10,11});
    v.push_back({12,45});
    v.push_back({2,54});
    v.push_back({45,1});
    sort(v.begin(),v.end());
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
