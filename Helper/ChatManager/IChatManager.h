//
//  IChatManager.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/4/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "IChatManagerGroup.h"
#import "IChatManagerLogin.h"
#import "IChatManagerChatroom.h"
#import "IChatManagerConversation.h"
#import "IChatManagerBuddy.h"
#import "IChatManagerPushNotification.h"
#import "IChatManagerChat.h"
#import "IChatManagerSettingOptions.h"
#import "IChatManagerUtil.h"
@protocol IChatManager
<
    IChatManagerChat,
    IChatManagerGroup,
    IChatManagerLogin,
    IChatManagerChatroom,
    IChatManagerConversation,
    IChatManagerUtil,
    IChatManagerBuddy,
    IChatManagerPushNotification,
    IChatManagerConversation,
    IChatManagerSettingOptions
>

@end
