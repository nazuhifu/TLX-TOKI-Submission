#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;

    vector<int> a(n);

    for(int i = 0; i < n; ++i){
        cin >> a[i];
    }

    sort (a.begin(), a.end());

    int curmember = 0;
    int team = 0;
    int largestTeam = INT_MIN;
    int curRating = 0;

    for(int i = 0; i < n; ++i){
        for(int k = i; k < n; ++k){
            if(a[k] - a[i] > m){
                break;
            }
            if(k - i == 2){
                largestTeam = max(largestTeam, a[i] + a[k-1] + a[k]);
                team++;
            }
            if(k - i > 2){
                for(int j = i + 1; j < k; ++j){
                    largestTeam = max(largestTeam, a[i] + a[j] + a[k]);
                    team++;
                }
            }
        }
    }
    if (team == 0){
        cout << -1 << endl;
        return 0;
    }

    cout << team << " " << largestTeam << endl;
}
