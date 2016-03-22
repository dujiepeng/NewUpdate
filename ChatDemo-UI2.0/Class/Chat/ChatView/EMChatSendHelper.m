//
//  EMChatSendHelper.m
//  ChatDemo-UI2.0
//
//  Created by EaseMob on 16/3/21.
//  Copyright © 2016年 EaseMob. All rights reserved.
//

#import "EMChatSendHelper.h"
#import "ConvertToCommonEmoticonsHelper.h"

@implementation EMChatSendHelper

+ (EMMessage *)sendTextMessageWithString:(NSString *)text toUser:(NSString *)user messageType:(EMMessageType)type ext:(NSDictionary *)ext {
    
    // 表情映射。
    NSString *willSendText = [ConvertToCommonEmoticonsHelper convertToCommonEmoticons:text];
    EMTextMessageBody *body = [[EMTextMessageBody alloc] initWithText:willSendText];
    
    return [self sendMessageTo:user messageBody:body messageType:type ext:ext];
    
}

+ (EMMessage *)sendMessageTo:(NSString *)username
                 messageBody:(EMMessageBody *)body
                 messageType:(EMMessageType)type
                         ext:(NSDictionary *)ext
{
    EMMessage *message = [[EMMessage alloc] initWithConversationID:username from:[self loginUser] to:username body:body ext:ext];
    message.messageType = type;
    message.ext = ext;
    return message;
}

+(NSString *)loginUser {
    return [[[EaseMob sharedInstance].chatManager loginInfo] objectForKey:@"username"];
}
@end
