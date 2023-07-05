#pragma once
#include "Storage.h"
#include "Iusb.h"

using namespace std;

class Disk : public Storage, public IUsb
{
public:
    Disk(const string& brand, int capacity);
    void writeData() override;
    void readData() override;
    void format() override;
    void connect() override;
    void disconnect() override; 
};

