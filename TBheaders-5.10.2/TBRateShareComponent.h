//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBRateComponent.h"

@class NSString;

@interface TBRateShareComponent : TBRateComponent
{
    _Bool _checked;	// 8 = 0x8
    _Bool _disabled;	// 9 = 0x9
    NSString *_type;	// 16 = 0x10
    NSString *_showName;	// 24 = 0x18
    NSString *_typeDesc;	// 32 = 0x20
    NSString *_desc;	// 40 = 0x28
}

@property(nonatomic) _Bool disabled; // @synthesize disabled=_disabled;
@property(nonatomic) _Bool checked; // @synthesize checked=_checked;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *typeDesc; // @synthesize typeDesc=_typeDesc;
@property(retain, nonatomic) NSString *showName; // @synthesize showName=_showName;
@property(retain, nonatomic) NSString *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithData:(id)arg1;

@end

