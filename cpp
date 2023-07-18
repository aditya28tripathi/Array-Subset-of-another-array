string isSubset(int a1[], int a2[], int n, int m) {
    unordered_map<int, int> m1;
    unordered_map<int, int> m2;
    
    for(int i = 0; i < n; i++){
        m1[a1[i]]++;
    }
    
    for(int i = 0; i < m; i++){
        m2[a2[i]]++;
    }
    
    for(auto i:m2){
        if(i.second <= m1[i.first]){continue;}
        else return "No";
    }
    return "Yes";
}
