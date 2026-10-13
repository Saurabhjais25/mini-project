#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

class laibary{
    public: 
    char name[100];
    char book[100];
    int price;
    int page;
};
int main()
{
    laibary lip[10];
    int input = 0;
    int count = 0;
    
    while(input != 3){
        cout << "\n1. Add Book details: ";
        cout << "\n2. show all Book deatils: ";
        cout << "\n3. Quit" << endl;
        cout << "Enter your choice: ";
        cin >> input;
        cout <<"\n";

        switch(input){          
            case 1:
                start:
                cout << "Enter Book Author Name: ";
                cin >> lip[count].name;
                cout << "Enter Book Name: ";
                cin >> lip[count].book;
                cout << "Enter Book Price: ";
                cin >> lip[count].price;
                cout << "Enter Book Pages: ";
                cin >> lip[count].page;
                count ++;
                break;
        case 2:
          for(int i=0; i<count; i++){    
            cout << "\nBook Author Name is: " <<lip[i].name;
            cout << "\nBook Name is: " <<lip[i].book;
            cout << "\nBook Price is: " <<lip[i].price;
            cout << "\nBook Pages are: " << lip[i].page << endl;
          }
            break;
        case 3:
            exit(0);
        default :
            cout << "<----------You enter Worng Value Please Enter Right Value---------->";
            goto start;
        }
    }
    return 0;
}
