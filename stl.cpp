/** 
#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin>>q;
    int choice,x,c;
    queue<int>num;

    while(q--){
        cin>>choice;
        if(choice==1){
            cin>>x>>c;
            while(c--){
                num.push(x);
            }
        }
        else{
            long long sum=0;
            cin>>c;
            while(c--){
                sum+=num.front();
                num.pop();
            }
            cout<<sum<<endl;
        }
    }return 0;
}
    **/


#include<bits/stdc++.h>
using namespace std;

signed main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int q;
    cin>>q;
    int choice,x,c;
    queue<pair<long long,long long>>cylinder;

    while(q--){
        cin>>choice;
        if(choice==1){
            cin>>x>>c;
            cylinder.push({x,c});
        }else{
            cin>>c;
            long long sum=0;
            while(c>0){
                pair<long long,long long>&front_block = cylinder.front();
                long long value=front_block.first;
                long long count=front_block.second;

                if(count<=c){
                    c-=count;
                    sum+=value*count;
                    cylinder.pop();

                }else{
                    sum+=c*value;
                    front_block.second-=c;
                    c=0;
                }

                
            }
            cout<<sum<<endl;

    }

}return 0;}