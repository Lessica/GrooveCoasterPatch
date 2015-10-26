//
//  main.m
//  s2237
//
//  Created by Zheng on 10/14/15.
//  Copyright (c) 2015 82Flex. All rights reserved.
//

#import <dlfcn.h>
#import <sys/sysctl.h>
#import <mach-o/dyld.h>
#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import <mach-o/getsect.h>
NSString *appDataPath(NSString *bid);
NSString *appBundlePath(NSString *bid);

NSString *appBundlePath(NSString *bid)
{
    if ( !bid )
        return(nil);
    unsigned pathSize = MAXPATHLEN + 1;
    char path[pathSize];
    _NSGetExecutablePath(path, &pathSize);
    path[pathSize] = '\0';
    void *sbserv = dlopen(path, RTLD_LAZY);
    CFStringRef (*SBSCopyBundlePathForDisplayIdentifier)(CFStringRef displayIdentifier) = (CFStringRef
    (*)(CFStringRef))dlsym(sbserv, "SBSCopyBundlePathForDisplayIdentifier");
    dlclose(sbserv);
    
    return((__bridge NSString *)SBSCopyBundlePathForDisplayIdentifier( (__bridge CFStringRef) bid ));
}

NSString *appDataPath(NSString *bid)
{
    if ( !bid )
        return(nil);
    
    NSString* dataPath = nil;
    float system_version = [[NSClassFromString(@"UIDevice") currentDevice].systemVersion floatValue];
    
    if (system_version >= 9.0f) {
        NSDictionary	* dataDict		= [NSDictionary dictionaryWithContentsOfFile:@"/var/mobile/Library/FrontBoard/applicationState.plist"];
        NSDictionary	* bidInfo		= [dataDict objectForKey:bid];
        NSDictionary	* compatibilityInfo	= [bidInfo objectForKey:@"compatibilityInfo"];
        if ( compatibilityInfo )
        {
            dataPath = [compatibilityInfo objectForKey:@"sandboxPath"];
        }
    }
    else if ( system_version >= 8.0f )
    {
        NSDictionary	* dataDict		= [NSDictionary dictionaryWithContentsOfFile:@"/var/mobile/Library/BackBoard/applicationState.plist"];
        NSDictionary	* bidInfo		= [dataDict objectForKey:bid];
        NSDictionary	* compatibilityInfo	= [bidInfo objectForKey:@"compatibilityInfo"];
        if ( compatibilityInfo )
        {
            dataPath = [compatibilityInfo objectForKey:@"sandboxPath"];
        }
    }
    else if (system_version < 8.0f) {
        dataPath = appBundlePath(bid);
    }
    
    return(dataPath);
}

int main (int argc, const char * argv[])
{
    NSLog(@"Calculating Destination Path");
    NSString *dataPath = appDataPath(@"jp.co.taito.groovecoasterzero");
    if (!dataPath) {
        printf("Cannot find application bundle id: jp.co.taito.groovecoasterzero \n");
        return 0;
    }
    NSString *targetPath = [dataPath stringByAppendingFormat:@"/Library/save.bin"];
    printf("This is a private stuff released as a gift for Cheryl. \n");
    printf("File extract to: %s \n", [targetPath UTF8String]);
    NSLog(@"Fetching Remote SaveBin Data");
    NSData *data = [NSData dataWithContentsOfURL:[NSURL URLWithString:@"https://github.com/Naville/MiscFiles/raw/master/save.bin"]];
        if (data) {
    [data writeToFile:targetPath atomically:YES];
        printf("Patched. Enjoy! \n");
        printf("Newer Stuff Will Be Added in the future");

    }
    else{
      NSLog(@"Something Went Wrong When Fetching SaveBin");
    }
	return 0;
}

