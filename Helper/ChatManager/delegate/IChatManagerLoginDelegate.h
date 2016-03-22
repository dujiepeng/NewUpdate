//
//  IChatManagerLoginDelegate.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/5/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>


@protocol IChatManagerLoginDelegate <EMClientDelegate>

@optional

- (void)didLoginWithInfo:(NSDictionary *)loginInfo
                   error:(EMError *)error;


- (void)didRegisterNewAccount:(NSString *)username
                     password:(NSString *)password
                        error:(EMError *)error;

/*!
 @method
 @brief 用户注销后的回调
 @discussion
 @param error        错误信息
 @result
 */
- (void)didLogoffWithError:(EMError *)error;

/*!
 @method
 @brief 用户自动登录完成后的回调
 @discussion
 @param loginInfo 登录的用户信息
 @param error     错误信息
 @result
 */
- (void)didAutoLoginWithInfo:(NSDictionary *)loginInfo error:(EMError *)error;

/*!
 @method
 @brief 当前登录账号在其它设备登录时的通知回调
 @discussion
 @result
 */
- (void)didLoginFromOtherDevice;

/*!
 @method
 @brief 当前登录账号已经被从服务器端删除
 @discussion
 @result
 */
- (void)didRemovedFromServer;
@end
