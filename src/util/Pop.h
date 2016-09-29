/*
 * Pop.h
 *
 *  Created on: Sep 27, 2016
 *      Author: sharmila
 */

#ifndef POP_H_
#define POP_H_
#include "Music.h"

class Pop:public Music {
public:
	Pop();
	virtual ~Pop();

	void song(){
		cout<<"This is pop music"<<endl;
	}
};

#endif /* POP_H_ */
