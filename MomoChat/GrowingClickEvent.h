//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GrowingImpressionEvent.h"

@interface GrowingClickEvent : GrowingImpressionEvent
{
}

+ (void)_sendEventsWithManager:(id)arg1 triggerNode:(id)arg2 eventType:(long long)arg3 pageData:(id)arg4 withChilds:(_Bool)arg5;
+ (_Bool)checkNode:(id)arg1;
- (id)eventTypeKey;
- (id)initWithTimestamp:(id)arg1 pageData:(id)arg2 view:(id)arg3 keyIndex:(long long)arg4 xpath:(id)arg5;

@end
