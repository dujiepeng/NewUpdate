//
//  EMChatManagerDefs.h
//  SDKChange
//
//  Created by 杜洁鹏 on 3/7/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMSDK.h"

#ifndef EMChatManagerDefs_h
#define EMChatManagerDefs_h

#define EM_DEPRECATED_IOS(_easemobIntro, _easemobDep, ...) __attribute__((deprecated("")))

#define kSDKConfigEnableConsoleLogger       @"Logger"
#define kSDKUsername                        @"kSDKUsername"
#define kSDKPassword                        @"kSDKPassword"
#define kSDKToken                           @"kSDKToken"


/*!
 @enum
 @brief 聊天类型
 @constant eMessageBodyType_Text 文本类型
 @constant eMessageBodyType_Image 图片类型
 @constant eMessageBodyType_Video 视频类型
 @constant eMessageBodyType_Location 位置类型
 @constant eMessageBodyType_Voice 语音类型
 @constant eMessageBodyType_File 文件类型
 @constant eMessageBodyType_Command 命令类型
 */
typedef NS_ENUM(NSInteger, MessageBodyType) {
    eMessageBodyType_Text               = EMMessageBodyTypeText,
    eMessageBodyType_Image              = EMMessageBodyTypeImage,
    eMessageBodyType_Video              = EMMessageBodyTypeVideo,
    eMessageBodyType_Location           = EMMessageBodyTypeLocation,
    eMessageBodyType_Voice              = EMMessageBodyTypeVoice,
    eMessageBodyType_File               = EMMessageBodyTypeFile,
    eMessageBodyType_Command            = EMMessageBodyTypeCmd
};

/*!
 @enum
 @brief 聊天消息发送状态
 @constant eMessageDeliveryState_Pending 待发送
 @constant eMessageDeliveryState_Delivering 正在发送
 @constant eMessageDeliveryState_Delivered 已发送, 成功
 @constant eMessageDeliveryState_Failure 已发送, 失败
 */
typedef NS_ENUM(NSInteger, MessageDeliveryState) {
    eMessageDeliveryState_Pending               = EMMessageStatusPending,
    eMessageDeliveryState_Delivering            = EMMessageStatusDelivering,
    eMessageDeliveryState_Delivered             = EMMessageStatusSuccessed,
    eMessageDeliveryState_Failure               = EMMessageStatusFailed
};

/*!
 @brief 消息类型
 @constant eMessageTypeChat            单聊消息
 @constant eMessageTypeGroupChat       群聊消息
 @constant eMessageTypeChatRoom        聊天室消息
 */
typedef NS_ENUM(NSInteger, EMMessageType){
    eMessageTypeChat                            = EMChatTypeChat,
    eMessageTypeGroupChat                       = EMChatTypeGroupChat,
    eMessageTypeChatRoom                        = EMChatTypeChatRoom
};



/*!
 @enum
 @brief 推送消息的定制信息
 @constant ePushNotificationDisplayStyle_simpleBanner   简单显示一条"您有一条新消息"的文本
 @constant ePushNotificationDisplayStyle_messageSummary 会显示一条具有消息内容的推送消息
 */
typedef NS_ENUM(NSInteger, EMPushNotificationDisplayStyle) {
    ePushNotificationDisplayStyle_simpleBanner          = EMPushDisplayStyleSimpleBanner,
    ePushNotificationDisplayStyle_messageSummary        = EMPushDisplayStyleMessageSummary,
};

/*!
 @enum
 @brief 推送消息免打扰设置的状态
 @constant ePushNotificationNoDisturbStatusDay     全天免打扰
 @constant ePushNotificationNoDisturbStatusCustom  自定义时间段免打扰
 @constant ePushNotificationNoDisturbStatusClose   关闭免打扰模式
 */
typedef NS_ENUM(NSInteger, EMPushNotificationNoDisturbStatus) {
    ePushNotificationNoDisturbStatusDay                 = EMPushNoDisturbStatusDay,
    ePushNotificationNoDisturbStatusCustom              = EMPushNoDisturbStatusCustom,
    ePushNotificationNoDisturbStatusClose               = EMPushNoDisturbStatusClose,
};

typedef NS_ENUM(NSUInteger, EMAttachmentDownloadStatus) {
    EMAttachmentDownloading                             = EMDownloadStatusDownloading,
    EMAttachmentDownloadSuccessed                       = EMDownloadStatusSuccessed,
    EMAttachmentDownloadFailure                         = EMDownloadStatusFailed,
    EMAttachmentNotStarted                              = EMDownloadStatusPending,
} ;

#endif /* EMChatManagerDefs_h */
