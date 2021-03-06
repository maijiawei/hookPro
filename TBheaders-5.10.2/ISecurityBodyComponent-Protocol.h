//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString;

@protocol ISecurityBodyComponent <NSObject>
- (void)setSecurityBodyServer:(long long)arg1;
- (_Bool)putUserActionRecord:(NSString *)arg1 ctrlName:(NSString *)arg2 xCoordinate:(float)arg3 yCoordinate:(float)arg4;
- (_Bool)putUserTrackRecord:(NSString *)arg1;
- (NSString *)getSecurityBodyDataEx:(NSString *)arg1 appKey:(NSString *)arg2 flag:(int)arg3;
- (NSString *)getSecurityBodyData:(NSString *)arg1 appKey:(NSString *)arg2;
- (NSString *)getSecurityBodyData:(NSString *)arg1;
- (_Bool)initSecurityBody:(NSString *)arg1;
@end

