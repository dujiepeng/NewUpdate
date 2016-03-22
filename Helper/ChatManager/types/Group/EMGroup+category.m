//
//  EMGroup+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMGroup+category.h"

@implementation EMGroup (category)
- (NSString *)groupSubject{
    return self.subject;
}

- (NSString *)groupDescription{
    return self.description;
}

- (NSInteger)groupOccupantsCount{
    return self.occupantsCount;
}

- (EMGroupStyleSetting *)groupSetting{
    return (EMGroupStyleSetting *)self.setting;
}

@end
