/*
 * Reggae.h
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#ifndef REGGAE_H_
#define REGGAE_H_
#include "Music.h"

class Reggae:public Music {
public:
	Reggae();
	virtual ~Reggae();

	void song(){
		cout<<"This is reggae "<<endl;
	}
};

#endif /* REGGAE_H_ */
