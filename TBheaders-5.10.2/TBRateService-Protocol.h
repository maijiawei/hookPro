//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString, TBInteractRateInfo, TBRateInfo;
@protocol TBRateAppendFeed, TBRateServiceMockProtocol;

@protocol TBRateService <NSObject>
- (void)registerRateServiceMockDelegate:(id <TBRateServiceMockProtocol>)arg1;
- (void (^)(TBRateResult *))getSuccessBlock:(unsigned long long)arg1;
- (void (^)(TBRateResult *))getFailureBlock:(unsigned long long)arg1;
- (void (^)(TBRateResult *))getSuccessBlock:(unsigned long long)arg1 type:(NSString *)arg2;
- (void (^)(TBRateResult *))getFailureBlock:(unsigned long long)arg1 type:(NSString *)arg2;
- (void)registerRateCallbacksForAction:(unsigned long long)arg1 successBlock:(void (^)(TBRateResult *))arg2 failureBlock:(void (^)(TBRateResult *))arg3;
- (void)registerRateCallbacksForAction:(unsigned long long)arg1 successBlock:(void (^)(TBRateResult *))arg2 failureBlock:(void (^)(TBRateResult *))arg3 type:(NSString *)arg4;

@optional
- (void)checkAppendRateStatus:(NSString *)arg1;
- (void)checkRateStatus:(NSString *)arg1;
- (void)interact:(TBInteractRateInfo *)arg1 type:(unsigned long long)arg2 source:(NSString *)arg3;
- (void)appendRates:(NSArray<TBRateAppendFeed> *)arg1 order:(NSString *)arg2;
- (void)removeRate:(TBRateInfo *)arg1 source:(NSString *)arg2;
- (void)anonyRate:(NSString *)arg1 ratedUser:(NSString *)arg2 source:(NSString *)arg3;
- (void)editRate:(TBRateInfo *)arg1;
- (void)queryRateDetail:(NSString *)arg1 seller:(NSString *)arg2 isEncode:(_Bool)arg3 source:(NSString *)arg4;
- (void)submitOrderRateInfo:(NSString *)arg1 mainOrderRateInfo:(id)arg2 subOrderRateInfo:(id)arg3;
- (void)queryOrderAppendRateInfo:(NSString *)arg1 archive:(NSString *)arg2;
- (void)queryOrderRateInfo:(NSString *)arg1;
- (void)interactRemove:(TBInteractRateInfo *)arg1 type:(unsigned long long)arg2 source:(NSString *)arg3;
- (void)queryUserRates:(unsigned long long)arg1 page:(long long)arg2 of:(int)arg3 source:(NSString *)arg4;
- (void)userRateCollect;
- (void)interactAdd:(TBInteractRateInfo *)arg1 type:(unsigned long long)arg2 source:(NSString *)arg3;
- (void)increasePageView:(NSString *)arg1;
- (void)queryInteractDatas:(NSArray *)arg1 source:(NSString *)arg2;
@end
