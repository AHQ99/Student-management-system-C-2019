//Include all the necessary libraries. 
#include <iostream>
#include <fstream>
#include  <string.h>
using namespace std; 

void  add_student()// Function to add_student data.
{
//Considering the max length of data entered to be 25. 
    char name [25];
    char name1[25];
    char age[25];
    char id[25];
    char numcourses[25];
    char hours[25];
    char level[25];
    char major[25];
    char rate[25];
    char phone[25];
    fstream stud;
    //Name of the file.
    stud.open("Final Project Group C.txt", ios::app);
    cin.ignore();
    cout<<"\nEnter ID number : ";
    cin.getline(id,25);
    cout<<"\nEnter first name : ";
    cin.getline(name,25);
    cout << "\nEnter last name : " ;
    cin.getline(name1,25);
    cout<<" \nEnter age : ";
    cin.getline(age,25);
    cout<<" \nEnter a phone number : ";
    cin.getline(phone,25);
    cout << "\nEnter student major : " ;
    cin.getline(major,25);
    cout << "\nEnter number of courses studied : " ;
    cin.getline(numcourses,25);
    cout << "\nEnter number of hours collected : " ;
    cin.getline(hours,25);
    cout << "\nEnter student level of 8 : " ;
    cin.getline(level,25);
    cout << "\nEnter the GPA of 5 : " ;
    cin.getline(rate,25);
    stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
    cout<< "\n\nInformation added successfully\n";
    stud.close();
}

void delete_student()// Function to delete_student data.
{                      

    fstream stud;
    fstream temp;
    //Name of the file.
    stud.open("Final Project Group C.txt",ios::in);
    temp.open("temp.txt",ios::out);
    //Considering the max length of data entered to be 25. 
    char name [25];
    char name1 [25];
    char age[25];
    char id [25];
    char numcourses[25];
    char hours[25];
    char level[25];
    char major[25];
    char rate[25];
    char a[25];
    char phone[25];
    cin.ignore();
    cout<<"\nEnter the ID number to delete record : ";
    cin.getline(a,25);
    int x=0;
    while(!stud.eof())
    {
        stud.getline(name,25,'|');
        stud.getline(id,25,'|');
        stud.getline(age,25,'|');
        stud.getline(name1,25,'|');
        stud.getline(major,25,'|');
        stud.getline(numcourses,25,'|');
        stud.getline(hours,25,'|');
        stud.getline(level,25,'|');
        stud.getline(rate,25,'|');
        stud.getline(phone,25);
        if(strcmp(id,a)==0)
        {
        x=1 ;
        cout<<"\nThe data has been deleted\n";
        continue;
        }
        else
        {
            temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
        }
    }
    if(x==0)
    {
        cout<<"\nNo student have same ID\n";
    }
    temp.close();
    stud.close();

    stud.open("Final Project Group C.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(id,25,'|');
        temp.getline(age,25,'|');
        temp.getline(name1,25,'|');
        temp.getline(major,25,'|');
        temp.getline(numcourses,25,'|');
        temp.getline(hours,25,'|');
        temp.getline(level,25,'|');
        temp.getline(rate,25,'|');
        temp.getline(phone,25);
        stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
    }
    temp.close();
    stud.close();
    remove("temp.txt");
    
}

void find_student()// Function to find_student data by ID or phone.
{

    fstream stud;
    stud.open("Final Project Group C.txt",ios::in);
    //Considering the max length of data entered to be 25. 
    char name [25];
    char name1 [25];
    char age[25];
    char id [25];
    char numcourses[25];
    char hours[25];
    char level[25];
    char major[25];
    char rate[25];
    char a[25];
    char phone[25];
    int h;
    cout<<"\nDo you want to search by ID or phone number ? ";
    cout<<"\n1.ID\n2.Phone number";
    cout<<"\nEnter option: ";
    cin>>h;
    if (h==1)
    {
    	cout<<"\nEnter the ID to search about it : ";
    cin.ignore();
    cin.getline(a,25);
    int x=0;
    while(!stud.eof())
    {
        stud.getline(name,25,'|');
        stud.getline(id,25,'|');
        stud.getline(age,25,'|');
        stud.getline(name1,25,'|');
        stud.getline(major,25,'|');
        stud.getline(numcourses,25,'|');
        stud.getline(hours,25,'|');
        stud.getline(level,25,'|');
        stud.getline(rate,25,'|');
        stud.getline(phone,25);
        if(strcmp(id, a)==0)
        {
        	cout<< "\nID number : "<<id;
            cout<<"\nName : " << name<<" "<<name1;
            cout<<"\nAge : "<<age;
            cout<<"\nphone number : "<<phone;
            cout<<"\nMajor : "<<major;
            cout<<"\nNumber of courses studied : "<<numcourses;
            cout<<"\nNumber of hours collected : "<<hours;
            cout<<"\nStudent level : "<<level;
            cout<<"\nStudent GPA : "<<rate;
            cout<<"\n\n";
            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<"\nNo student have same ID\n";
    }
	}
	else if (h==2)
	{
		cout<<"\nEnter the phone number to search about it : ";
    cin.ignore();
    cin.getline(a,25);
    int x=0;
    while(!stud.eof())
    {
        stud.getline(name,25,'|');
        stud.getline(id,25,'|');
        stud.getline(age,25,'|');
        stud.getline(name1,25,'|');
        stud.getline(major,25,'|');
        stud.getline(numcourses,25,'|');
        stud.getline(hours,25,'|');
        stud.getline(level,25,'|');
        stud.getline(rate,25,'|');
        stud.getline(phone,25);
        if(strcmp(phone, a)==0)
        {
        	cout<< "\nID number : "<<id;
            cout<<"\nName : " << name<<" "<<name1;
            cout<<"\nAge : "<<age;
            cout<<"\nphone number : "<<phone;
            cout<<"\nMajor : "<<major;
            cout<<"\nNumber of courses studied : "<<numcourses;
            cout<<"\nNumber of hours collected : "<<hours;
            cout<<"\nStudent level : "<<level;
            cout<<"\nStudent GPA : "<<rate;
            cout<<"\n\n";
            x=1;
            break;
        }

    }
    if(x==0)
    {
        cout<<"\nNo student have same phone number\n";
    }
	}
	else
	{
		cout<<"\nWrong choice!!\n";
	}
    
    stud.close();
}

void update_student()
{
    fstream stud;
    fstream temp;

    stud.open("Final Project Group C.txt",ios::in);
    temp.open("temp.txt",ios::out);
    //Considering the max length of data entered to be 25. 
    char name [25];
    char name1 [25];
    char age[25];
    char id [25];
    char numcourses[25];
    char hours[25];
    char level[25];
    char major[25];
    char rate[25];
    char a[25];
    char phone[25];
    cin.ignore();
    cout<<"\nEnter the ID number to update record : ";
    cin.getline(a,25);
     int x=0;
    while(!stud.eof())
    {
        stud.getline(name,25,'|');
        stud.getline(id,25,'|');
        stud.getline(age,25,'|');
        stud.getline(name1,25,'|');
        stud.getline(major,25,'|');
        stud.getline(numcourses,25,'|');
        stud.getline(hours,25,'|');
        stud.getline(level,25,'|');
        stud.getline(rate,25,'|');
        stud.getline(phone,25);
        if(strcmp(id,a)==0)
        {
    cout<<"\nEnter the new Information\n ";
    cout<<"\nEnter ID number : ";
    cin.getline(id,25);
    cout<<"\nEnter first name : ";
    cin.getline(name,25);
    cout << "\nEnter last name :" ;
    cin.getline(name1,25);
    cout<<" \nEnter age : ";
    cin.getline(age,25);
    cout<<" \nEnter a phone number : ";
    cin.getline(phone,25);
    cout << "\nEnter student major :" ;
    cin.getline(major,25);
    cout << "\nEnter number of courses studied :" ;
    cin.getline(numcourses,25);
    cout << "\nEnter number of hours collected :" ;
    cin.getline(hours,25);
    cout << "\nEnter student level of 8 :" ;
    cin.getline(level,25);
    cout << "\nEnter the GPA of 5 :" ;
    cin.getline(rate,25);
    temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
    cout<<"\nThe data has been updated\n";
    x=1;
        }
        else
        {
        temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
            
        }
    }
    if(x==0)
    {
        cout<<"\nNo student have same ID\n";
    }
    temp.close();
    stud.close();

    stud.open("Final Project Group C.txt",ios::out);
    temp.open("temp.txt",ios::in);
    while(!temp.eof())
    {
        temp.getline(name,25,'|');
        temp.getline(id,25,'|');
        temp.getline(age,25,'|');
        temp.getline(name1,25,'|');
        temp.getline(major,25,'|');
        temp.getline(numcourses,25,'|');
        temp.getline(hours,25,'|');
        temp.getline(level,25,'|');
        temp.getline(rate,25,'|');
        temp.getline(phone,25);
        stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'|'<<phone<<'\n';
    }
    temp.close();
    stud.close();
    remove("temp.txt");
}
int main()
{
	cout<<"--- STUDENT MANAGMENT SYSTEM ---\n\n";
	int option;
	while(option != 5)
		{
	//This prints out all the available options
	cout << "\nAvailable operations :\n";
	cout<< "\n1. Add New Students";
	cout<< " \n2. Delete student records";
	cout<<"	\n3. Find Student details";
	cout<<"	\n4. update Student details ";
	cout<< "\n5. Exit"; 
	cout<<"\nEnter option: ";
	cin >> option;
	if(option == 1)
	{
	add_student();
	}
	else if(option == 2)
	{
	delete_student();
	}
	else if(option == 3)
	{
	find_student();
	}
	else if(option == 4)
	{
	update_student();
	}
	else if (option == 5)
	{
		break;
	}
	else 
	{
		cout<<"\nWrong choice!!\nPlease enter a correct number\n";
	}
	
	
       }  
}
