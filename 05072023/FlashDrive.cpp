#include "FlashDrive.h"

FlashDrive::FlashDrive(const string& brand, int capacity):Storage(brand, capacity) {}

void FlashDrive::writeData()
{
    cout << "����� ����� �� Flash Drive..." << endl;
}

void FlashDrive::readData()
{
    cout << "������� ����� � Flash Drive..." << endl;
}

void FlashDrive::format()
{
    cout << "������������ Flash Drive..." << endl;
}

void FlashDrive::connect()
{
    cout << "Flash Drive ���������� ����� USB." << endl;
}

void FlashDrive::disconnect()
{
    cout << "Flash Drive ���������� USB." << endl;
}