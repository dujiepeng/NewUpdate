//
//  EMConversation+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMConversation+category.h"

@implementation EMConversation (category)
- (NSString *)chatter{
    return self.conversationId;
}

- (void)removeMessage:(EMMessage *)message{
    [self deleteMessageWithId:message.messageId];
}

- (void)removeAllMessages{
    [self deleteAllMessages];
}

- (EMConversationType)conversationType{
    return self.type;
}

- (void)markAllMessagesAsRead:(BOOL)isRead {
    if (!isRead) {
        return;
    } else {
        [self markAllMessagesAsRead];
    }
}

- (void)markMessageWithId:(NSString *)messageId asRead:(BOOL)isread {
    if (!isread) {
        return;
    } else {
        [self markMessageAsReadWithId:messageId];
    }
}

@end
