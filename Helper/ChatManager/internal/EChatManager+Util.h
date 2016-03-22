//
//  EChatManager+Util.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManagerBase.h"
#import "IChatManagerUtil.h"

@interface EChatManager (Util) <IChatManagerUtil>
#pragma mark - fetch message
/*!
 @method
 @brief 获取聊天对象对应的远程服务器上的文件, 同步方法
 @discussion 如果此对象所在的消息对象是被加密的,下载下来的对象会被自动解密
 @param aMessage 聊天对象
 @param progress 进度条
 @param pError 错误信息
 */
- (EMMessage *)fetchMessage:(EMMessage *)aMessage
                   progress:(id<IEMChatProgressDelegate>)progress
                      error:(EMError **)pError;

/*!
 @method
 @brief 获取聊天对象对应的远程服务器上的文件, 异步方法
 @discussion 如果此对象所在的消息对象是被加密的,下载下来的对象会被自动解密.下载完成后,didFetchMessage:error:回调会被触发
 @param aMessage 聊天对象
 @param progress 进度条
 */
- (void)asyncFetchMessage:(EMMessage *)aMessage
                 progress:(id<IEMChatProgressDelegate>)progress;

/*!
 @method
 @brief 获取聊天对象对应的远程服务器上的文件, 异步方法
 @discussion 如果此对象所在的消息对象是被加密的,下载下来的对象会被自动解密
 @param aMessage     聊天对象
 @param progress     进度条
 @param completion   函数执行完成后的回调
 @param aQueue       回调函数所在的线程
 */
- (void)asyncFetchMessage:(EMMessage *)aMessage
                 progress:(id<IEMChatProgressDelegate>)progress
               completion:(void (^)(EMMessage *aMessage,
                                    EMError *error))completion
                  onQueue:(dispatch_queue_t)aQueue;
@end
