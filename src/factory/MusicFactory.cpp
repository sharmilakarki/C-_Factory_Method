/*
 * MusicFactory.cpp
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#include "MusicFactory.h"
#include "../util/Music.h"
#include "../util/Rock.h"
#include "../util/Reggae.h"
#include "../util/Pop.h"

MusicFactory::MusicFactory() {
	// TODO Auto-generated constructor stub

}

MusicFactory::~MusicFactory() {
	// TODO Auto-generated destructor stub
}


Music* MusicFactory::getMusic(genre_ genre) {
		Music *music = NULL;

		/*Logic based on Genre*/
		switch (genre) {
		case ROCK:
			music = new Rock();
			break;
		case POP:
			music = new Pop();
			break;
		case REGGAE:
			music = new Reggae();
			break;
		default:
			music = NULL;
			break;
		}
		return music;
	}

