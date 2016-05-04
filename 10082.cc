#include <iostream>
using namespace std;
int main(){
string kb = "1234567890-=WERTYUIOP[]\\ASDFGHJKL;\'ZXCVBNM,./";
	string line;
	cin >> line;
    while( getline(cin, line) )//( getline(cin, line) )
    {
        for(int i = 0; i < line.size(); i ++)
            cout << (line[i] != ' ' ? kb[ kb.find(line[i]) - 1 ]:' ');
        cout << " ";
    cout << endl;}
}
