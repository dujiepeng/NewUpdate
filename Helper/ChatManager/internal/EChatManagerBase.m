//
//  EChatManagerBase.m
//  ChatDemo-UI2.0
//
//  Created by 杜洁鹏 on 3/4/16.
//  Copyright © 2016 杜洁鹏. All rights reserved.
//

#import "EChatManagerBase.h"

static NSObject *g_lock = nil;

@implementation EChatManager
@synthesize delegates = _delegates;

static EChatManager *_sharedInstance = nil;
+ (EChatManager *)sharedInstance
{
    if (_sharedInstance == nil) {
        @synchronized(self) {
            _sharedInstance = [[EChatManager alloc] init];
        }
    }
    
    return _sharedInstance;
}

- (id)init
{
    if (self = [super init])
    {
        g_lock = [[NSObject alloc] init];
        _delegates = (EMGCDMulticastDelegate<IChatManagerDelegate> *)[[EMGCDMulticastDelegate alloc] init];
    }
    return self;
}

- (void)addDelegate:(id<IChatManagerDelegate>)delegate delegateQueue:(dispatch_queue_t)queue
{
    @synchronized(g_lock){
        if (!queue) {
            queue = dispatch_get_main_queue();
        }
        [[EMClient sharedClient] addDelegate:delegate delegateQueue:queue];
        [[EMClient sharedClient].chatManager addDelegate:delegate delegateQueue:queue];
        [[EMClient sharedClient].contactManager addDelegate:delegate delegateQueue:queue];
        [[EMClient sharedClient].groupManager addDelegate:delegate delegateQueue:queue];
        [[EMClient sharedClient].roomManager addDelegate:delegate delegateQueue:queue];
        
        [_delegates addDelegate:delegate delegateQueue:queue];
    }
}

- (void)removeDelegate:(id<IChatManagerDelegate>)delegate
{
    if (delegate) {
        @synchronized(g_lock) {
            [[EMClient sharedClient] removeDelegate:delegate];
            [[EMClient sharedClient].contactManager removeDelegate:delegate];
            [[EMClient sharedClient].groupManager removeDelegate:delegate];
            [[EMClient sharedClient].roomManager removeDelegate:delegate];
            
            [_delegates removeDelegate:delegate];
        }
    }
}

@end
