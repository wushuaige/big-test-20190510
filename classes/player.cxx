#include "player.h"

void player::showInfo(){
	cout<<"PLAYER INFO:"<<endl
		<<"\t"<<name<<"\t"<<hp
		<<"\t"<<x<<"\t"<<y<<"\t"<<z<<endl;
}
void player::showItemInfo(){
	for(auto &o : itemList){
		o->showInfo();
	}
}
void player::addItem(item* i){
	itemList.push_back(i);

}

player::player(string name){
	this->name = name;
}
