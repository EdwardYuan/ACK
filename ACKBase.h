/*
 * ACKBase.h
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#ifndef ACKBASE_H_
#define ACKBASE_H_

struct ACK_MSG
{
	int msg_id;
	ACK_MSG * next;
	char *msgContent;
};

struct ACK_MSG_BOX
{

};

class ACK_Base
{
protected:
	ACK_MSG *MsgBox;
public:
	ACK_Base();
	virtual ~ACK_Base();

	bool SendMsgTo(ACK_Base* obj, ACK_MSG msg);
};

#endif /* ACKBASE_H_ */
