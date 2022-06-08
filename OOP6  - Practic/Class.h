#include <iostream>
#include <string>

class Plants{
public:
	void setName(std::string name);
private:
	std::string _name;
};

class Tree: public Plants {
public:
	void collectHarvest();
private:
	Fruit fruit;
};

class Bush: public Plants {
public:
	void collectHarvest();
private:
	Berry berry;
};

class Harvest {
public:

private:
	int countFruits;
};

class Fruit: public Harvest {
public:

private:

};

class Berry: public Harvest {
public:

private:

};