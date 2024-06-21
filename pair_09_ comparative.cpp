#include<bits/stdc++.h>
using namespace std;
//we can use both &p1,&p2 and p1,p2.both are ok.
int cmp(pair<int,int>&p1,pair<int,int>&p2){
    if(p1.first>p2.first){
        return 1;
    }
    else if(p1.first==p2.first){
        return p1.second<p2.second;
    }
    return 0;
}
int main(){
    int n,k;
    cin>>n>>k;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end(),cmp);
    for(auto u:v){
        cout<<u.first<<" "<<u.second<<endl;
    }
}
