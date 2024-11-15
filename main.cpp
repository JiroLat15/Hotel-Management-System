#include <iostream>
#include<conio.h>
#include<fstream>
#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

using namespace std;

char op, op2, process, exitFlag;
char name[50], cntctNmbr[50], email[50], rLoginUsrnm[50], rLoginPsswrd[50];
string nameOfHotel = "Stargazers Hotel", adminUsrnm = "Admin", adminPsswrd = "12345", clientUsrnm = "asdf", clientPsswrd = "1234", loginUsrnm, loginPsswrd, cLoginUsrnm, cLoginPsswrd;

void startUp();
void adminLogin();
void clientMenu();
void ext();
void adminMenu();
void roomMenu();
void pricesMenu();
void registerMenu();
void registerProcess();
void accRegister();
void bookingMenu1();
void clientAccLogin1();
void clientAccLogin2();
void bookingMenu2();
void topFaP();

int main()
{

	system("cls");
	cout<<"\n\t\t\t****************************";
	cout<<"\n\t\t\t*   HOTEL SYSTEM PROJECT   *";
	cout<<"\n\t\t\t****************************";
	cout<<"\n\n\t\t\tDeveloped By:";
	cout<<"\t   L.L.V.Q.";
	cout<<"\n\n\n\n\n\n\n\n\n\n\n\t\t\t\t\tPress any key to continue....!!";

	getch();

	startUp();
	return 0;
}

void startUp()
{

    while (exitFlag !='1')
    {
    system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tWelcome User!" << endl;
    cout << "\n\t\t\t\tLogin as:" << endl;
    cout << "\t\t\t\t[1]Login as an Admin" << endl;
    cout << "\t\t\t\t[2]Enter as a Client" << endl;
    cout << "\t\t\t\t[0]Exit" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    switch (op)
			{
				case '1' : adminLogin();
					break;
				case '2' : clientMenu();
					break;
				case '0' : exitFlag = '1';
					break;
				default: cout << "\n\t\t\t\t\t\tInvalid input!\n" << endl;
				getch();
			}
	}
	if(exitFlag == '1')
	{
		exitFlag == '0';
		ext();
	}
}


void ext()
{
	system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\t   Thanks for Visiting!" << endl;
    exit(0);
}

void adminLogin() //1//
{
    do{
	system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tEnter Admin Credentials\n";
    cout << "\n\t\t\t\t[1]Continue" << endl;
    cout << "\t\t\t\t[0]Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    if(op == '1')
    {
    	system("cls");
    	cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    	cout << "\n\t\t\t\tEnter Credentials\n";
        cout << "\n\t\t\t\tUsername:\t";
        cin >> loginUsrnm;
        cout << "\t\t\t\tPassword:\t";
        cin >> loginPsswrd;
        if(loginUsrnm == adminUsrnm && loginPsswrd == adminPsswrd)
        {
            adminMenu();
        }
        else
        {
            cout << "";
        }
    }
    else if(op == '0')
    {
        startUp();
    }
	cout << "\n\t\t\t   Wrong input! Enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');

}

void clientMenu() //2//
{
    do{
    system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tWelcome" << endl;
    cout << "\n\t\t\t\t[1]Register" << endl;
    cout << "\t\t\t\t[2]Avail a Room" << endl;
    cout << "\t\t\t\t[0]Go Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;

    switch (op)
			{
				case '1' : registerMenu();
					break;
				case '2' : clientAccLogin1();
					break;
				case '0' : startUp();
					break;
				default: cout << "";
			}
    cout << "\n\t\t\t   Wrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void adminMenu()
{
    do{
	system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tAdmin Menu" << endl;
    cout << "\n\t\t\t\t[1]Rooms" << endl;
    cout << "\t\t\t\t[2]Prices" << endl;
    cout << "\t\t\t\t[0]Go Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    switch (op)
			{
				case '1' : roomMenu();
					break;
				case '2' : pricesMenu();
					break;
				case '0' : startUp();
					break;
				default: cout << "";
			}
    cout << "\n\t\t\t   Wrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void roomMenu()
{
	do{
	system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tRoom Menu" << endl;
    cout << "\n\t\t\t\t[1]Edit Rooms" << endl;
    cout << "\t\t\t\t[2]Check Rooms status" << endl;
    cout << "\t\t\t\t[0]Go Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    switch (op)
			{
				case '1' : cout << "\n\t\t\t\tEditing rooms Menu\n";
					break;
				case '2' : cout << "\n\t\t\t\tChecking rooms status\n";
					break;
				case '0' : adminMenu();
					break;
				default: cout << "" << endl;
			}
    cout << "\n\t\t\t   Wrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void pricesMenu()
{
	do{
	system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tPrices Menu" << endl;
    cout << "\n\t\t\t\t[1]Edit Prices" << endl;
    cout << "\t\t\t\t[2]Check Prices" << endl;
    cout << "\t\t\t\t[0]Go Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    switch (op)
			{
				case '1' : cout << "\n\t\t\t\tEditing Prices Menu\n";
					break;
				case '2' : cout << "\n\t\t\t\tChecking Prices Menu\n";
					break;
				case '0' : adminMenu();
					break;
				default: cout << "";
			}
    cout << "\n\t\t\t   Wrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void registerMenu() /*this needs work on storing */
{
    {
    system("cls");
    cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    cout << "\n\t\t\t\tRegister making a new account\n";
    cout << "\n\t\t\t\t[1]Continue" << endl;
    cout << "\t\t\t\t[0] Go Back" << endl;
    cout << "\n\t\t\t\tChoose an option: ";
    cin >> op;
    switch(op)
    		{
    			case '1' : registerProcess();
    				break;
    			case '0' : clientMenu();
    				break;
    			default : cout << "";
			}
	cout << "\n\t\t\t   Wrong input enter Y to continue!: ";
	cin >> process;
	
    }while(process == 'Y' or process == 'y');
}

void registerProcess()
{
	system("cls");
    	cout << "\n\t\t\t_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
    	cout << "\n\t\t\t\tRegister making a new account\n";
    	cin.ignore();
    	cout << "\n\t\t\t\tName:\t\t";
    	cin.getline (name, sizeof(name));
    	cout << "\t\t\t\tContact Number:\t";
    	cin >> cntctNmbr;
    	cout << "\t\t\t\tEmail:\t\t";
    	cin >> email;
    	cout << "\t\t\t\tUsername:\t";
    	cin >> rLoginUsrnm;
    	cout << "\t\t\t\tPassword:\t";
    	cin >> rLoginPsswrd;
	
		system("cls");
    	cout << "\n\t\t\t_ _ _ _ _ _ _" << "Is this Correct?" << "_ _ _ _ _ _ _" << endl;


    	cout << "\n\t\t\t\tName:\t\t" << name;
    	cout << "\n\t\t\t\tContact Number:\t" << cntctNmbr;
		cout << "\n\t\t\t\tEmail:\t\t" << email;
		cout << "\n\t\t\t\tUsername:\t" << rLoginUsrnm;
		cout << "\n\t\t\t\tPassword:\t" << rLoginPsswrd;

		cout << "\n\n\t\t\t\tConfirm?\t";
		cout << "\n\t\t\t\t[1]Yes" << endl;
    	cout << "\t\t\t\t[0]No" << endl;
    	cout << "\n\t\t\t\tChoose an option: ";
		cin >> op;
		switch (op)
			{
				case '1' : cout << "\n\n\t\t\t\tRegister Successful\t\n";
					break;
				case '0' : cout << "\n\t\t\t\t\t\t\tCancelling...\n"; /*REMOVE INPUT from name... etc*/
    				break;
    			default : cout << "";
			}
		getch();
		clientMenu();
}

void clientAccLogin1()
{
	do{
		cout << "\n_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
		cout << "\tDo you have an Account?" << endl;
    	cout << "\t[1]Yes, I have an Account" << endl;
    	cout << "\t[2]No, I don't have an Account" << endl;
    	cout << "\t[0]Go Back" << endl;
    	cout << "\tChoose an option: ";
    	cin >> op;
    	switch (op)
    			{
    				case '1' : clientAccLogin2();
    					break;
    				case '2' : registerMenu();
    					break;
    				case '0' : clientMenu();
				}
	cout << "\tWrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void clientAccLogin2()
{
	do{
		cout << "\n_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
		cout << "\tEnter Username and Password" << endl;
    	cout << "\t[1]Continue" << endl;
    	cout << "\t[0]Fuck, Go Back" << endl;
    	cout << "\tChoose an option: ";
    	cin >> op;
    if (op == '1')
    {
    	cout << "\tUsername: \t";
    	cin >> cLoginUsrnm;
   		cout << "\tPassword: \t";
   		cin >> cLoginPsswrd;
   		if(cLoginUsrnm == clientUsrnm && cLoginPsswrd == clientPsswrd)
		{
   			bookingMenu1();
		}
		else
		{
			cout << "\tInvalid Input!\n";
		}
	}
	else if(op == '0')
	{
		clientAccLogin1();
	}
	cout << "\tWrong input enter Y to continue!: ";
   	cin >> process;
   	}while(process == 'Y' or process == 'y');
   	startUp();
}

void bookingMenu1()
{
	do{
		cout << "\n_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
		cout << "\tBooking Menu" << endl;
    	cout << "\t[1]Types of Room / Facilities Available / Price" << endl;
    	cout << "\t[2]book Now" << endl;
    	cout << "\t[0]Log Out" << endl;
    	cout << "\tChoose an option: ";
    	cin >> op;
    	switch (op)
    			{
    				case '1' : topFaP();
    					break;
    				case '2' : bookingMenu2();
    					break;
    				case '0' : clientMenu();
				}
	cout << "\tWrong input enter Y to continue!: ";
    cin >> process;
    }while(process == 'Y' or process == 'y');
}

void topFaP()
{
	cout << "\n_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
	cout << "\tType of Room / Facilities Available / Prices" << endl;

}

void bookingMenu2()
{
	cout << "\n_ _ _ _ _ _ _" << "Stargazers Hotel" << "_ _ _ _ _ _ _" << endl;
		cout << "\tBooking Menu" << endl;
}

