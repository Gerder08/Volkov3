#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
// � ��� ��� ������� ����� .h, ��� � ��������� ��� ��������������� ����������

class FindAtFile{
private:
    char choice, name[20];
    int x;
public:
    void menu();
    void ShowData(struct cpu_struct);
    void FindAndShow(struct cpu_struct);
};
