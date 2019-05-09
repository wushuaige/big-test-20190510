#pragma once
#include <string>
#include <iostream>
#include <vector>
#include <memory>
#include "item.h"

using namespace std;

class player
{
private:
	int x,y,z;
	int hp;
	string name;
	vector<shared_ptr<item>> itemList;
public:
	void showInfo();
	void showItemInfo();
	void addItem(item* i);

	player(string name);


};
