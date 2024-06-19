#include<bits/stdc++.h>
using namespace std;
int main(){
    pair<int,int>p={4,5};
    pair<int,int>q={3,5};
    pair<int,int>s;
    s=max(p,q);
    cout<<s.first<<" "<<s.second<<endl;
    s=min(p,q);
    cout<<s.first<<" "<<s.second<<endl;
}

