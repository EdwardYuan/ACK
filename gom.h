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
#include <queue>
#include "global.h"

using std::vector;

class gom
{
public:
	gom();
	virtual ~gom();

	bool AddObjAddrToGom(long addr);
private:
    std::vector<long> objIds;  // refer to the address of objects
    std::queue<ACKMsg> msgs;

    void ProcessMsgs(void);
	std::vector<long> FindObjByaddr(long addr);
};

#endif /* GOM_H_ */
