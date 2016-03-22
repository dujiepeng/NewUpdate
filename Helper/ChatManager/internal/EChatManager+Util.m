//
//  EChatManager+Util.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/10/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManager+Util.h"

@implementation EChatManager (Util)
- (EMMessage *)fetchMessage:(EMMessage *)aMessage
                   progress:(id<IEMChatProgressDelegate>)aProgress
                      error:(EMError **)pError{
    __block EMMessage *ret = nil;
    [[EMClient sharedClient].chatManager asyncDownloadMessageAttachments:aMessage
                                                                progress:^(int progress)
     {
         [aProgress setProgress:(progress / 100)];
     } completion:^(EMMessage *message, EMError *error) {
         ret = message;
         if (!error) {
             [aProgress setProgress:1];
         }
         if (pError) {
             *pError = error;
         }
     }];
    
    return aMessage;
}

- (void)asyncFetchMessage:(EMMessage *)aMessage
                 progress:(id<IEMChatProgressDelegate>)aProgress{
    [[EMClient sharedClient].chatManager asyncDownloadMessageAttachments:aMessage progress:^(int progress) {
        if (aProgress) {
            [aProgress setProgress:(progress / 100)];
        }
    } completion:^(EMMessage *message, EMError *error) {
        if (aProgress && !error) {
            [aProgress setProgress:1];
        }
        [_delegates didFetchMessage:message error:error];
    }];
}

- (void)asyncFetchMessage:(EMMessage *)aMessage
                 progress:(id<IEMChatProgressDelegate>)progress
               completion:(void (^)(EMMessage *aMessage,
                                    EMError *error))completion
                  onQueue:(dispatch_queue_t)aQueue {
    dispatch_async(dispatch_get_global_queue(DISPATCH_QUEUE_PRIORITY_DEFAULT, 0), ^(){
        EMError *error = nil;
        EMMessage *ret = nil;
        ret = [self fetchMessage:aMessage
                        progress:progress
                           error:&error];
        if (completion) {
            dispatch_queue_t queue = aQueue;
            if (!queue) {
                queue = dispatch_get_main_queue();
            }
            dispatch_async(queue, ^(){
                completion(ret, error);
            });
        }
    });
}
@end
