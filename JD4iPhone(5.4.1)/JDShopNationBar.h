//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "JDSearchBarDelegate.h"
#import "JDShopDelegate.h"
#import "UISearchBarDelegate.h"

@class JDGridButton, NSString, UIButton, UIImageView, UITextField;

@interface JDShopNationBar : UIView <UISearchBarDelegate, JDSearchBarDelegate, JDShopDelegate>
{
    UIView *m_bgView;
    UIImageView *_searchBg;
    UITextField *m_searchBar;
    UIButton *m_rightBut;
    long long spaceY;
    JDGridButton *_gridBut;
    _Bool showShareBtn;
    _Bool showCategory;
    _Bool searchPage;
    _Bool _hiddenBut;
    id <JDShopDelegate> delegate;
    NSString *placeHolder;
    UIButton *rightShareBtn;
}

@property(nonatomic) _Bool hiddenBut; // @synthesize hiddenBut=_hiddenBut;
@property(retain, nonatomic) UIButton *rightShareBtn; // @synthesize rightShareBtn;
@property(retain, nonatomic) JDGridButton *gridBut; // @synthesize gridBut=_gridBut;
@property(nonatomic) _Bool searchPage; // @synthesize searchPage;
@property(nonatomic) _Bool showCategory; // @synthesize showCategory;
@property(retain, nonatomic) UITextField *searchbar; // @synthesize searchbar=m_searchBar;
@property(retain, nonatomic) NSString *placeHolder; // @synthesize placeHolder;
@property(nonatomic) id <JDShopDelegate> delegate; // @synthesize delegate;
@property(retain, nonatomic) UIButton *rightBut; // @synthesize rightBut=m_rightBut;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textFieldShouldBeginEditing:(id)arg1;
- (void)setRightButBgImage:(_Bool)arg1;
- (void)clickMoreButton:(id)arg1;
- (void)rightButClick;
- (void)showMoreButton;
- (void)setGridButton:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 withBarWidth:(double)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

