#include <bits/stdc++.h>

using namespace std;


string pangrams(string s) {
    int n = s.length();
    if(n<26)
        return "not pangram";
    bool arr[26] = {};
    for(int i=0;i<26;i++)
        arr[i]=false;
        
    for (int i=0;i<n;i++){
        arr[toupper(s[i])-65] = true;
    }
    for(int i=0;i<26;i++){
        if(!arr[i])
            return "not pangram";
    }
    return "pangram";
}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = pangrams(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
