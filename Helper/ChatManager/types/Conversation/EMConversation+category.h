//
//  EMConversation+category.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMConversation.h"

@interface EMConversation (category)
@property (nonatomic, strong) NSString *chatter;

- (void)removeMessage:(EMMessage *)message;

- (void)removeAllMessages;

- (EMConversationType)conversationType;

- (void)markAllMessagesAsRead:(BOOL)isRead;

- (void)markMessageWithId:(NSString *)messageId asRead:(BOOL)isread;
@end
