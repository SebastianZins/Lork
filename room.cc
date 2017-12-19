#include <string>
#include <vector>

#include "room.hh"

//class Room
//constructors
Room::Room (std::string n, int x, int y) 
	: name(n)
	{North = this; South = this; East = this; West = this;}
//funtions
//getter
std::string Room::getName() const {return name;}
//setter
void Room::setName(const std::string& name) {
	this->name = name;}
//other

//class Point
//constructor
Point::Point(x, y): x(x), y(y){}
Point::Point(): x(0), y(0) {}
//funtions
//getter
int getX() const {return x;}
int getY() const {return y;}
//setter
void setX(const int x) {this->x = x;}
void setY(const int y) {this->y = y;}
void setPos(const int x, const int y){
	this->x = x;
	this->y = y;
}