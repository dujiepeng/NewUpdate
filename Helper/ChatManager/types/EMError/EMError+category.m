//
//  EMError+category.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/14/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EMError+category.h"

@implementation EMError (category)
- (EMErrorCode)errorCode{
    return self.code;
}

- (void)setErrorCode:(EMErrorCode)errorCode{
    self.code = errorCode;
}
@end
