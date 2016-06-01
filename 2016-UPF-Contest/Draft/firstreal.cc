#include <iostream>
using namespace std;
int main() {
	int N, i, requestedday, requestedhour;
	cin >> N;
    int MATRIX[4][N];
	i = 2*(N);
    while( N < i){
        cin >> MATRIX[0][N];
        cin >> MATRIX[1][N];
        cin >> MATRIX[2][N];
        cin >> MATRIX[3][N];
        cout << MATRIX[3][N] << "   ";
        N++;
    }
    cin >> requestedday;
    cin >> requestedhour;
    if (MATRIX[1][0] = requestedday){
        cout << MATRIX[3][0];
    }else if (MATRIX[1][1] = requestedday){
        cout << MATRIX[3][1];
    }else if(MATRIX[1][2] = requestedday){
        cout << MATRIX[3][2];
    }else if (MATRIX[1][3] = requestedday){
        cout << MATRIX[3][3];
    }
}
//
The nice way to do it:
    
if ( MATRIX[1][N] == requestedday && MATRIX[2][N] == requestedhour ){
    cout << MATRIX[3][N] << endl;
else N--
