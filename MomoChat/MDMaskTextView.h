//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, UIImageView, UILabel;

@interface MDMaskTextView : UIView
{
    UIView *_superViewOfMask;
    UILabel *_contentLabel;
    UIView *_backgroundView;
    UIImageView *_iconImageView;
    CDUnknownBlockType _hideHandleBlock;
    NSString *_iconImageName;
}

+ (void)showTextViewForRegisterWithText:(id)arg1;
+ (void)showTextViewWithText:(id)arg1;
+ (id)showInfoBarWith:(id)arg1 viewWillHideHandleBlock:(CDUnknownBlockType)arg2 superViewOfMask:(id)arg3;
+ (void)showTextViewWithText:(id)arg1 viewWillHideHandleBlock:(CDUnknownBlockType)arg2 superViewOfMask:(id)arg3;
+ (id)showInfoBarWith:(id)arg1 viewWillHideHandleBlock:(CDUnknownBlockType)arg2;
+ (void)showTextViewWithText:(id)arg1 viewWillHideHandleBlock:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *iconImageName; // @synthesize iconImageName=_iconImageName;
@property(copy, nonatomic) CDUnknownBlockType hideHandleBlock; // @synthesize hideHandleBlock=_hideHandleBlock;
@property(retain, nonatomic) UIImageView *iconImageView; // @synthesize iconImageView=_iconImageView;
@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(nonatomic) UIView *superViewOfMask; // @synthesize superViewOfMask=_superViewOfMask;
- (void)imjClientCloseByServer:(id)arg1 ec:(long long)arg2 em:(id)arg3;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)doHideAnimation;
- (void)show;
- (void)dealloc;
- (id)initWithText:(id)arg1 iconImageName:(id)arg2;

@end
