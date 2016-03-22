//
//  EMChatroom+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMChatroom+category.h"

@implementation EMChatroom (category)

- (NSString *)chatroomSubject{
    return self.subject;
}
- (NSString *)chatroomDescription{
    return self.description;
}
- (NSUInteger)chatroomMaxOccupantsCount{
    return self.maxOccupantsCount;
}
@end
