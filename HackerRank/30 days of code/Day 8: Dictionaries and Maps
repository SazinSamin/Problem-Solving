#include<iostream>
#include<map>
using namespace std;

int main(){
        //freopen("file1.txt", "r", stdin);
        int n;
        cin >> n;
        map<string, long> phoneBook;
        string name;
        int num;

        for(int i=0; i < n; i++){
                cin >> name >> num;
                phoneBook[name] = num;
        }

        while(cin >> name){
                cout << name << endl;
                auto x = phoneBook.find(name);
                
                // here x is pointer so, check in the if the statement that x valid or not because the maps.find return 
                // a iterator, so we can check the iterator at the end or not.
                
                if(x != phoneBook.end()){
                        cout << x->first << "=" << x->second << endl;
                }else{
                        cout << "Not found" << endl;
                }
        }


}
