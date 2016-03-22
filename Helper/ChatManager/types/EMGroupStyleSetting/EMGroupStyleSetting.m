//
//  EMGroupStyleSetting.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/15/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMGroupStyleSetting.h"

@implementation EMGroupStyleSetting
@dynamic groupMaxUsersCount;
@dynamic groupStyle;
- (NSInteger)groupMaxUsersCount{
    return self.maxUsersCount;
}

- (void)setGroupMaxUsersCount:(NSInteger)groupMaxUsersCount{
    self.maxUsersCount = groupMaxUsersCount;
}

- (EMGroupStyle)groupStyle
{
    return self.style;
}

- (void)setGroupStyle:(EMGroupStyle)groupStyle{
    self.style = groupStyle;
}

@end
