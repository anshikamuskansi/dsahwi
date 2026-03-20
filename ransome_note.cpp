#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> mp;

        for(char i: magazine){ // store frequency
            mp[i]++;
        }

        for(char i:ransomNote){
            if(mp.find(i)!=mp.end()){
                mp[i]--; 
                if(mp[i]<0){ 
                    return false;
                }
            }
            else{
                return false;
            }
        }
        return true;
    }
};
int main() {
    Solution obj;
    string ransomNote = "aa";
    string magazine = "aab";

    if(obj.canConstruct(ransomNote, magazine))
        cout << "True";
    else
        cout << "False";

    return 0;
}