//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSMutableArray, NSTimer;

@interface TBPigeonScrollView : UIView
{
    NSMutableArray *_pageKitViewArray;	// 8 = 0x8
    UIView *_nowView;	// 16 = 0x10
    double _scrollTimeInterval;	// 24 = 0x18
    NSTimer *_controlTimer;	// 32 = 0x20
}

@property(retain, nonatomic) NSTimer *controlTimer; // @synthesize controlTimer=_controlTimer;
@property(nonatomic) double scrollTimeInterval; // @synthesize scrollTimeInterval=_scrollTimeInterval;
@property(retain, nonatomic) UIView *nowView; // @synthesize nowView=_nowView;
@property(retain, nonatomic) NSMutableArray *pageKitViewArray; // @synthesize pageKitViewArray=_pageKitViewArray;
- (void).cxx_destruct;
- (id)safeObjectAtIndex:(unsigned long long)arg1 inArray:(id)arg2;
- (id)nextObjectAfter:(id)arg1 inArray:(id)arg2;
- (void)replacePageKitView;
- (void)stopRolling;
- (void)startRolling;
- (void)didMoveToWindow;
- (void)didPigeonViewBecomeActive:(id)arg1;
- (void)didPigeonViewEnterBackground:(id)arg1;
- (void)destoryView;
- (void)resetPageKitViewArray:(id)arg1 scrollTime:(double)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

