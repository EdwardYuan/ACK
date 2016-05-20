/*
 * ACKBase.cpp
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#include "ACKBase.h"
#include "gom.h"
#include <cstdlib>

using namespace std;

ACK_Base::ACK_Base()
{
	// TODO Auto-generated constructor stub
}

ACK_Base::~ACK_Base()
{
	// TODO Auto-generated destructor stub
    msgBox->empty();
}


bool ACK_Base::SendMsgTo(ACK_Base* obj, ACK_MSG msg)
{
	if (obj == NULL)
		return false;
	else
		return true;
}

void ACK_Base::RecvMsg(ACK_MSG *msg)
{
	ACK_MSG *tmpMsg;
    msgBox->push(*msg);
}

void ACK_Base::Bind(struct ACK_MSG msg, void *)
{

}
