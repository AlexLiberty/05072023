#pragma once
#include "Storage.h"
#include <iostream>
#include "Iusb.h"

using namespace std;

class FlashDrive : public Storage, public IUsb
{
public:
    FlashDrive(const string& brand, int capacity);
    void writeData() override;
    void readData() override;
    void format() override;
    void connect() override;
    void disconnect() override;
};

