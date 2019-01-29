#include <bits/stdc++.h>

using namespace std;

// Complete the camelcase function below.
int camelcase(string s) {
    int words=1;
    //cout<<(int)'A';
    for(int i=0;i<s.length();i++){
       if(isupper(s[i]))
           words++;
            
        }
    return words;
    }



int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    int result = camelcase(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
