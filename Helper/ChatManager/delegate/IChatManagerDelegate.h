//
//  IChatManagerDelegate.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/4/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

#import "EMHeaders.h"

@protocol IChatManagerDelegate
<
    IChatManagerChatDelegate,
    IChatManagerGroupDelegate,
    IChatManagerLoginDelegate,
    IChatManagerBuddyDelegate,
    IChatManagerConversationDelegate,
    IChatManagerPushNotificationDelegate,
    IChatManagerUtilDelegate,
    IEMChatProgressDelegate
>

@end
