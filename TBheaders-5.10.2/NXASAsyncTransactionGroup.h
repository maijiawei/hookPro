//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSHashTable;

@interface NXASAsyncTransactionGroup : NSObject
{
    NSHashTable *_containerLayers;	// 8 = 0x8
}

+ (void)commit;
+ (void)registerTransactionGroupAsMainRunloopObserver:(id)arg1;
+ (id)mainTransactionGroup;
- (void).cxx_destruct;
- (void)commit;
- (void)addTransactionContainer:(id)arg1;
- (id)init;

@end

