// #include<iostream>
// #include<unordered_map>
// #include<string>
// using namespace std;

// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         unordered_map<char, char> n1;
//         unordered_map<char, char> n2;

//         for(int i = 0; i < s.length(); i++) {

//             if(n1.count(s[i]) && n1[s[i]] != t[i])
//                 return false;

//             if(n2.count(t[i]) && n2[t[i]] != s[i])
//                 return false;

//             n1[s[i]] = t[i];
//             n2[t[i]] = s[i];
//         }

//         return true;
//     }
// };
#include <iostream>
#include <unordered_map>
#include <string>
using namespace std;

class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> n1;
        unordered_map<char, char> n2;

        for(int i = 0; i < s.length(); i++) {
            if(n1.count(s[i]) && n1[s[i]] != t[i])
                return false;

            if(n2.count(t[i]) && n2[t[i]] != s[i])
                return false;

            n1[s[i]] = t[i];
            n2[t[i]] = s[i];
        }
        return true;
    }
};

int main() {
    Solution obj;
    string s = "egg", t = "add";

    if(obj.isIsomorphic(s, t))
        cout << "True";
    else
        cout << "False";

    return 0;
}