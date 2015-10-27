//
//  Misc.c
//  GrooveCoasterRE
//
//  Created by Zhang Naville on 15/9/4.
//  Copyright © 2015年 Naville. All rights reserved.
//

#include "Misc.hpp"
#include <string.h>
#include <strings.h>
#include <string>
using namespace std;
void loadSaveFileNS(const char *a1, int *a2)
{
    const char *v2; // r4@1
    unsigned int *v3; // r8@1
    int v4; // r0@1
    FILE *v5; // r0@1
    int v6; // r1@1
    unsigned int v7; // r2@1
    FILE *v8; // r4@1
    void *v9; // r0@3
    void *v10; // r5@3
    void *result; // r0@8
    unsigned int v12; // [sp+0h] [bp-4h]@1
 string  v13; // [sp+4h] [bp+0h]@1
    char *filename; // [sp+18h] [bp+14h]@1
    int v15; // [sp+1Ch] [bp+18h]@1
    v2 = a1;
    v3 = *a2;
    std::string(&v13);
  //  mtxc_stringSprintf((std::string *)&v13, "%s/%s",tune_getSavePath(), a1);
    v12 = 0;
 v5 = fopen(filename, "rb");//ReadOnly,Binary Mode
    if (v5!=NULL)
    {
        fseek(v5, 0, 2);
        fgetpos(v5, (fpos_t *)&v12);
        *v3 = v12;
        fseek(v5, 0, 0);
        if (*v3!=NULL)
        {
            v9 = mtxc_malloc(*v3, 0);
            if (v9!=NULL)
            {
                fread(v9, 0x1, *v3, v5);
                fflush(v5);
            }
        }
        else
        {
            v9 = 0;
        }
        fclose(v5);
    }
    else
    {
        v9 = 0;
    }
  //  sub_4B47E((int)&v13, v6, v7);
    return v9;
}