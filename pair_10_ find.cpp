#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<pair<int,int>>p={{2,3},{4,5},{6,8}};
    pair<int,int>q={4,5};
    int n=find(p.begin(),p.end(),q)-p.begin();
    cout<<n;

}

