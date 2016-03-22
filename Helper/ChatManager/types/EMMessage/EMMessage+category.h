//
//  EMMessage+category.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/14/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMMessage.h"
@interface EMMessage (category)
@property (nonatomic) EMMessageStatus deliveryState;
@property (nonatomic) EMChatType messageType;
@property (nonatomic, strong) NSString *conversationChatter;
- (NSString *)groupSenderName;
- (void)updateMessageExtToDB;
@end
