#ifndef _MONSTER_H_
#define _MONSTER_H_
#include "BiologyBase.h"
#include"GameMap.h"
//#include"Hero.h"

class Monster :public BiologyBase {

public:
	Monster(short MapNum);
	~Monster();

};

#endif // !_MONSTER_H_
