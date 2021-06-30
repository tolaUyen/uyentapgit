#include <iostream>
using namespace std;


int main()
{
    string s2 = "dkjfhkjsfhkjs";
    string s1 = "";
    for (int i = 0; i < s2.size(); ++i){
        s1 = s1 + s2[i];
    }
    cout << s1;
    return 0;
}