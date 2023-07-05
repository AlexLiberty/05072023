#include "Disk.h"

Disk::Disk(const string& brand, int capacity) : Storage(brand, capacity) {}

void Disk::writeData()
{
    cout << "Не вдається записати дані на диск!" << endl;
}

void Disk::readData()
{
    cout << "Читання даних з диска" << endl;
}

void Disk::format()
{
    cout << "Форматування диска" << endl;
}

void Disk::connect()
{
    cout << "Disk підключений через USB." << endl;
}

void Disk::disconnect()
{
    cout << "Disk відключений від USB." << endl;
}

