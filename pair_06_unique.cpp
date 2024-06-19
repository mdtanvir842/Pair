#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>v;
    v.push_back({10,12});
    v.push_back({8,11});
    v.push_back({11,9});
    v.push_back({2,54});
    v.push_back({2,4});
    v.push_back({5,9});
    v.push_back({10,11});
    v.push_back({11,9});
    v.push_back({12,45});
    v.push_back({2,54});
    v.push_back({45,1});
    v.push_back({10,12});
    v.push_back({5,9});
    sort(v.begin(),v.end());
    int sz=unique(v.begin(),v.end())-v.begin();
    for(int i=0;i<sz;i++){
        cout<<v[i].first<<" "<<v[i].second<<endl;
    }
}

