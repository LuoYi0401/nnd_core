#ifndef NND_KERNEL_H_
#define NND_KERNEL_H_

typedef signed char  int8;
typedef signed short int16;
typedef signed int   int32;
typedef signed long  int64;

typedef unsigned char  uint8; 
typedef unsigned short uint16; 
typedef unsigned int   uint32; 
typedef unsigned long  uint64; 

typedef int (*sort)(const void *, const void *);
typedef void (*query)(const void *, const char *, ...);
typedef void (*runnable)();

#endif
