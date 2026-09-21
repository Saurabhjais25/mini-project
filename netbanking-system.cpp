#include<iostream>
using namespace std;
int main()
{
    int current_balance = 2637;
    int balance, choice;
    cout << "1.Add money\n" << "2.Withdral\n";
    cout << "Enter the choice: ";
    cin >> choice;

    while (choice)
    {
        cout << "Enter your amount: " << "\n";
        cin >> balance;
        if (balance == 0)
        {
            cout << "Null";
        }
        else{

            switch(choice)
            {
                case 1:
                if(balance<0){
                    cout << "Invailid Amount";
                }    
                else{
                current_balance = current_balance + balance;
                cout << "Your current balance is: " << current_balance <<"\n";
            }
            break;
            case 2:
            if (balance>current_balance)
            {
                cout << "Insufficient balance" << "\n";
            }
            else{
                current_balance = current_balance - balance;
                cout << "Your current balance is: " << current_balance << endl;
            }
            break;
            default:
            cout << "you enter the worng choice ";
            break;
            
        } 
     }
        break;
    }
    return 0;
}
