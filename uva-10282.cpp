#include <bits/stdc++.h>
using namespace std;

void split(string line, string delimiter, string &A, string &B) {
    size_t pos = 0;
    string token;

    while ((pos = line.find(delimiter)) != string::npos) {
        A = line.substr(0, pos);
        line.erase(0, pos + delimiter.length());
    }

    B = line;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    map<string, string> dictio;
    string line, engl, foren;

    getline(cin, line);
    while (line != "") {
        split(line, " ", engl, foren);
        dictio[foren] = engl;

        getline(cin, line);
    }
    
    while (cin >> line) {
        auto it = dictio.find(line);
        if (it != dictio.end()) {
            cout << it->second << endl;
        } else {
            cout << "eh" << endl;
        }
    }
}
