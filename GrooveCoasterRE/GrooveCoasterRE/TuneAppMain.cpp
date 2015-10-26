//
//  TuneAppMain.cpp
//  GrooveCoasterRE
//
//  Created by Zhang Naville on 15/9/4.
//  Copyright © 2015年 Naville. All rights reserved.
//

#include "TuneAppMain.hpp"
signed int TuneAppMain::getSavedataSize(TuneAppMain *this)
{
    return 98304;
}

signed int TuneAppMain::LoadGameData(TuneAppMain *this, char *a2, int a3)
//  v4 = (char *)loadSaveFileNS("save.bin", &v8);
//v5 = TuneAppMain::LoadGameData(this, v4,0);
{
    TuneAppMain *v3; // r5@1
    char *v4; // r4@1
    int v5; // r6@5
    signed int v6; // r0@5
    int v7; // r6@6
    int v8; // r7@6
    int v9; // r2@6
    int v10; // r0@6
    int v11; // t1@7
    int v12; // r2@8
    int v13; // r0@8
    int v14; // t1@9
    int v15; // r3@11
    int v16; // r3@11
    int v17; // r2@11
    int v18; // t1@12
    int v19; // r0@13
    TuneAppMain *v20; // r4@15
    int v21; // r3@15
    int v22; // r6@15
    int v23; // r9@16
    int v24; // r4@16
    int v25; // r10@19
    unsigned int v26; // r2@20
    int v27; // r3@21
    int v28; // r2@24
    int v29; // r10@27
    int v30; // r11@27
    int v38; // lr@32
    int v39; // r0@34
    int v40; // r2@34
    int v41; // r1@34
    int v42; // r3@36
    int i; // r3@33
    int v44; // r0@39
    int v45; // r2@41
    int j; // r1@41
    int k; // r4@49
    int v48; // r6@52
    int v49; // r0@52
    unsigned int v50; // r2@52
    int l; // r4@55
    int v52; // r6@60
    int v53; // r0@60
    unsigned int v54; // r2@60
    int m; // r4@63
    signed int result; // r0@65
    int v57; // r6@67
    int v58; // r0@67
    unsigned int v59; // r2@67
    int v60; // [sp+0h] [bp-38h]@14
    signed int v61; // [sp+4h] [bp-34h]@14
    signed int v62; // [sp+8h] [bp-30h]@14
    int v63; // [sp+Ch] [bp-2Ch]@14
    char v64; // [sp+10h] [bp-28h]@23
    
    v3 = this;
    v4 = a2;
    if ( a2
        && a3 == TuneAppMain::getSavedataSize(this)
        && *a2 == 808474195
        && *(a2+2) > 858796079
        && (v5 = *(a2 + 1), v6 = TuneAppMain::getSavedataSize(v3), v5 == CalcSum(a2 + 8, v6 - 8)) )
    {
        v7 = (int)(this + 92160);
        v8 = (int)(this + 93696);
        *(v7 + 136) = *(a2 + 3);
        *(v7 + 140) = *(a2 + 4);
        *(v8 + 312) = *(a2 + 5);
        *(v8 + 316) = *(a2 + 6);
        *(v8 + 320) = *(a2 + 7);
        *(v8 + 324) = *(a2 + 8);
        *(v7 + 152) = *(a2 + 9);
        *(v7 + 156) = *(a2 + 10);
        *(v7 + 124) = *(a2 + 17566);
        *(v7 + 128) = *(a2 + 17567);
        memcpy(this + 94024, a2 + 44, 0x44);
        memcpy(this + 94092, a2 + 112, 0x50);
        memcpy(this + 8808, a2 + 192, 0xF800);
        memcpy(this + 72296, a2 + 63680, 0xC00);
        memcpy(this + 75368, a2 + 66752, 0x300);
        memcpy(this + 76136, a2 + 67520, 0x100);
        memcpy(this + 76392, a2 + 67776, 0x180);
        v9 = (int)(a2 + 68160);
        v10 = (int)(this + 8660);
        do
        {
            v11 = *(_DWORD *)v9;
            v9 += 4;
            *(_DWORD *)v10 = v11;
            v10 += 4;
        }
        while ( (char *)v9 != v4 + 68192 );
        v12 = (int)(v4 + 68192);
        v13 = (int)((char *)v3 + 83012);
        do
        {
            v14 = *(_DWORD *)v12;
            v12 += 4;
            *(_DWORD *)v13 = v14;
            v13 += 4;
        }
        while ( (char *)v12 != v4 + 68212 );
        *(_DWORD *)((char *)v3 + 8702) = *((_DWORD *)v4 + 17053);
        memcpy((char *)v3 + 90236, v4 + 68216, 0x800u);
        if ( *((_DWORD *)v4 + 2) > 875573295 )
        {
            *((_DWORD *)v3 + 20758) = *((_DWORD *)v4 + 17568);
            v15 = (int)((char *)v3 + 93184);
            *(_DWORD *)(v15 + 264) = *((_DWORD *)v4 + 19105);
            *(_BYTE *)(v15 + 268) = v4[76424];
            memcpy((char *)v3 + 76776, v4 + 70276, 0x1800u);
            v16 = (int)(v4 + 82588);
            v17 = (int)((char *)v3 + 82920);
            do
            {
                v18 = *(_DWORD *)v16;
                v16 += 4;
                *(_DWORD *)v17 = v18;
                v17 += 4;
            }
            while ( (char *)v16 != v4 + 82652 );
            strcpy((char *)v3 + 84080, v4 + 76425);
            v19 = (int)((char *)v3 + 85116);
            *(_DWORD *)(v19 - 12) = *((_DWORD *)v4 + 19363);
            *(_DWORD *)(v19 - 8) = *((_DWORD *)v4 + 19364);
            *(_DWORD *)(v19 - 4) = *((_DWORD *)v4 + 19365);
            *((_BYTE *)v3 + 83040) = v4[82584];
            memcpy((char *)v3 + 85116, v4 + 77464, 0x400u);
            memcpy((char *)v3 + 86140, v4 + 78488, 0x1000u);
            *((_BYTE *)v3 + 92335) = v4[82585];
        }
        v60 = 0;
        v61 = 3;
        v62 = 1;
        v63 = 0;
        if ( *((_DWORD *)v3 + 2191) )
        {
            v23 = 0;
            v24 = 0;
            while ( v24 < *((_DWORD *)v3 + 2190) && v24 != 512 )
            {
                v25 = *((_DWORD *)v3 + 2191) + 152 * v24;
                if ( StageParam::isAvailable((StageParam *)v25) )
                {
                    v26 = *(_DWORD *)(v25 + 8);
                    if ( v26 <= 3 )
                    {
                        v27 = (int)((char *)v3 + v23);
                        if ( v24 && !(*(_DWORD *)(v27 + 8808) & 2) && *((_DWORD *)&v64 + v26 - 4) & 2 )
                        {
                            v28 = *((_DWORD *)v3 + 23071);
                            *((_WORD *)v3 + 2 * (v28 + 22528) + 62) = v24;
                            *((_DWORD *)v3 + 23071) = v28 + 1;
                        }
                        *(_DWORD *)(v27 + 8808) |= *((_DWORD *)&v64 + *(_DWORD *)(v25 + 8) - 4);
                    }
                }
                ++v24;
                v23 += 124;
            }
        }
        v20 = v3;
        v21 = 0;
        v22 = (int)((char *)v3 + 92284);
        while ( 1 )
        {
            v38 = *(_DWORD *)v22;
            if ( v21 >= *(_DWORD *)v22 )
                break;
            v29 = v21 + 1;
            v30 = (int)((char *)v20 + 90236);
            _R2 = *((_WORD *)v20 + 45118);
            if ( (signed __int16)_R2 < 0 )
                goto LABEL_73;
            if ( (signed int)(signed __int16)_R2 >= *((_DWORD *)v3 + 2190) )
                goto LABEL_73;
            _R3 = 152;
            __asm { SMULBB.W        R0, R2, R3 }
            if ( StageParam::isAvailable((StageParam *)(_R0 + *((_DWORD *)v3 + 2191))) )
            {
            LABEL_73:
                v39 = *(_DWORD *)v22;
                v40 = v29;
                v41 = 0;
                while ( v40 < v39 )
                {
                    v42 = (int)((char *)v20 + v41 + 90112);
                    ++v40;
                    v41 += 4;
                    if ( *(_WORD *)v30 == *(_WORD *)(v42 + 128) )
                        *(_WORD *)(v42 + 128) = -1;
                }
            }
            else
            {
                *(_WORD *)v30 = -1;
            }
            v20 = (TuneAppMain *)((char *)v20 + 4);
            v21 = v29;
        }
        for ( i = 0; ; ++i )
        {
            v44 = *(_DWORD *)v22;
            if ( i >= *(_DWORD *)v22 )
                break;
            if ( *((_WORD *)v3 + 2 * (i + 22528) + 62) == -1 )
            {
                v45 = i + 1;
                for ( j = 0; ; *(_WORD *)((char *)v3 + 4 * i + j + 90232) = *(_WORD *)((char *)v3 + 4 * i + j + 90236) )
                {
                    j += 4;
                    if ( v45 >= v38 )
                        break;
                    ++v45;
                }
                --i;
                *(_DWORD *)v22 = v44 - 1;
            }
        }
        if ( *(_DWORD *)(GetMain() + 8772) )
        {
            for ( k = 0; k < *((_DWORD *)v3 + 2192) && k != 256; ++k )
            {
                v48 = *(_DWORD *)(GetMain() + 8772);
                v49 = GetMain();
                v50 = *(_DWORD *)(v48 + 292 * k + 8);
                if ( v50 <= 3 )
                    *(_DWORD *)(v49 + 12 * k + 72296) |= *((_DWORD *)&v64 + v50 - 4);
            }
        }
        if ( *(_DWORD *)(GetMain() + 8780) )
        {
            for ( l = 0; l < *((_DWORD *)v3 + 2194) && l != 64; ++l )
            {
                v52 = *(_DWORD *)(GetMain() + 8780);
                v53 = GetMain();
                v54 = *(_DWORD *)(v52 + 48 * l + 8);
                if ( v54 <= 3 )
                    *(_DWORD *)(v53 + 12 * l + 75368) |= *((_DWORD *)&v64 + v54 - 4);
            }
        }
        if ( *(_DWORD *)(GetMain() + 8788) )
        {
            for ( m = 0; m < *((_DWORD *)v3 + 2196) && m != 32; ++m )
            {
                v57 = *(_DWORD *)(GetMain() + 8788);
                v58 = GetMain();
                v59 = *(_DWORD *)(v57 + 48 * m + 8);
                if ( v59 <= 3 )
                    *(_DWORD *)(v58 + 8 * (m + 9517)) |= *((_DWORD *)&v64 + v59 - 4);
            }
        }
        result = 1;
    }
    else
    {
        result = 0;
    }
    return result;
}
