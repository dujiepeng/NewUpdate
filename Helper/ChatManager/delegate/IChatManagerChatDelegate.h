//
//  IChatManagerChatDelegate.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/8/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol IChatManagerChatDelegate <EMChatManagerDelegate>

/*!
 @method
 @brief 将要发送消息时的回调
 @discussion
 @param message      将要发送的消息对象
 @param error        错误信息
 @result
 */
- (void)willSendMessage:(EMMessage *)message
                  error:(EMError *)error;
/*!
 @method
 @brief 发送消息后的回调
 @discussion
 @param message      已发送的消息对象
 @param error        错误信息
 @result
 */
- (void)didSendMessage:(EMMessage *)message
                 error:(EMError *)error;

/*!
 @method
 @brief 收到消息时的回调
 @param message      消息对象
 @discussion 当EMConversation对象的enableReceiveMessage属性为YES时, 会触发此回调
 针对有附件的消息, 此时附件还未被下载.
 附件下载过程中的进度回调请参考didFetchingMessageAttachments:progress:,
 下载完所有附件后, 回调didMessageAttachmentsStatusChanged:error:会被触发
 */
- (void)didReceiveMessage:(EMMessage *)message;


- (void)didReceiveHasReadResponse:(EMReceipt*)receipt;
@end
