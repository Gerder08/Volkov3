// ����� ���������� header guard.��ADD_H � ����� ���������� ���.������� ���������� ��� ������������� ����� � �������� ����� ��������������.

#include <stdio.h>
#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <fstream>
#include <cstring>
using namespace std;
// � ��� ��� ������� ����� .h, ��� � ��������� ��� ��������������� ����������

class GetList{
private:
    //char FileName;
public:
    GetList();
    void Reading(struct cpu_struct);
    ~GetList();
};
