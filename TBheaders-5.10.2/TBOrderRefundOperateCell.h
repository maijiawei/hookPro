//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBOrderRefundBasicCell.h"

@class NSMutableArray, UIView, UIViewController;

@interface TBOrderRefundOperateCell : TBOrderRefundBasicCell
{
    NSMutableArray *_buttonListArr;	// 8 = 0x8
    UIViewController *_currentVC;	// 16 = 0x10
    UIView *_bottomLine;	// 24 = 0x18
}

+ (double)tableView:(id)arg1 rowHeightForObject:(id)arg2;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(nonatomic) __weak UIViewController *currentVC; // @synthesize currentVC=_currentVC;
@property(retain, nonatomic) NSMutableArray *buttonListArr; // @synthesize buttonListArr=_buttonListArr;
- (void).cxx_destruct;
- (void)setObject:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
