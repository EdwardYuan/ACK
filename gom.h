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
	std::vector<long> objIds;  // refer to the address of objects
	gom();
	virtual ~gom();

	bool AddObjAddrToGom(long addr);
private:
	std::vector<long> FindObjByaddr(long addr);
};

#endif /* GOM_H_ */
