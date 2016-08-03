#ifndef GLOBAL_H
#define GLOBAL_H

struct ACKMsg{
    int msgId;
    void *src;
    void *dest;
    void *param;
};

#endif // GLOBAL_H
