//
//  EMGroup+category.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMGroup.h"

@interface EMGroup (category)
@property (nonatomic) EMGroupStyleSetting *groupSetting;
- (NSString *)groupSubject;
- (NSString *)groupDescription;
- (NSInteger)groupOccupantsCount;


@end
