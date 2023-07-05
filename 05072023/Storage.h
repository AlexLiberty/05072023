#pragma once
#include <iostream>
#include <string>

using namespace std;

class Storage
{
protected:
	string brand;
	int capacity;
public:
	Storage(const string& brand, int capacity);
	virtual void writeData() = 0;
	virtual void readData() = 0;
	virtual void format() = 0;
};

