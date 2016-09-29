/*
 * MusicFactory.h
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#ifndef MUSICFACTORY_H_
#define MUSICFACTORY_H_

#include "../util/Music.h"
#include "../util/Rock.h"
#include "../util/Reggae.h"
#include "../util/Pop.h"
#include <iostream>

using namespace std;

class MusicFactory {
public:
	MusicFactory();
	virtual ~MusicFactory();
	Music *getMusic(genre_ genre);

};

#endif /* MUSICFACTORY_H_ */
