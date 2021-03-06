//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>, NSString;

@interface DPImageCache : NSObject
{
    NSString *_path;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    NSMutableDictionary *_imagesToCache;
    long long _purgeableSpace;
}

- (void).cxx_destruct;
- (id)_cacheURLForURL:(id)arg1 maxSize:(int)arg2;
- (void)addImage:(id)arg1 url:(id)arg2 maxSize:(int)arg3;
- (id)image:(id)arg1 forMaxSize:(int)arg2;
- (id)init;

@end

