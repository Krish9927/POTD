#include <bits/stdc++.h>
using namespace std;
bool checkpangram(string &sentence){
    unordered_set<char>letter;
    for(char c: sentence){
        if(isalpha(c))
        letter.insert(tolower(c));
    }
    return letter.size()==26;
}
int main(){
    int n;
    cin >>n;
    string s;
    cin>>s;
    if(checkpangram(s))
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}