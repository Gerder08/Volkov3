#include <iostream>
#include "GetList.h"
#include "cpu_struct.h"

using namespace std;

GetList::GetList(){}

void GetList::Reading(cpu_struct buf){

    system("cls");
    cout<<"Get list\n";
    //string File = FileName;
    ifstream fp("proc.dat",ios::binary | ios::in);
    if (fp.peek() == EOF){
                    cout<<"Data not found";
                    getch();
                    return;
				}

    while(fp.read((char*)&buf,sizeof(buf))){
            cout<<buf.brend<<endl;
            cout<<buf.model<<endl;
            cout<<buf.frequency<<endl;
            cout<<buf.price<<endl<<endl;
            }
    fp.close();
    getch();
    return;
}
GetList::~GetList(){}
