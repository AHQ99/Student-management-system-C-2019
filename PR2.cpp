#include <iostream>
#include <fstream>
#include  <string.h>
using namespace std; 

void  insert_student()
{

    char name [25];
    char name1[25];
    char age[25];
    char id[25];
    char numcourses[25];
    char hours[25];
    char level[25];
    char major[25];
    char rate[25];
    fstream stud;
    stud.open("Final Project Group C.txt", ios::app);
    cin.ignore();
    cout<<"\nEnter ID number : ";
    cin.getline(id,25);
    cout<<"\nEnter first name : ";
    cin.getline(name,25);
    cout << "\nEnter last name :" ;
    cin.getline(name1,25);
    cout<<" \nEnter age : ";
    cin.getline(age,25);
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
    stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
    cout<< "\n\nInformation added successfully\n";
    stud.close();
}

void delete_student()
{

    fstream stud;
    fstream temp;

    stud.open("Final Project Group C.txt",ios::in);
    temp.open("temp.txt",ios::out);
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
        stud.getline(rate,25);
        if(strcmp(id,a)==0)
        {
        x=1 ;
        cout<<"\nThe data has been deleted\n";
        continue;
        }
        else
        {
            temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
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
        temp.getline(rate,25);
        stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
    }
    temp.close();
    stud.close();
    remove("temp.txt");
    
}

void search_student(   )
{

    fstream stud;
    stud.open("Final Project Group C.txt",ios::in);
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
        stud.getline(rate,25);
        if(strcmp(id, a)==0)
        {
        	cout<< "\nID number : "<<id;
            cout<<"\nName : " << name<<" "<<name1;
            cout<<"\nAge : "<<age;
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
    stud.close();
}

void update_student()
{
    fstream stud;
    fstream temp;

    stud.open("Final Project Group C.txt",ios::in);
    temp.open("temp.txt",ios::out);
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
        stud.getline(rate,25);
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
    temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
    cout<<"\nThe data has been updated\n";
    x=1;
        }
        else
        {
            temp<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
            
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
        temp.getline(rate,25);
        stud<< name<<'|'<<id<<'|'<<age<<'|'<<name1<<'|'<<major<<'|'<<numcourses<<'|'<<hours<<'|'<<level<<'|'<<rate<<'\n';
    }
    temp.close();
    stud.close();
    remove("temp.txt");
}
int main()
{
	int option;
	while(option != 5)
		{
	cout << "\nAvailable operations:";
	cout<< "\n1. Add New Students";
	cout<< " \n2. Delete student records";
	cout<<"	\n3. Find Student details";
	cout<<"	\n4. update Student details ";
	cout<< "\n5. Exit"; 
	cout<<"\nEnter option: ";
	cin >> option;
	if(option == 1)
	{
	insert_student();
	}
	else if(option == 2)
	{
	delete_student();
	}
	else if(option == 3)
	{
	search_student();
	}
	else if(option == 4)
	{
	update_student();
	}
	else if(option==5)
	{
		option=5;
	}
	else 
	{
		cout<<"\nPlease enter a correct number\n";
	}
	
       }  
}
