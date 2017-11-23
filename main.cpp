#include <stdio.h>
#include <iostream>
#include <math.h>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <ctime>
#include <locale.h>
#include <fstream>
#include <cstring>

#include "GetList.h"
#include "cpu_struct.h"
#include "NewRecord.h"
#include "FindAtFile.h"
using namespace std;


int main(){
	char choice;
	//const char FileName;
	int x;

	cpu_struct structura;

	GetList GetingList;
	NewRecord AddRecord;
	FindAtFile Finding;
	cout<<"Enter the File Name"; //cin>>FileName;

	do{
		system("cls");
		cout<<"Choose variant 1-4\n"
		<<"1. Get list\n"
		<<"2. New record\n"
		<<"3. Search\n"
		<<"4. Exit\n";

		switch(choice=getch()){
			case '1':{
			    GetingList.Reading(structura);
			    break;
            }

				// ifstream fp("proc.txt",ios::binary|ios::in); //Открываем файл в двоичном режиме только для чтения
 //   in.read((char*)&x,sizeof x); //Читаем оттуда информацию и запоминаем её в X
 //in.close(); //Закрываем файл



			case '2':{
                AddRecord.Add(structura);
                break;
            }
			case '3':{
                Finding.menu();
                break;
			}
			case '4':
				return 0;
		}
	}while(choice!='4');
return 0;
}
