//
//  EMMessage+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/14/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMMessage+category.h"

@implementation EMMessage (category)

- (NSString *)conversationChatter{
    return self.conversationId;
}

-(void)setConversationChatter:(NSString *)conversationChatter{
    self.conversationId = conversationChatter;
}

- (void)setDeliveryState:(EMMessageStatus)deliveryState{
    self.status = deliveryState;
}

- (EMMessageStatus)deliveryState{
    return self.status;
}

- (EMChatType)messageType{
    return self.chatType;
}

- (void)setMessageType:(EMChatType)messageType{
    self.chatType = messageType;
}

- (NSString *)groupSenderName{
    return self.from;
}

- (void)updateMessageExtToDB {
    [[EMClient sharedClient].chatManager updateMessage:self];
}
@end
