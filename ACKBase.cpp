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
	msgBox = malloc(sizeof(ACK_MSG));
	msgCnt = 0;
}

ACK_Base::~ACK_Base()
{
	// TODO Auto-generated destructor stub
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
	tmpMsg = malloc(sizeof(ACK_MSG));
	tmpMsg->msg_id = msg->msg_id;
	tmpMsg->msgContent = msg->msgContent;
	tmpMsg->next = NULL;
	msgBox->next = tmpMsg;
	msgCnt++;
}
