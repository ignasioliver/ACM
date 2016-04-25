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
    	int a, b, c, x; // x = medium value
        cin >> a; 
        cin >> b;
        cin >> c;
        if(a < b and b < c){
            x = b;
        }else if(c < b and b < a){
            x = b;
        }else if(a < c and c < b){
            x = c;
        }else if(b < c and c < a){
            x = c;
        }else if(c < a and a < b){
            x = a;
        }else if(b < a and a < c){
            x = a;
        }cout << "Case " << i+1 << ": " << x << endl;
    }
}
