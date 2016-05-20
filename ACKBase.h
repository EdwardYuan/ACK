/*
 * ACKBase.h
 *
 *  Created on: Apr 17, 2016
 *      Author: edward
 */

#ifndef ACKBASE_H_
#define ACKBASE_H_

#include <list>
#include <queue>

struct ACK_MSG
{
	int msg_id;
	char *msgContent;
};

class ACK_Base
{
protected:
    std::queue <ACK_MSG> *msgBox;
    void Bind(struct ACK_MSG msg, void *);
public:
	ACK_Base();
	virtual ~ACK_Base();

	bool SendMsgTo(ACK_Base* obj, ACK_MSG msg);
    void RecvMsg(ACK_MSG *msg);
    virtual void InitMsgEvents() = 0;

};

#endif /* ACKBASE_H_ */
