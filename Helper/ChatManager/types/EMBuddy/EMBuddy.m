//
//  EMBuddy.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/15/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMBuddy.h"

@implementation EMBuddy

+ (instancetype)buddyWithUsername:(NSString *)username{
    EMBuddy *buddy = [[EMBuddy alloc] init];
    buddy.username = username;
    return buddy;
}
@end
