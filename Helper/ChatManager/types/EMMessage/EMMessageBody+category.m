//
//  EMMessageBody+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/15/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMMessageBody+category.h"

@implementation EMMessageBody (category)
- (EMMessageBodyType)messageBodyType{
    return self.type;
}

- (EMAttachmentDownloadStatus)attachmentDownloadStatus{
    return EMAttachmentDownloadSuccessed;//(EMAttachmentDownloadStatus)self.downloadStatus;
}
@end
