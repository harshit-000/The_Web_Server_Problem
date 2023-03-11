#include<bits/stdc++.h>
using namespace std;
bool comp(vector<int> &w1, vector<int> &w2){
    if(w1[0] != w2[0]){
        return w1[0] < w2[0];
    } else if(w1[1] != w2[1]){
        return w1[1] > w2[1];
    } else {
        return w1[2] < w2[2];
    }
}
int main(){
    #ifndef ONLINE_JUDGE
        freopen("input.txt", "r", stdin);
        freopen("output.txt", "w", stdout);
    #endif

    int t; 
    cin >> t;
    vector<vector<int>> web(t, vector<int>(3));
    for(int i=0; i<t; i++){
        cin >> web[i][0]; 
        cin >> web[i][1]; 
        cin >> web[i][2];
    }
    sort(web.begin(), web.end(), comp);

    for(int i=0; i<t; i++){
        cout << web[i][0] << " " << web[i][1] << " " << web[i][2];
        if(i != t-1) cout << "\n";
    }
    
    return 0;
}
