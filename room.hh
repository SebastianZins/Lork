#ifndef ROOM_HH
#define ROOM_HH
	
	#include <string>
	#include <vector>

	class Room : public Point{
	private:
		std::string name;
	public:
		Room *North, *South, *East, *West;
		//constructor
		Room (std::string n, int x, int y);
		//funtions
		//getter
		std::string getName() const;
		//setter
		void setName(const std::string& name);
		//other
	};

	class Point{
	protected:
		int x, y;
	public:
		//constructor
		Point(x, y);
		Point();
		//funtions
		//getter
		int getX() const;
		int getY() const;
		//setter
		void setX(const int x);
		void setY(const int y);
		void setPos(const int x, const int y);
		
	};
#endif//ROOM_HH