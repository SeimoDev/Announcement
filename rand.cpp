#include<bits/stdc++.h>
using namespace std;
int RANK(){
    int k=rand()%46;
    if(k==11||k==43||k==7||k==26||k==24||k==29||k==15||k==18||k==20||k==3||k==17||k==31)//屏蔽已参与和不存在的人
    {
        return RANK();
    }else return k;
}
int main(){
    vector<int> a;
    for(int i=0;i<15;i++)//共需26人，有11人，还差15人
    {
        int t=RANK();
        int tmp=0;
        for(int j=0;j<a.size();j++){
            if(t==a[j])tmp++;
        }
        if(tmp==0)a.push_back(t);
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}