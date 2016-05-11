#include<iostream>
#include<map>
#include<iomanip>

using namespace std;

int main() {
	int n;
	map< string, int > mymap;
	cin >> n;
		string str;
		getline( cin, str );
		getline( cin, str );
		for ( int i = 0; i < n; i++ ){
			map< string, int >mymap; 
			double total = 0;
			for ( getline( cin, str ); cin && !str.empty(); getline( cin, str )){
				mymap[str] = mymap[str] + 1;
				total++;
			}
			if (i  > 0) cout << "\n";
			map< string, int>::iterator iter;
				for (iter = mymap.begin(); iter != mymap.end(); iter++ ){
				double percent = (*iter).second / total * 100;
				cout << setprecision(4) << fixed;
				cout << (*iter).first << " " << percent << "\n";
			}
	}
	return 0;
}
