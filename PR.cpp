#include<iostream>
#include<fstream>
#include <string> 
#include<string.h> 
using namespace std; 
int main()
{
	
	float  option , average = 0 , studentsnumber=0 , totalrate=0 ,bestrate=0;
	float  age ,courses, hours ,level,rate;
	string beststudent ;
	string firstname ;
	string lastname ;
	string major ;
	string id ;
	char data[15];
		while(option != 5)
		{
	cout << "\nAvailable operations:";
	cout<< "\n1. Add New Students";
	cout<< " \n2. Delete student records";
	cout<<"	\n3. Find Student details";
	cout<<"	\n4. Find best Student and rate average ";
	cout<< "\n5. Exit"; 
	cout<<"\nEnter option: ";
	cin >> option;
	
		if(option == 1)
			{
				ofstream in; 
			in.open("Final Project Group C.txt",ios::app);
			
				cout << "Enter student ID Number :" ;
				cin >> id ;
	            in << id << "\t";
	            cout << "Enter first name :" ;
				cin >> firstname ;
	            in << firstname << "\t";
	            cout << "Enter last name :" ;
				cin >> lastname ;
	            in << lastname << "\t";
	            cout << "Enter the age of the student :" ;
				cin >> age ;
	            in << age << "\t";
	            cout << "Enter Number of courses studied :" ;
				cin >> courses ;
	            in << courses << "\t";
	            cout << "Enter Number of hours collected :" ;
				cin >> hours ;
	            in << hours << "\t";
	            cout << "Enter student level of 8 :" ;
				cin >> level ;
	            in << level << "\t";
	            cout << "Enter Student major :" ;
				cin >> major ;
	            in << major << "\t";
	            cout << "Enter the rate of 5 :" ;
				cin >> rate ;
	            in << rate << endl;
	            in .close();
	            if(bestrate<rate){
	            	bestrate=rate ;
	            	beststudent=firstname+" "+lastname ;
				}
	            studentsnumber=studentsnumber+1 ;
	            totalrate=totalrate+rate ;
				average=totalrate/studentsnumber ;
		
			}
		else if(option == 2)
			{
				
			}
		else if(option == 3)
			{
				char id1[9]; 
		cout << "Enter your ID number: "; 
		cin >> id1; 
		ifstream in; 
		int check = 0; 
		in.open("Final Project Group C.txt"); 
		while (in >> data){ 
		if (strcmp(data,id1) == 0){ 
			cout << "\nID Number: " << data << endl; 
			in >> data; 
			cout << "first name: " << data << endl; 
			in >> data; 
			cout << "last namek: " << data << endl; 
			in>>data; 
			cout<<"the age: "<<data<<endl; 	
			in>>data; 
			cout<<"Number of courses studied: "<<data<<endl; 
			in>>data; 
			cout<<"Number of hours collected: "<<data<<endl; 
			in>>data; 
			cout<<"student level: "<<data<<endl; 
			in>>data; 
			cout<<"Student major: "<<data<<endl;
			in>>data; 
			cout<<"student rate: "<<data<<endl;  
			
			in.close(); 
			check = 1;} 
		
		} 
		
		if (check == 0){ 
			cout<<"\n\nNo such ID number found!"<<endl;} 
		
			
				
			}
			else if(option == 4){
				cout << "\n\nBests student is "<<beststudent<<" and his rate " << bestrate;
				cout << "\nstudents rate average is "<< average<<"\n\n";
				
			}
			
			}
			
	}
		
	
    


