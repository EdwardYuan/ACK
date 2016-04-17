/*
 * ACKBase.h
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#ifndef ACKBASE_H_
#define ACKBASE_H_

#include <list>

struct ACK_MSG
{
	int msg_id;
	ACK_MSG * next;
	char *msgContent;
};

class ACK_Base
{
protected:
	std::list<ACK_MSG> *msgBox;
	// ACK_MSG *msgBox;
	// int msgCnt = 0;
public:
	ACK_Base();
	virtual ~ACK_Base();

	bool SendMsgTo(ACK_Base* obj, ACK_MSG msg);
	void RecvMsg(ACK_MSG *msg);

};

#endif /* ACKBASE_H_ */
