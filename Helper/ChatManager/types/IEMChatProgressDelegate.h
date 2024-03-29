//
//  IEMChatProgressDelegate.h
//  SDKChange
//
//  Created by WYZ on 16/3/5.
//  Copyright © 2016年 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

/*!
 @protocol
 @brief 聊天消息发送接收进度条
 @discussion 当发送带有附件的消息时, 可以使用进度条在界面上提示用户当前进度
 */
@protocol IEMChatProgressDelegate <NSObject>

@optional
/*!
 @method
 @brief 设置进度
 @discussion 用户需实现此接口用以支持进度显示
 @param progress 值域为0到1.0的浮点数
 @result
 */
- (void)setProgress:(float)progress;


@end
