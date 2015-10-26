//
//  mtxc.cpp
//  GrooveCoasterRE
//
//  Created by Zhang Naville on 15/9/4.
//  Copyright © 2015年 Naville. All rights reserved.
//
int g_alloc_count;
int g_alloc_size;
#include "mtxc.hpp"
#include <stdlib.h>
#include <string.h>
void * mtxc_mallocHeap(int a1, unsigned int size, const char *a3)
{
    size_t localsize; // r6@1
    int v4; // r7@1
    unsigned int v5; // r5@1
    void *result; // r0@1
    void *v7; // r4@1
    
    localsize = size+ 8;
    v4 = a1;
    v5 = size;
    result = malloc(size + 8);
    v7 = result;
    if (result!=NULL)
    {
        memset(result, 0,localsize);
       (int)*v7 = v4;
        result = (char *)v7 + 8;
        (int)*(v7 + 1) = v5;
        g_alloc_size += v5;
        ++g_alloc_count;
    }
    return result;
}
void * mtxc_malloc(unsigned int a1, const char *a2)
{
    return mtxc_mallocHeap(0, a1, a2);
}

