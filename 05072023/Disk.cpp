#include "Disk.h"

Disk::Disk(const string& brand, int capacity) : Storage(brand, capacity) {}

void Disk::writeData()
{
    cout << "�� ������� �������� ��� �� ����!" << endl;
}

void Disk::readData()
{
    cout << "������� ����� � �����" << endl;
}

void Disk::format()
{
    cout << "������������ �����" << endl;
}

void Disk::connect()
{
    cout << "Disk ���������� ����� USB." << endl;
}

void Disk::disconnect()
{
    cout << "Disk ���������� �� USB." << endl;
}

