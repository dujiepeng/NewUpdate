//
//  EMChatSendHelper.h
//  ChatDemo-UI2.0
//
//  Created by EaseMob on 16/3/21.
//  Copyright © 2016年 EaseMob. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMChatSendHelper : NSObject


+ (EMMessage *)sendTextMessageWithString:(NSString *)text
                                  toUser:(NSString *)user
                             messageType:(EMMessageType)type
                                     ext:(NSDictionary *)ext;

@end
