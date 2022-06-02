#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    
    while (n != 0 && m != 0){
        vector <int> cds(1e7);
        int maxNumber = -1;
        
        for(int i = 0; i < n; i++){
            int aux;
            cin >> aux;
            cds[aux]++;
            if(aux > maxNumber) maxNumber = aux;
        }
        
        
        for(int i = 0; i < m; i++){
            int aux;
            cin >> aux;
            cds[aux]++;
            if(aux > maxNumber) maxNumber = aux;
        }
        
        int sum = 0;
        for(int i = 0; i <= maxNumber; i++){
            if(cds[i] > 1){
                sum++;
            }
        }
        
        cout << sum << endl;
        
        cin >> n >> m;
    }
    return 0;
}
