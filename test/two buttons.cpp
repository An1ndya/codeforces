#include<bits/stdc++.h>
#include <stdio.h>
using namespace std;
 
 
int  n,m ;
int minstep=1000000000;
 
void DFS(int nodevalue,int stepcount)
{
    //cout<<nodevalue<<" "<< stepcount<<endl;
    if(nodevalue==m)
    {
        if(minstep>stepcount)
        {
            minstep=stepcount;
        }
        return ;
    }
    if(stepcount>minstep) return;
    if(nodevalue<=0) return;
 
    int bluenode,rednode;
    bluenode = nodevalue-1;
    rednode = 2*nodevalue;
 
    if(nodevalue < m ){
       DFS(rednode,stepcount+1);
       DFS(bluenode,stepcount+1);
    }
    else{
        DFS(bluenode,stepcount+1);
        //DFS(rednode,stepcount+1);
    }
    return;
}
 
int main()
{
 
	cin>>n>>m;
    DFS(n,0);
    cout<<minstep;
	return 0;
}