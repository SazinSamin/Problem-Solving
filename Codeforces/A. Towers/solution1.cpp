#include<bits/stdc++.h>
using namespace std;

int main() {
        int n, x;
        cin >> n;
        vector<int> arr;
        while(n--) {
                cin >> x;
                arr.push_back(x);
        }

        map<int, int> m;
        map<int, int>::iterator itr;
        for(int i = 0; i < arr.size(); i++) {
                if(m.find(arr[i]) == m.end()) {
                        m.insert(make_pair(arr[i], 1));
                } else {
                        m.find(arr[i])->second++;
                }
        }

        int max = 0;
        for(itr = m.begin(); itr != m.end(); itr++) {
                if(itr->second > max) {
                        max = itr->second;
                }
        }
        
        cout << max <<  " " << m.size();
}
