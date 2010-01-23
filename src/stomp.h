#ifndef STOMP_H
#define STOMP_H

#include "stomp_frame.h"

#ifdef __cplusplus 
extern "C" { 
#endif                       

struct _stomp;
typedef	struct _stomp stomp;

typedef int send_handler(int sock, char *buf, int size);                                                
typedef void close_handler(int sock);

stomp_frame *stomp_process(stomp_frame *f);
stomp *stomp_create(int sock, send_handler *send_handler, close_handler *close_handler);
void stomp_receive(stomp *stp, char *buf, int size);
      
#ifdef __cplusplus 
} 
#endif

#endif /* end of include guard: STOMP_H */
