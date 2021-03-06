//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDContentItemDelegate.h"

@class NSDictionary, NSString, ShowNumberItem;

@interface UserInfoExtraView : UIView <JDContentItemDelegate>
{
    ShowNumberItem *_productItem;
    ShowNumberItem *_shopItem;
    ShowNumberItem *_recordItem;
    NSDictionary *_numberDic;
    id <UserInfoExtraViewDelegate> _delegate;
}

@property(nonatomic) __weak id <UserInfoExtraViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSDictionary *numberDic; // @synthesize numberDic=_numberDic;
- (void).cxx_destruct;
- (void)didTapAtItemView:(id)arg1;
- (void)layoutItem:(id)arg1 withNumber:(id)arg2;
- (void)setupSubViews;
- (_Bool)isRedPointShow:(id)arg1;
- (void)showItemRedPoint:(id)arg1 show:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

