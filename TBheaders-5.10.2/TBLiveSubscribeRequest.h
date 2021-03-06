//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface TBLiveSubscribeRequest : NSObject
{
    CDUnknownBlockType _mtopFailBlock;	// 8 = 0x8
    CDUnknownBlockType _completion;	// 16 = 0x10
}

@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;
@property(copy, nonatomic) CDUnknownBlockType mtopFailBlock; // @synthesize mtopFailBlock=_mtopFailBlock;
- (void).cxx_destruct;
- (void)requestSubscribeWithMethod:(id)arg1 isAppointmentFeed:(_Bool)arg2 inputId:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)requestCancelSubscribeWithAccountId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSubscribeWithAccountId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestCancelSubscribeWithAppointmentId:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestSubscribeWithAppointmentId:(long long)arg1 completion:(CDUnknownBlockType)arg2;

@end

