#include <iostream>
#include "Account.h"

using namespace std;

int main() {
    /*Account myAccount;

    cout << "Initial account name is " << myAccount.getName();
    
    cout << "\nPlease enter the account name: ";
    string theName;
    getline(cin, theName);
    myAccount.setName(theName);

    cout << "Name in object myAccount is: " << myAccount.getName() << endl;*/
    Account account1{"Jane Green"};
    Account account2{"John Blue"};

    cout << "account1 name is: " << account1.getName() << endl;
    cout << "account2 name is: " << account2.getName() << endl;

    return 0;
}
