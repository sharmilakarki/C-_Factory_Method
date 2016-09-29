/*
 * Music.h
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#ifndef MUSIC_H_
#define MUSIC_H_
#include <iostream>

using namespace std;


enum genre_{ROCK,POP, REGGAE, INVALID};
class Music {
public:
	Music();
	virtual ~Music();
	void virtual song()=0;
};

#endif /* MUSIC_H_ */
