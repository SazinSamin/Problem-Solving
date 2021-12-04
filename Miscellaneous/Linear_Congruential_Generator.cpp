#include <iostream>
using namespace std;

int main(){
        int z = 9;
        int i = 3;
        int seed = 5;
        int m = 4566;

        for(int i=0; i<100; i++){
                seed = (z * seed + i) % m;
                cout << seed << endl;
        }
}
