/*
Name - Hamdeep Singh
roll No- 2010990254
set - 02
 */


#include <bits/stdc++.h>
using namespace std;

//comparator function
bool cmp(pair<int, int> x, pair<int, int> y){
    return x.second == y.second ? x.first < y.first : x.second < y.second;
}

vector<pair<int, int>> sortByVal(unordered_map<int, int>& m){
    vector<pair<int, int>> vec; //declaring a vector vec

    for(auto& p: m)
        vec.push_back(p);  //pushing values in vector

    sort(begin(vec), end(vec), cmp);  //sorting values using comparator func
    return vec;  //return statement
}

int main(){
    unordered_map<int, int> m;  //declaring map
    int size;    //size of map
    cout<<"input size";
    cin>>size;
    int x, y;    //'x' is key 'y' is value
    cout<<"input values"<<endl;
    for(int i=0; i<size; i++){
        cin>>x>>y;  //input value of  key
        m[x] = y;
    }
    cout<<endl;
    cout<<"output"<<endl;
    cout<<"k"<<" "<<"v"<<endl; //k=key  v=value
    vector<pair<int, int>> result = sortByVal(m);
    for(auto& i: result){
        cout<<i.first<<" "<<i.second<<endl;
    }
}
