#include <iostream>
using namespace std;
class bank
{
private:
    string name;
    string accout_no;
    string accout_type;
    int avl_bal;

public:
    void setdata(string name, string accout_no, string accout_type, int avl_bal)
    {
        this->name = name;
        this->accout_no = accout_no;
        this->accout_type = accout_type;
        this->avl_bal = avl_bal;
    }
    void deposite_amt(int amt)
    {
        avl_bal += amt;
    }
    void withdraw(int amt)
    {
        cout << "avl balance is" << avl_bal << endl;
        if (amt > avl_bal)
        {
            cout << "insufficient balance sorryyyyyy" << endl;
        }
        cout << "transection is successful" << endl;
        avl_bal -= amt;

        cout << "your avl_balance is" << avl_bal << endl;
    }
    void display()
    {
        cout << "name of account holder is:" << name << endl;
        cout << "name of avl_bal  is:" << avl_bal << endl;
    }
};
int mainn()
{
    bank b[10];
    int n;
    cout << "enter number of accounts to be handeled" << endl;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        b[i].setdata("aniket", "123456", "saving", 0);
    }
    for (int i = 0; i < n; i++)
    {
        b[i].display();
    }

    return 0;
}
