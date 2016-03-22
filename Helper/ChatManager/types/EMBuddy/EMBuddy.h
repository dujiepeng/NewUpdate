//
//  EMBuddy.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/15/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EMBuddy : NSObject
@property (nonatomic ,copy) NSString *username;
/*!
 @method
 @brief 通过username初始化一个EMBuddy对象
 @param username 好友的username
 @discussion
 @result EMBuddy实例对象
 */
+ (instancetype)buddyWithUsername:(NSString *)username;
@end
