//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeServiceAddressOption, UIImageView, UILabel, UIView;

@interface TBExtBuySerViceAddressItemSubpageCell : TBExtBuyBaseCell
{
    _Bool _isSelected;	// 8 = 0x8
    TBTradeServiceAddressOption *_model;	// 16 = 0x10
    UILabel *_nameLabel;	// 24 = 0x18
    UILabel *_addressLabel;	// 32 = 0x20
    UILabel *_defaultLabel;	// 40 = 0x28
    UILabel *_tipLabel;	// 48 = 0x30
    UIImageView *_selectedImageView;	// 56 = 0x38
    UIView *_separateLine;	// 64 = 0x40
}

+ (id)addressStr:(id)arg1;
+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UIView *separateLine; // @synthesize separateLine=_separateLine;
@property(retain, nonatomic) UIImageView *selectedImageView; // @synthesize selectedImageView=_selectedImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UILabel *defaultLabel; // @synthesize defaultLabel=_defaultLabel;
@property(retain, nonatomic) UILabel *addressLabel; // @synthesize addressLabel=_addressLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) __weak TBTradeServiceAddressOption *model; // @synthesize model=_model;
@property(nonatomic) _Bool isSelected; // @synthesize isSelected=_isSelected;
- (void).cxx_destruct;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end
