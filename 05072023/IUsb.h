#pragma once

class IUsb
{
public:
    virtual void connect() = 0;
    virtual void disconnect() = 0;
};

