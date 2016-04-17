/*
 * ACKBase.cpp
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#include "ACKBase.h"
#include "gom.h"
#include <cstdlib>

ACK_Base::ACK_Base()
{
	// TODO Auto-generated constructor stub

}

ACK_Base::~ACK_Base()
{
	// TODO Auto-generated destructor stub
}


bool SendMsgTo(ACK_Base* obj, ACK_MSG msg)
{
	if (obj == NULL)
		return false;
	else
		return true;
}
