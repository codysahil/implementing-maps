
#include <iostream>
#include<bits/stdc++.h>
using namespace std;
int main() {

    /*
    map<int,string> m;
    m[1] = "I";
    m[2] = "Am";
    m[6] = "Bittu";
    m.insert({4,"HII"});
    map<int,string> :: iterator it;
    for(it = m.begin(); it!=m.end(); it++){
        cout<<(*it).first<<" "<<(*it).second<<" "<<endl;;
    }
cout<<m.size();
int x;
string y;
*/
    unordered_map<string, int> m;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++) {
        string s;
        cin >> s;
        m[s]++;
    }
    for (auto pr : m) {
        cout << pr.first << " " << pr.second << endl;
    }
    return 0;
}