//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "StyleKitStyle.h"

@interface TBThemeKitStyle : StyleKitStyle
{
    StyleKitStyle *_realStyle;	// 8 = 0x8
}

@property(retain, nonatomic) StyleKitStyle *realStyle; // @synthesize realStyle=_realStyle;
- (void).cxx_destruct;
- (id)initWithRealStyle:(id)arg1;
- (id)getRealStyle;
@property(nonatomic) __weak TBThemeKitStyle *parentStyle;
- (id)initWithData:(id)arg1 context:(id)arg2;

@end

