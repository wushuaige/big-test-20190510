#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>

using namespace std;

class item
{
private:
	int x,y,z;
	string name;
public:
	void showInfo();
	item(string name);

};
