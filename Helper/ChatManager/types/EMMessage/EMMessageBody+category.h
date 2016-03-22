//
//  EMMessageBody+category.h
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/15/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMMessageBody.h"

@interface EMMessageBody (category)
- (EMMessageBodyType)messageBodyType;
- (EMAttachmentDownloadStatus)attachmentDownloadStatus;
@end
