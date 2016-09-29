/*
 * Rock.h
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#ifndef ROCK_H_
#define ROCK_H_
#include "Music.h"

class Rock:public Music {
public:
	Rock();
	virtual ~Rock();

	void song(){
		cout<<"This is rock music "<<endl;
	}
};

#endif /* ROCK_H_ */
