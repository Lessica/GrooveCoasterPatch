//
//  main.m
//  GrooveCoasterRE
//
//  Created by Zhang Naville on 15/9/4.
//  Copyright © 2015年 Naville. All rights reserved.
//

#import <Foundation/Foundation.h>

int main(int argc, const char * argv[]) {
    @autoreleasepool {
        // insert code here...
            unsigned int v12; 
        NSLog(@"Hello, World!");
         FILE* v5 = fopen("/Users/Naville/Desktop/save.bin", "rb");//ReadOnly,Binary Mode
        fseek(v5, 0, 2);
        fgetpos(v5, (fpos_t *)&v12);
          fseek(v5, 0, 0);
    }
    return 0;
}
