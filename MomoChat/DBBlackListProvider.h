//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MFSimpleDatabase;

@interface DBBlackListProvider : NSObject
{
    MFSimpleDatabase *mfdb;
}

+ (id)providerWithMFDB:(id)arg1;
- (void)removeBlockUser:(id)arg1;
- (void)insertBlockUser:(id)arg1 blockTime:(id)arg2;
- (id)blackListMomoidArray;
- (id)blackListInfoArray;
- (void)replaceBlackListInfoArray:(id)arg1;
- (void)ensureBlackListTables;
- (void)dealloc;
- (id)initWithMFDB:(id)arg1;

@end

