// // 5= Print the following pattern
// Input: n = 4
// Output:
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include <iostream>
using namespace std;
int main() {
    int rows = 4;
    for (int i = 0; i < rows; i++) {
        for (int j = 1; j <= rows-i; j++) {
            cout <<j<<" ";
        }
        for(int m=0; m<2*i; m++){
            if(m==rows){
            cout<<"  ";
            }
            cout<<"  ";
        }

        for (int k = rows-i; k >=1; k--) {
            if(k!=rows){
            cout <<k<<" ";
            }
        }
        cout << endl;
    }
}