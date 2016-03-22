//
//  EChatManager+SettingOptions.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/8/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManagerBase.h"
#import "IChatManagerSettingOptions.h"
@interface EChatManager (SettingOptions) <IChatManagerSettingOptions>
/*!
 @property
 @brief 当前登陆用户的昵称, 默认为用户名。
 因为环信只有用户ID, 并没有用户信息, 所以在后台发送推送的时候, 并不能知道用户昵称, 导致在推送过来的消息里, 用户名字为用户ID. 为解决此类问题, 环信多添加了一个可以由用户设置的推送昵称的属性，此方法是同步方法，会阻塞调用线程.
 */
@property (strong, nonatomic) NSString *apnsNickname;

@property (nonatomic) BOOL isAutoDeleteConversationWhenLeaveGroup;

/*!
 @property
 @brief 是否已经开启自动登录
 @discussion
 */
@property (nonatomic) BOOL isAutoLoginEnabled;

/*!
 @property
 @brief 开启自动登录功能
 @discussion
 设置后，当再次app启动时，会自动登录上次登录的账号，本设置需要在登录成功后设置才起作用。
 */
- (void)enableAutoLogin;

/*!
 @property
 @brief 关闭自动登录功能
 @discussion
 */
- (void)disableAutoLogin;

/*!
 @property
 @brief 自动获取好友列表(包括好友黑名单，Default is NO)
 @discussion
 设置为YES时, 登录成功后会自动调用 asyncFetchBuddyList 方法
 */
@property (nonatomic) BOOL isAutoFetchBuddyList;

/*!
 @property
 @brief 开启自动获取好友列表
 @discussion
 登录成功后会自动调用 asyncFetchBuddyList 方法
 */
- (void)enableAutoFetchBuddyList;

/*!
 @property
 @brief 关闭自动获取好友列表
 @discussion
 */
- (void)disableAutoFetchBuddyList;

/*!
 @property
 @brief 开启消息送达通知(默认是不开启的)
 @discussion
 */
- (void)enableDeliveryNotification;

/*!
 @property
 @brief 关闭消息送达通知 (默认是不开启的)
 @discussion
 */
- (void)disableDeliveryNotification;

/*!
 @property
 @brief 开启离开群组后自动删除对应会话
 @discussion
 当开启后, 当离开该群时会自动删除该群对应的会话
 */
- (void)enableAutoDeleteConversatonWhenLeaveGroup;

/*!
 @property
 @brief 关闭离开群组后自动删除对应会话
 @discussion
 当关闭后, 当离开该群时不会自动删除该群对应的会话
 */
- (void)disableAutoDeleteConversatonWhenLeaveGroup;
@end
