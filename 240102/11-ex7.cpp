#include <iostream>
#include <string>
#include <ctime>
#include <cctype>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main() {
    for(int i=0;i<4 ;i++){
        cout << "dec   " << "hexa   " << "char   ";
    }
    cout << endl;
    for(int i=0;i<4 ;i++){
        cout << "---   " << "----   " << "----   ";
    }
    cout << endl;
    
    for(int i=0 ;i<64 ;i++){
        cout << setw(6) << left << dec << i;
        cout << setw(7) << left << hex << i;
        if(isprint(i))
            cout << setw(7) << left << char(i);
        else cout << setw(7) << left << '.';
        
        if(i%4 == 3) cout << endl;
    }
    
    return 0;
}