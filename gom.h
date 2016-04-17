/*
 * gom.h
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 *  Instruction: Global Objects Manager
 */

#ifndef GOM_H_
#define GOM_H_

#include <vector>

using std::vector;

class gom
{
public:
	std::vector<int> objIds;
	gom();
	virtual ~gom();
};

#endif /* GOM_H_ */
