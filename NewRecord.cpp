#include <iostream>
#include "NewRecord.h"
#include "cpu_struct.h"

using namespace std;

NewRecord::NewRecord(){}

void NewRecord::Add(cpu_struct buf){
        cout<<"New record\n";
        ofstream fp("proc.dat",ios::binary|ios::app);

            cout<<"brend = "; cin>>buf.brend;
            cout<<"model = "; cin>>buf.model;
            cout<<"frequency = "; cin>>buf.frequency;
            cout<<"price = "; cin>>buf.price;

            fp.write((char*)&buf,sizeof(cpu_struct));

        fp.close();
        getch();
        return;
}
NewRecord::~NewRecord(){}
