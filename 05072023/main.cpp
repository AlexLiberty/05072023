#include "FlashDrive.h"
#include "Disk.h"
#include "Storage.h"
#include "IUsb.h"
#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    //FlashDrive flashDrive("SanDisk", 64);
    //Disk disk("Seagate", 1000);

    //flashDrive.connect();
    //flashDrive.writeData();
    //flashDrive.readData();
    //flashDrive.format();
    //flashDrive.disconnect();

    //cout << endl;

    //disk.connect();
    //disk.writeData();
    //disk.readData();
    //disk.format();
    //disk.disconnect();

    Storage* storage[1]{ new Disk("Sandisk", 64) };
    //((IUsb*)storage[0])->connect();// чомусь направляє у writeData()
    Disk* disk = static_cast<Disk*>(storage[0]);
    disk->connect();
    storage[0]->writeData();
    storage[0]->readData();
    storage[0]->format();
    disk->disconnect();
    //((IUsb*)storage[0])->disconnect();// чомусь направляє у writeData()

    delete storage[0];


    return 0;
}