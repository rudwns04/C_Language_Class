#include <iostream>
#include <string>
#include <cstring>
#include <vector>
#include <ctime>
#include <cstdlib>
using namespace std;


int main(){
    char ch;
    int count =0;

    while (true)
    {
        cin.get(ch);
        if(ch == ' ')count++;
        if(cin.eof())break;
        cout.put(ch);
        if(ch == '\n')
            break;
    }
    cout << count;
    
    
    return 0;

}