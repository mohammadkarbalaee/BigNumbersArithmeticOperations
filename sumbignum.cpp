#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string Equalizer(string ,int);
int main() 
{
    string a, b;
    int len1,len2;
    cin >> len1 >> len2;
    cin >> a;
    cin >> b;
    string ans = "";
    int sarbar = 0;
    int l1 = a.size();
    int l2 = b.size();
    int lendiff = abs(len2 - len1);
    int l = max(l1,l2);
    if(l2 > l1)
    {
        a = Equalizer(a,lendiff);
    }
    else if(l2 < l1)
    {
        b = Equalizer(b,lendiff);
    }
    for (int i = l - 1; i >= 0; i--) 
    {
        int num1 = a[i] - '0';
        int num2 = b[i] - '0';
        int to_add = (num1 + num2 + sarbar) % 10;
        sarbar = (num1 + num2 + sarbar) / 10;
        ans.insert(0, to_string(to_add));
    }
    if (sarbar > 0) 
    {
        string strSarbar = to_string(sarbar);
        ans = strSarbar + ans;
    }
    cout << ans << endl;
    return 0;
}
string Equalizer(string String,int LengthDifference)
{
    string Zero = "0";
    for(int i = LengthDifference;i > 0; i--){String = Zero + String;}
    return String;
}