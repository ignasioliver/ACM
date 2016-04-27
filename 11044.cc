#include <iostream>
using namespace std;

int main()
{
    int t, n, m, resultgrind = 0, rowdiv, coldiv;
    cin >> t;
    for (int i = 0; i < t; i++){
      cin >> m;
      cin >> n;
      rowdiv = n/3;
      coldiv = m/3;
      resultgrind = rowdiv*coldiv;
      cout << resultgrind << endl;
    }
 return 0;
}
