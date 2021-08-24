#include<iostream>
#include<vector>
using namespace std;

int main(){
        int selves, queries;
        cin>>selves>>queries;
        vector<int> v[queries];

        int eachq;
        int qtype, n1, n2;
        while(queries--){
                cin>>qtype;
                if(qtype == 1){
                        cin>>n1>>n2;
                        v[n1].push_back(n2);
                }
                else if(qtype == 2){
                        cin>>n1>>n2;
                        cout<<v[n1][n2]<<endl;
                }
                else{
                        cin>>n1;
                        cout<<v[n1].size()<<endl;
                }
        }
}
