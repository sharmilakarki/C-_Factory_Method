/*
 * MainClass.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#include "MainClass.h"
#include "../factory/MusicFactory.h"
#include <stdlib.h>

MainClass::MainClass() {
	// TODO Auto-generated constructor stub

}

MainClass::~MainClass() {
	// TODO Auto-generated destructor stub
}
int setenv(const char *name, const char *value, int replace);
int main() {

	setenv("MusicType", "Rock", 0);

	MusicFactory *musicFactory = new MusicFactory();
	Music *music = musicFactory->getMusic(ROCK);

	if (const char* env = getenv("MusicType")) {
		if (music) {
			music->song();
		} else {
			cout << "Wrong selection";
		}
	}

}
