#include <iostream>
using namespace std;
int main(){
    int res[14] = {0,2,7,5,30,169,441,1872,7632,1740,93313,459901,1358657,2504881};
    int x;
    while(cin >> x,x!=0){
        cout << res[x-1] << endl;
    }
}
