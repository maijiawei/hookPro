//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel;

@interface AliTradeSKUAreaSelectControl : UIButton
{
    UILabel *_locationIcon;	// 8 = 0x8
    UILabel *_locationText;	// 16 = 0x10
    UILabel *_locationTip;	// 24 = 0x18
}

@property(retain, nonatomic) UILabel *locationTip; // @synthesize locationTip=_locationTip;
@property(retain, nonatomic) UILabel *locationText; // @synthesize locationText=_locationText;
@property(retain, nonatomic) UILabel *locationIcon; // @synthesize locationIcon=_locationIcon;
- (void).cxx_destruct;
- (void)setAreaText:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

