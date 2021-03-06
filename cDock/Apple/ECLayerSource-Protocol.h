//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  3 2014 10:55:11).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, NSArray;

@protocol ECLayerSource <NSObject>
- (void)setContentInLayers:(NSArray *)arg1 withDataRange:(struct _NSRange)arg2 forLayer:(CALayer *)arg3 usingScaleFactor:(float)arg4;
- (unsigned long long)numberOfItemsForLayer:(CALayer *)arg1;

@optional
- (CALayer *)makeLayerForLayer:(CALayer *)arg1 atIndex:(unsigned long long)arg2;
- (CALayer *)makeLayerForLayer:(CALayer *)arg1;
@end

