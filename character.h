#ifndef CHARACTER_H
#define CHARACTER_H
#include <sys/types.h>

struct character_sheet{
	char *name;
	uint8_t str;
	uint8_t dex;
	uint8_t con;
	uint8_t intel;
	uint8_t wis;
	uint8_t cha;
	uint8_t saving;
	uint16_t skills;
	int hp;
	uint8_t prof_bonus;
	uint8_t hit_die_type;
	uint8_t hit_die_num;
	uint8_t ac;
	uint8_t spd;
	int exp;
};


//define all the classes
typedef enum e_cls{
	cleric,
	fighter,
	rogue,
	wizard,
	barbarian,
	bard,
	druid,
	monk,
	paladin,
	ranger,
	sorcerer,
	warlock
}cls;
#endif
