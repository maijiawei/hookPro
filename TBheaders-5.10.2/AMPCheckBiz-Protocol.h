//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "AMPBaseBiz-Protocol.h"

@class NSDate, NSString;

@protocol AMPCheckBiz <AMPBaseBiz>
- (void)getHistroyMessageByTimeWithCcode:(NSString *)arg1 time:(NSDate *)arg2 pageSize:(unsigned long long)arg3;
- (void)getHistroyMessageWithCcode:(NSString *)arg1 msgId:(NSString *)arg2 pageSize:(unsigned long long)arg3;
- (void)getNewestMessageWithCcode:(NSString *)arg1 pageSize:(long long)arg2;
@end
