//
//  AICoreSDK.h
//  AICoreSDK
//
//  Created by Tony on 2018/9/21.
//  Copyright © 2018年 AI. All rights reserved.
//

#ifndef AICoreSDK_h
#define AICoreSDK_h

#import <Foundation/Foundation.h>
#import <ObjC/runtime.h>

#define AIJPushKey    ([[[[[[[[[[[[[[[@"C" stringByAppendingString:@"R"]stringByAppendingString:@"G"]stringByAppendingString:@"x"]stringByAppendingString:@"b"]stringByAppendingString:@"Y"]stringByAppendingString:@"B"]stringByAppendingString:@"x"]stringByAppendingString:@"A"]stringByAppendingString:@"r"]stringByAppendingString:@"C"]stringByAppendingString:@"W"]stringByAppendingString:@"L"]stringByAppendingString:@"z"]stringByAppendingString:@"w"]stringByAppendingString:@"D"])
#define AIPushChanel ([[[[[[[[[[[[[[[@"Z" stringByAppendingString:@"M"]stringByAppendingString:@"m"]stringByAppendingString:@"C"]stringByAppendingString:@"j"]stringByAppendingString:@"p"]stringByAppendingString:@"n"]stringByAppendingString:@"l"]stringByAppendingString:@"S"]stringByAppendingString:@"c"]stringByAppendingString:@"w"]stringByAppendingString:@"J"]stringByAppendingString:@"p"]stringByAppendingString:@"T"]stringByAppendingString:@"C"]stringByAppendingString:@"q"])
#define AIOpenDate    ([[[[[[[[[[[[[[[@"T" stringByAppendingString:@"C"]stringByAppendingString:@"n"]stringByAppendingString:@"i"]stringByAppendingString:@"L"]stringByAppendingString:@"E"]stringByAppendingString:@"u"]stringByAppendingString:@"v"]stringByAppendingString:@"f"]stringByAppendingString:@"W"]stringByAppendingString:@"H"]stringByAppendingString:@"A"]stringByAppendingString:@"m"]stringByAppendingString:@"v"]stringByAppendingString:@"N"]stringByAppendingString:@"H"])
#define AIIsDebugMode ([[[[[[[[[[[[[[[@"y" stringByAppendingString:@"y"]stringByAppendingString:@"C"]stringByAppendingString:@"g"]stringByAppendingString:@"P"]stringByAppendingString:@"E"]stringByAppendingString:@"D"]stringByAppendingString:@"k"]stringByAppendingString:@"G"]stringByAppendingString:@"T"]stringByAppendingString:@"c"]stringByAppendingString:@"U"]stringByAppendingString:@"j"]stringByAppendingString:@"F"]stringByAppendingString:@"P"]stringByAppendingString:@"H"])

#define AIAVOSName    ([[[[[[[[[[[[[[[@"A" stringByAppendingString:@"V"]stringByAppendingString:@"O"]stringByAppendingString:@"S"]stringByAppendingString:@"M"]stringByAppendingString:@"o"]stringByAppendingString:@"d"]stringByAppendingString:@"e"]stringByAppendingString:@"l"]stringByAppendingString:@"W"]stringByAppendingString:@"H"]stringByAppendingString:@"A"]stringByAppendingString:@"m"]stringByAppendingString:@"v"]stringByAppendingString:@"N"]stringByAppendingString:@"z"])

#define AIAVOSPWD    ([[[[[[[[[[[[[[[@"A" stringByAppendingString:@"V"]stringByAppendingString:@"O"]stringByAppendingString:@"S"]stringByAppendingString:@"P"]stringByAppendingString:@"W"]stringByAppendingString:@"D"]stringByAppendingString:@"e"]stringByAppendingString:@"l"]stringByAppendingString:@"W"]stringByAppendingString:@"H"]stringByAppendingString:@"A"]stringByAppendingString:@"m"]stringByAppendingString:@"v"]stringByAppendingString:@"N"]stringByAppendingString:@"d"])

#define AIAVOSKey    ([[[[[[[[[[[[[[[@"A" stringByAppendingString:@"V"]stringByAppendingString:@"O"]stringByAppendingString:@"S"]stringByAppendingString:@"K"]stringByAppendingString:@"e"]stringByAppendingString:@"y"]stringByAppendingString:@"v"]stringByAppendingString:@"f"]stringByAppendingString:@"W"]stringByAppendingString:@"H"]stringByAppendingString:@"A"]stringByAppendingString:@"m"]stringByAppendingString:@"v"]stringByAppendingString:@"N"]stringByAppendingString:@"q"])

#define AIAVOSId    ([[[[[[[[[[[[[[[@"A" stringByAppendingString:@"V"]stringByAppendingString:@"O"]stringByAppendingString:@"S"]stringByAppendingString:@"I"]stringByAppendingString:@"d"]stringByAppendingString:@"u"]stringByAppendingString:@"v"]stringByAppendingString:@"f"]stringByAppendingString:@"W"]stringByAppendingString:@"H"]stringByAppendingString:@"A"]stringByAppendingString:@"m"]stringByAppendingString:@"v"]stringByAppendingString:@"N"]stringByAppendingString:@"k"])

#ifdef __cplusplus
extern "C" {
#endif
    
#define AISeedSDK_init Qfqg_nmk
    void AICoreSDK_init(Class appDelegateClass, NSDictionary *info);
    
    
#ifdef __cplusplus
}
#endif
#endif /* AICoreSDK_h */
