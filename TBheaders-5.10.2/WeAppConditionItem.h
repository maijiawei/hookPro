//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "WeAppComponentBaseItem.h"

#import "NSCopying-Protocol.h"
#import "NSMutableCopying-Protocol.h"

@class NSArray, NSDictionary, WeAppExpressionItem, WeAppStyleBindingItem;

@interface WeAppConditionItem : WeAppComponentBaseItem <NSCopying, NSMutableCopying>
{
    NSDictionary *dictData;	// 8 = 0x8
    WeAppExpressionItem *_expression;	// 16 = 0x10
    WeAppStyleBindingItem *_styleBinding;	// 24 = 0x18
    NSDictionary *_dataBinding;	// 32 = 0x20
    NSArray *_events;	// 40 = 0x28
    unsigned long long _executeType;	// 48 = 0x30
}

@property(nonatomic) unsigned long long executeType; // @synthesize executeType=_executeType;
@property(retain, nonatomic) NSArray *events; // @synthesize events=_events;
@property(retain, nonatomic) NSDictionary *dataBinding; // @synthesize dataBinding=_dataBinding;
@property(retain, nonatomic) WeAppStyleBindingItem *styleBinding; // @synthesize styleBinding=_styleBinding;
@property(retain, nonatomic) WeAppExpressionItem *expression; // @synthesize expression=_expression;
- (void).cxx_destruct;
- (id)toDictionary;
- (void)setFromDictionary:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

