/*
 * gom.cpp
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#include "gom.h"

gom::gom()
{
	// TODO Auto-generated constructor stub

}

gom::~gom()
{
	// TODO Auto-generated destructor stub
}


bool gom::AddObjAddrToGom(long addr)
{
	objIds.push_back(addr);
	return false;
}

void gom::ProcessMsgs(void)
{

}

