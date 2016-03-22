//
//  IChatManagerUtilDelegate.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "EMHeaders.h"
@protocol IChatManagerUtilDelegate <NSObject>
@optional
/*!
 @method
 @brief 收取消息体对象后的回调
 @discussion 当获取完消息体对象后,此回调会被触发;如果此消息体所在的消息对象在服务器端已被加密,那么下载完成后会自动进行解压
 @param aMessage 要获取的消息对象
 @param error        错误信息
 */
- (void)didFetchMessage:(EMMessage *)aMessage error:(EMError *)error;

@end
