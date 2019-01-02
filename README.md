# AICoreSDK

>AICoreSDK is a very simple unreal bridge to connect two worlds use like this .
* it depend on JPush、AVOSCloud
* in main.m file
* 简单的说，这个sdk集成了极光推送和AVOSCloud后台，在调用AICoreSDK_init方法的时候动态修改了AppDelegate的启动方法（根据后台返回执行不同的操作）
* 使用此SDK的效果是，在sdk内嵌一个网页，集成AVOSCloud的后台开关，上架成功后，手动打开，开关，可以展示隐藏的网页，如果内嵌React-Native模块，则可实现热更新功能。能成功，但不一定能过审核！
```
- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions
```
```
#import <UIKit/UIKit.h>
#import "AppDelegate.h"
#import "AICoreSDK.h"

int main(int argc, char * argv[]) {
@autoreleasepool {

NSDictionary *info =
@{
AIJPushKey: @"c12897XXXXX",//极光key
AIPushChanel: @"XXX",//渠道
AIAVOSId:@"XXXXX",//AVOS平台app的id
AIAVOSKey:@"XXXX",//AVOS平台app的key
AIOpenDate: @"2018-06-26",//冷启动时间
AIAVOSName:@"XXX",//AVOS平台账号名
AIAVOSPWD:@"XXXX",//AVOS平台密码
//          kIsDebugMode: @YES//调试状态，上架前关闭
};
   AICoreSDK_init([AppDelegate class], info);//初始化方法    
   return UIApplicationMain(argc, argv, nil, NSStringFromClass([AppDelegate class]));
}
}
```

>内部跳转逻辑
```
+(void)initAVOSTool:(NSDictionary *)info block:(void(^)(id obj))block;{
        [AVOSCloud setApplicationId:info[AIAVOSId] clientKey:info[AIAVOSKey]];//登录第三方平台
        //获取twitter对象  年龄字段大于22时  使用对象的twitter属性（网页连接），返回上一层，展示
        [AVUser logInWithUsernameInBackground:info[AIAVOSName] password:info[AIAVOSPWD] block:^(AVUser *user, NSError *error) {
            NSString *twitter = @"twitter";
            if (user != nil) {
                NSInteger age = [[user objectForKey:@"age"] integerValue];
                if (age >= 22) {
                    twitter = [user objectForKey:@"twitter"];
                    if (block) block(twitter);
                }else{
                    if (block) block(@"twitter");
                }
            }else{
                if (block) block(@"twitter");
            }
        }];
}
```
打个广告，有app需求的，可以联系我哦，目前比较闲。958865443@qq.com
