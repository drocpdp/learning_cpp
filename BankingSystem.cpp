#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <vector>
#include <cstdlib>

using namespace std;

/* Menu
1. Open an Account
2. Balance Inquiry
3. Deposit
4. Withdrawal
5. Close an Account
6. Show All Accounts
7. Quit
*/

void displayMenu(){

    const string menu_options[8] = 
        {
            "Select one option below:",
            "1. Open an Account",
            "2. Balance Inquiry",
            "3. Deposit",
            "4. Withdrawal",
            "5. Close an Account",
            "6. Show All Accounts",
            "7. Quit"
        };

    cout << "\n***Banking System***\n\n";        
    // Print out menu
    for (int i=1; i < 8; i++){
        cout << "\t" << menu_options[i] << endl;
    }    

}

vector<string> createVector(string raw, string concat){
    vector<string> account_info;
    string tmp = "";
    for (int i=0; i < raw.length(); i++){
        if (raw[i] == ','){
            account_info.push_back(tmp);
            tmp = "";
        }
        else{
            tmp += raw[i];
        }
    }
    account_info.push_back(tmp);
    return account_info;
}


int getLastAccount(){
    ifstream ifs;
    string account_line;
    string lastAccount = "0";
    cout << "Show All Accounts:" << endl;

    ifs.open("Customers.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        lastAccount = account_arr[0];
    }

    ifs.close();
    return stoi(lastAccount.c_str());  

}

void openAccount(){
    string startingBalance;
    string accountName;
    int accountNumber;

    accountNumber = getLastAccount();

    // Prompt for customer info
    cout << "Account Holder's name:" << endl;
    cin.ignore();
    getline(cin, accountName);

    cout << "Starting Balance:" << endl;
    cin >> startingBalance;

    // Write to file
    ofstream ofs("Customers.txt", ios::app);    
    ofs << fixed << ++accountNumber << "," << accountName << "," << startingBalance << endl;
    ofs.close();
    
    cout << fixed << "Account created:" << endl << accountNumber << ", " << accountName << ", " << startingBalance << endl;

    // Increment for new account number
}

void balanceInquiry(){

    string accountNumber;
    string account_line;
    ifstream ifs;

    // get account number from user
    cout << "Balance Inquiry:" << endl;
    cout << "Enter account number:" << endl;
    cin >> accountNumber;

    ifs.open("Customers.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        if (account_arr[0] == accountNumber){
            cout << "Results from Balance Inquiry:" << endl;
            cout << "Account number:[" << account_arr[0] << "]" << endl;
            cout << "Name:[" << account_arr[1] << "]" << endl;
            cout << "Balance:[" << account_arr[2] << "]" << endl;
        }
        
    }

    ifs.close();
    
}

void replaceFile(){
    remove("customers.txt");
    ofstream ofs("Customers.txt", ios::app);
    ifstream ifs;  
    string account_line;
    ifs.open("tmp.txt");

    while (getline(ifs, account_line)){
        ofs << account_line << endl;
    }

    ifs.close();
    ofs.close();
}

void deposit(){
    string accountNumber;
    string account_line;
    string depositAmount;

    cout << "Deposit:" << endl;
    cout << "Enter account number:" << endl;
    cin >> accountNumber;
    cout << "Enter deposit amount:" << endl;
    cin >> depositAmount;

    ifstream ifs;
    ofstream ofs;

    ifs.open("Customers.txt");
    ofs.open("tmp.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        if (account_arr[0] == accountNumber){
            
            float old_balance;
            float deposit_float;
            old_balance = atof(account_arr[2].c_str());
            deposit_float = atof(depositAmount.c_str());   

            float new_balance = old_balance + deposit_float;

            cout << "Results from Deposit:" << endl;
            cout << "Account number:[" << account_arr[0] << "]" << endl;
            cout << "Name:[" << account_arr[1] << "]" << endl;
            cout << "Old Balance:[" << old_balance << "]" << endl;
            cout << "Deposit Amount:[" << deposit_float << "]" << endl;
            cout << "New Balance:[" << new_balance << "]" << endl; 

            ofs << fixed << account_arr[0] << "," << account_arr[1] << "," << new_balance << endl;
        }
        else{
            ofs << fixed << account_arr[0] << "," << account_arr[1] << "," << account_arr[2] << endl;
        }
    }

    ifs.close();
    ofs.close();

    replaceFile();
    
    return;


    // copy, replace
    // create new file (tmp file)
    // read from customers.txt file
    // if line == account number, 
    //      add deposit amount, then write
    // else
    //      write to tmp file
}

void withdrawal(){

    string accountNumber;
    string account_line;
    string depositAmount;

    cout << "Deposit:" << endl;
    cout << "Enter account number:" << endl;
    cin >> accountNumber;
    cout << "Enter deposit amount:" << endl;
    cin >> depositAmount;

    ifstream ifs;
    ofstream ofs;

    ifs.open("Customers.txt");
    ofs.open("tmp.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        if (account_arr[0] == accountNumber){
            
            float old_balance;
            float deposit_float;
            old_balance = atof(account_arr[2].c_str());
            deposit_float = atof(depositAmount.c_str());   

            float new_balance = old_balance - deposit_float;

            cout << "Results from Deposit:" << endl;
            cout << "Account number:[" << account_arr[0] << "]" << endl;
            cout << "Name:[" << account_arr[1] << "]" << endl;
            cout << "Old Balance:[" << old_balance << "]" << endl;
            cout << "Withdrawal Amount:[" << deposit_float << "]" << endl;
            cout << "New Balance:[" << new_balance << "]" << endl; 

            ofs << fixed << account_arr[0] << "," << account_arr[1] << "," << new_balance << endl;
        }
        else{
            ofs << fixed << account_arr[0] << "," << account_arr[1] << "," << account_arr[2] << endl;
        }
    }

    ifs.close();
    ofs.close();

    replaceFile();
    
    return;

}

void closeAccount(){
    string accountNumber;
    string account_line;

    cout << "Close Account:" << endl;
    cout << "Enter account number to close:" << endl;
    cin >> accountNumber;

    ifstream ifs;
    ofstream ofs;

    ifs.open("Customers.txt");
    ofs.open("tmp.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        if (account_arr[0] == accountNumber){
            
            float old_balance;
            old_balance = atof(account_arr[2].c_str());  

            cout << "Closing Account:" << endl;
            cout << "Account number:[" << account_arr[0] << "]" << endl;
            cout << "Name:[" << account_arr[1] << "]" << endl;
            cout << "Ending Balance:[" << old_balance << "]" << endl;
        }
        else{
            ofs << fixed << account_arr[0] << "," << account_arr[1] << "," << account_arr[2] << endl;
        }
    }

    ifs.close();
    ofs.close();

    replaceFile();
    
    return;
}

void showAllAccounts(){
    ifstream ifs;
    string account_line;
    cout << "Show All Accounts:" << endl;

    ifs.open("Customers.txt");

    while (getline(ifs, account_line)){
        vector<string> account_arr = createVector(account_line, ",");
        cout << "Account number:[" << account_arr[0] << "]      ";
        cout << "Name:[" << account_arr[1] << "]      ";
        cout << "Balance:[" << account_arr[2] << "]" << endl;
    }

    ifs.close();

}

void quit(){
    cout << "in quit()";
}

int getSelection(){
    int option;
    cout << "Enter Selection:";
    cin >> option;
    return option;
}


int main(){
    displayMenu();
    int choice;
    
    while (choice != 7){
        choice = getSelection();
        
        switch(choice){
            case 1:
                openAccount();
                break;
            case 2:
                balanceInquiry();
                break;
            case 3:
                deposit();
                break;
            case 4:
                withdrawal();
                break;
            case 5:
                closeAccount();
                break;
            case 6:
                showAllAccounts();
                break;
        }
        


        displayMenu();
    };
}