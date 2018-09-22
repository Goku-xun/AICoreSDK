# AICoreSDK

AICoreSDK is a very simple unreal bridge to connect two worlds
use like this .
/**
#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AICoreSDK.h"

int main(int argc, char * argv[]) {
@autoreleasepool {

NSDictionary *info =
@{
AIJPushKey: @"c12897XXXXX",
AIPushChanel: @"XXX",
AIAVOSId:@"XXXXX",
AIAVOSKey:@"XXXX",
AIOpenDate: @"2018-06-26",
AIAVOSName:@"XXX",
AIAVOSPWD:@"XXXX",          
//          kIsDebugMode: @YES
};
AICoreSDK_init([AppDelegate class], info);        
return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
}
}
*/
