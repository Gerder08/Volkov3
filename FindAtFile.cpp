#include <iostream>
#include "FindAtFile.h"
#include "cpu_struct.h"

using namespace std;

void FindAtFile::menu(){
    cpu_struct structura;
    system("cls");
    cout<<"Search\n";
    cout<<"Choose variant 1-5\n"
    <<"1. brend\n"
    <<"2. model\n"
    <<"3. frequency\n"
    <<"4. price\n"
    <<"5. Exit\n";
    choice=getch();
    FindAndShow(structura);
    return;
}

void FindAtFile::ShowData(cpu_struct buf){
    cout<<buf.brend<<endl;
    cout<<buf.model<<endl;
    cout<<buf.frequency<<endl;
    cout<<buf.price<<endl<<endl;
}

void FindAtFile::FindAndShow(cpu_struct buf){
    ifstream fp("proc.dat",ios::binary);
    if (fp.peek() == EOF){
                    cout<<"Data not found";
                    getch();
        return;
    }
        switch(choice){
                    case '1':{
                        //Check();
                        cout<<"Enter a brend name = ";cin>>name;

                        ifstream fp("proc.dat",ios::binary);


                        while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                if(!strcmp(buf.brend,name)){
                                    ShowData(buf);
                                }
                        }
                        fp.close();
                        getch();
                        return;
                    }
                    case '2':{
                        ifstream fp("proc.dat",ios::binary);

                        cout<<"Enter a model name = ";cin>>name;

                        while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                if(!strcmp(buf.model,name)){
                                    ShowData(buf);
                                }
                        }
                        fp.close();
                        getch();
                        return;
                    }
                    case '3':{
                        ifstream fp("proc.dat",ios::binary);

                        cout<<"Enter >/</=frequency";choice=getch();cin>>x;
                        switch(choice){
                            case '>':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.frequency>x){
                                        ShowData(buf);
                                    }
                                }
                            }
                            case '<':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.frequency<x){
                                        ShowData(buf);
                                    }
                                }
                            }
                            case '=':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.frequency==x){
                                        ShowData(buf);
                                    }
                                }
                            }
                        }
                        fp.close();
                        getch();
                        return;
                    }
                    case '4':{
                        ifstream fp("proc.dat",ios::binary);
                        if (fp.peek() == EOF){
                    cout<<"Data not found";
                    getch();
        return;
    }
                        cout<<"Enter >/</=price ";choice=getch();cin>>x;
                        switch(choice){
                            case '>':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.price>x){
                                        ShowData(buf);
                                    }
                                }
                            }
                            case '<':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.price<x){
                                        ShowData(buf);
                                    }
                                }
                            }
                            case '=':{
                                while(fp.read((char*)&buf,sizeof(cpu_struct))){
                                    if(buf.price==x){
                                        ShowData(buf);
                                    }
                                }
                            }
                        }
                        fp.close();
                        getch();
                        return;
                    }
                    case '5':{
                        return;
                    }
                }
            }

