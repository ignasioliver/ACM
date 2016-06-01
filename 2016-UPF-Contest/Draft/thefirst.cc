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
    if ( MATRIX[1][N] == requestedday && MATRIX[2][N] == requestedhour ){
    cout << MATRIX[3][N] << endl;
    }else N--;
}
