//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "ITBOModel-Protocol.h"

@class NSString, UIButton, UIImageView;

@interface TBOUserInfoToolBar : UIView <ITBOModel>
{
    id _model;	// 8 = 0x8
    UIImageView *_logoImageView;	// 16 = 0x10
    UIButton *_searchButton;	// 24 = 0x18
    id _userinfo;	// 32 = 0x20
}

@property(retain, nonatomic) id userinfo; // @synthesize userinfo=_userinfo;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIImageView *logoImageView; // @synthesize logoImageView=_logoImageView;
@property(retain, nonatomic) id model; // @synthesize model=_model;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

