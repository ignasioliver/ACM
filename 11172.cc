#include <iostream>
using namespace std;
	
int main(){
	string line;
    int t;
    int i;
    // cin  t
    // for t times -> cin a b 
    cin >> t;
    for(i = 0; i < t; i++){
    	int a, b;
    	char c;
        cin >> a; 
        cin >> b;
        if (a == b){
		  c = '=';
		}else if(a > b){
		  c = '>';
		}else{
		  c = '<';
		}
		cout << c << endl;
    }
}
