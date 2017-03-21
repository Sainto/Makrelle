#pragma once

#include <string>

enum class Class {
	Warrior,
	Mage,
	Ranger,
	Priest,
	Summoner,
	None,
};

enum class Racename {
	Human,
	Elf,
	Warg,
	Orc,
	Demonspawn,
	None,
};

enum class Attributename {
	Strength,
	Dexterity,
	Wisdom,
	Liftingpower,
	Aim,
	Spellpower,
	Longsword,
	Evasion,
	Cooking,
	None,
};

struct Attribute {
	Attributename name;
	Attribute* parent;
	float scale;
};

struct Race {

};

class Entity {
private:
	std::string name;
};