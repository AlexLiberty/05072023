#include "FlashDrive.h"

FlashDrive::FlashDrive(const string& brand, int capacity):Storage(brand, capacity) {}

void FlashDrive::writeData()
{
    cout << "Запис даних на Flash Drive..." << endl;
}

void FlashDrive::readData()
{
    cout << "Читання даних з Flash Drive..." << endl;
}

void FlashDrive::format()
{
    cout << "Форматування Flash Drive..." << endl;
}

void FlashDrive::connect()
{
    cout << "Flash Drive підключений через USB." << endl;
}

void FlashDrive::disconnect()
{
    cout << "Flash Drive відключений USB." << endl;
}