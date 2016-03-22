//
//  EChatManager+Chat.m
//  SDKChange
//
//  Created by 杜洁鹏 on 3/8/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManager+Chat.h"

@implementation EChatManager (Chat)

- (EMMessage *)asyncSendMessage:(EMMessage *)message
                       progress:(id<IEMChatProgressDelegate>)aProgress{
    [_delegates willSendMessage:message error:nil];
    [[EMClient sharedClient].chatManager asyncSendMessage:message
                                                 progress:^(int progress)
     {
         EMMessageBody *body = message.body;
         switch (body.type) {
             case EMMessageBodyTypeImage:
             case EMMessageBodyTypeFile:
             case EMMessageBodyTypeVideo:
             case EMMessageBodyTypeVoice:
                 [aProgress setProgress:(progress / 100)];
             default:
                 break;
         }
     } completion:^(EMMessage *message, EMError *error) {
         EMMessageBody *body = message.body;
         if (!error) {
             switch (body.type) {
                 case EMMessageBodyTypeImage:
                 case EMMessageBodyTypeFile:
                 case EMMessageBodyTypeVideo:
                 case EMMessageBodyTypeVoice:
                     [aProgress setProgress:1.0];
                 default:
                     break;
             }
         }
         
        [_delegates didSendMessage:message error:error];
     }];
    return message;
}

-(void)didReceiveMessages:(NSArray *)aMessages{
    for (EMMessage *msg in aMessages) {
        [_delegates didReceiveMessage:msg];
    }
}

#pragma mark - message ack
- (void)sendReadAckForMessage:(EMMessage *)message{
    [[EMClient sharedClient].chatManager asyncSendReadAckForMessage:message];
}

#pragma mark - resend message
- (EMMessage *)asyncResendMessage:(EMMessage *)message
                         progress:(id<IEMChatProgressDelegate>)aProgress{
    [_delegates willSendMessage:message error:nil];
    [[EMClient sharedClient].chatManager asyncResendMessage:message
                                                 progress:^(int progress)
     {
         EMMessageBody *body = message.body;
         switch (body.type) {
             case EMMessageBodyTypeImage:
             case EMMessageBodyTypeFile:
             case EMMessageBodyTypeVideo:
             case EMMessageBodyTypeVoice:
                 [aProgress setProgress:(progress / 100)];
             default:
                 break;
         }
     } completion:^(EMMessage *message, EMError *error) {
         EMMessageBody *body = message.body;
         if (!error) {
             switch (body.type) {
                 case EMMessageBodyTypeImage:
                 case EMMessageBodyTypeFile:
                 case EMMessageBodyTypeVideo:
                 case EMMessageBodyTypeVoice:
                     [aProgress setProgress:1.0];
                 default:
                     break;
             }
         }
         [_delegates didSendMessage:message error:error];
     }];
    
    return message;
}

-(void)didReceiveHasReadAcks:(NSArray *)aMessages {
    
    for (EMMessage *msg in aMessages) {
        EMReceipt *receipt = [[EMReceipt alloc] init];
        receipt.from = msg.from;
        receipt.to = msg.to;
        receipt.chatId = msg.messageId;
        [_delegates didReceiveHasReadResponse:receipt];
    }
}

- (BOOL)insertMessageToDB:(EMMessage *)message append2Chat:(BOOL)append2Chat {
    
    BOOL ret =[[EMClient sharedClient].chatManager importMessages:@[message]];
    if (ret && append2Chat) {
        [_delegates didUpdateConversationList:nil];
    }
    return ret;
}
@end
