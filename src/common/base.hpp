#ifndef BASE_HPP
#define BASE_HPP

#include <iostream>

#include "status.hpp"

#define CL_SOCK_TYPE AF_INET
#define CL_DEFAULT_PORT 8080
#define CL_DEFAULT_SERV_ADDR 0x7f000001 /* 127.0.0.1 */

#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h>
#endif

#ifdef _WIN32
#else
#include <sys/socket.h>
#include <netinet/in.h>
#endif


#ifdef DEBUG
#define DEBUG_PRINT(fmt, args...) fprintf(stderr, "DEBUG: %s:%d:%s(): " fmt, \
                                          __FILE__, __LINE__, __func__, ##args)
#else
#define DEBUG_PRINT(fmt, ...)
#endif



#endif /* BASE_HPP */