#include <bits/stdc++.h>
using namespace std;
class student
{
private:
    string s;

public:
    void read();
    void chk_bin();
    void comp();
    void display();
};
void student::read()
{
    cout << "enter the string" << endl;
    cin >> s;
}
void student::chk_bin()
{
    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "incorrect binary format" << endl;
            break;
        }
    }
}
void student::comp()
{
    chk_bin();
    for (int i = 0; i < s[i] != '\0'; i++)
    {
        if (s[i] == '0')
        {
            s[i]='1';
        }
        else{
            s[i]='0';
        }
    }
    cout<<s<<endl;
}
void student::display()
{
    cout << s << endl;
}

int main()
{
    student s;
    s.read();
    s.display();
   
    s.comp();

    return 0;
}