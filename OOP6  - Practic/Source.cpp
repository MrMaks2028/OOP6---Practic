#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
using namespace std;

class Animal {
public:
	Animal(){}
	Animal(string name) {
		name = _name;
	}
	void setName(string name) {
		name = _name;
	}
	string getName() {
		return _name;
	}
	void setHP(int HP){
		HP = _HP;
	}
	int getHP() {
		return _HP;
	}
	void move(){
		cout << "Animal moving\n";
	}
	bool starving() {
		srand(time(NULL));
		bool starving = rand() % 2;
		return starving;
	}
	void eat() {
		if (starving() == 1){
			cout << "Animal eating";
			_HP++;
		}
		else
			cout << "Animal is not hungry";
	}
private:
	string _name;
	int _HP = 100;
};

class Predator: public Animal {
public:
	Predator() {}
	Predator(string name){
		setName(name);
	}
	void hunting();
private:
	
};

class Wolf: public Predator {
public:
	void howl(){
		cout << "Wolf howling";
	}
private:

};

class Shark: public Predator {
public:
	void swim(){
		cout << "Shark swimming";
	}
private:

};

class GrassFeeding: public Animal {
public:
	GrassFeeding(){}
	GrassFeeding(string name){
		setName(name);
	}
	void getBited(GrassFeeding &a1, Predator &a2) {
		cout << a2.getName() << " bitten " << a1.getName();
		getHP() - 100;
	}
private:
	
};

class Camel: public GrassFeeding {
public:
	void storeFat(){}
private:

};

class Beaver: public GrassFeeding {
public:
	void woodTurning(){}
private:

};



int main() {
	setlocale(LC_ALL, "Russian");
	

	return 0;
}