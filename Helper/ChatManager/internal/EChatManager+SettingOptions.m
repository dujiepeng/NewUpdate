//
//  EChatManager+SettingOptions.m
//  SDKChange
//
//  Created by 杜洁鹏 on 3/8/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManager+SettingOptions.h"
#import "EChatManager+PushNotification.h"

@interface EChatManager ()
@end

@implementation EChatManager (SettingOptions) 
@dynamic apnsNickname;
@dynamic isAutoDeleteConversationWhenLeaveGroup;
@dynamic isAutoLoginEnabled;
@dynamic isAutoFetchBuddyList;


- (NSString *)apnsNickname
{
    return [EMClient sharedClient].pushOptions.nickname;
}

- (BOOL)isAutoDeleteConversationWhenLeaveGroup{
    return  [EMClient sharedClient].options.isDeleteMessagesWhenExitGroup;
}

-(void)setIsAutoDeleteConversationWhenLeaveGroup:(BOOL)isAutoDeleteConversationWhenLeaveGroup{
    [EMClient sharedClient].options.isDeleteMessagesWhenExitGroup = isAutoDeleteConversationWhenLeaveGroup;
}

-(void)setApnsNickname:(NSString *)apnsNickname{
    EMPushOptions *option = [EMClient sharedClient].pushOptions;
    [self asyncUpdatePushOptions:option];
}

- (BOOL)isAutoLoginEnabled{
    return [[EMClient sharedClient] isAutoLogin];
}

-(void)setIsAutoLoginEnabled:(BOOL)isAutoLoginEnabled{
    EMOptions *option = [EMClient sharedClient].options;
    option.isAutoLogin = isAutoLoginEnabled;
}

- (void)disableAutoLogin{
    EMOptions *option = [EMClient sharedClient].options;
    option.isAutoLogin = NO;
}

- (void)enableAutoLogin{
    EMOptions *option = [EMClient sharedClient].options;
    option.isAutoLogin = YES;
}

- (BOOL)isAutoFetchBuddyList{
    return _isAutoFetchBuddyList;
}

-(void)setIsAutoFetchBuddyList:(BOOL)isAutoFetchBuddyList{
    _isAutoFetchBuddyList = isAutoFetchBuddyList;
}

-(void)enableAutoFetchBuddyList{
    _isAutoFetchBuddyList = YES;
}

-(void)disableAutoFetchBuddyList{
    _isAutoFetchBuddyList = NO;
}

- (void)enableDeliveryNotification{
    EMOptions *option = [EMClient sharedClient].options;
    option.enableDeliveryAck = YES;
}

- (void)disableDeliveryNotification{
    EMOptions *option = [EMClient sharedClient].options;
    option.enableDeliveryAck = NO;
}

- (void)enableAutoDeleteConversatonWhenLeaveGroup{
    EMOptions *option = [EMClient sharedClient].options;
    option.isDeleteMessagesWhenExitGroup = YES;
}
- (void)disableAutoDeleteConversatonWhenLeaveGroup{
    EMOptions *option = [EMClient sharedClient].options;
    option.isDeleteMessagesWhenExitGroup = NO;
}
@end
