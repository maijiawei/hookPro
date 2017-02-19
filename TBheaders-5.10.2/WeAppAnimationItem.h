//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSString, WeAppActionItem;

@interface WeAppAnimationItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSString *type;	// 8 = 0x8
    long long delay;	// 16 = 0x10
    long long duration;	// 24 = 0x18
    WeAppActionItem *action;	// 32 = 0x20
    NSString *_type;	// 40 = 0x28
    long long _delay;	// 48 = 0x30
    long long _duration;	// 56 = 0x38
    WeAppActionItem *_action;	// 64 = 0x40
}

@property(retain, nonatomic) WeAppActionItem *action; // @synthesize action=_action;
@property(nonatomic) long long duration; // @synthesize duration=_duration;
@property(nonatomic) long long delay; // @synthesize delay=_delay;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
