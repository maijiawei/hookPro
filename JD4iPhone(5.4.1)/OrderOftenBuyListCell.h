//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "OrderOftenBuyBaseCell.h"

#import "OrderOftenBuyVCTableViewDelegate.h"

@class JDButton, JDIcon, JDImageView, JDLabel, NSString, OrderOftenBuyListModel, UIButton, UIImageView, UIView;

@interface OrderOftenBuyListCell : OrderOftenBuyBaseCell <OrderOftenBuyVCTableViewDelegate>
{
    OrderOftenBuyListModel *_wareModel;
    JDImageView *_wareImgForAnimation;
    UIView *_bgView;
    JDImageView *_wareImgView;
    JDImageView *_purchaseReminderIcon;
    UIImageView *_lineView;
    JDButton *_cartButton;
    UIButton *_cartBgButton;
    JDButton *_buyNowButton;
    UIButton *_buyNowBgButton;
    UIButton *_deleteButton;
    JDLabel *_priceLabel;
    JDLabel *_buyCountLabel;
    JDLabel *_wareNameLabel;
    JDIcon *_priceDiffLabel;
    JDIcon *_tagLabel1;
    JDIcon *_tagLabel2;
    long long _offsetX;
}

@property(nonatomic) long long offsetX; // @synthesize offsetX=_offsetX;
@property(retain, nonatomic) JDIcon *tagLabel2; // @synthesize tagLabel2=_tagLabel2;
@property(retain, nonatomic) JDIcon *tagLabel1; // @synthesize tagLabel1=_tagLabel1;
@property(retain, nonatomic) JDIcon *priceDiffLabel; // @synthesize priceDiffLabel=_priceDiffLabel;
@property(retain, nonatomic) JDLabel *wareNameLabel; // @synthesize wareNameLabel=_wareNameLabel;
@property(retain, nonatomic) JDLabel *buyCountLabel; // @synthesize buyCountLabel=_buyCountLabel;
@property(retain, nonatomic) JDLabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIButton *deleteButton; // @synthesize deleteButton=_deleteButton;
@property(retain, nonatomic) UIButton *buyNowBgButton; // @synthesize buyNowBgButton=_buyNowBgButton;
@property(retain, nonatomic) JDButton *buyNowButton; // @synthesize buyNowButton=_buyNowButton;
@property(retain, nonatomic) UIButton *cartBgButton; // @synthesize cartBgButton=_cartBgButton;
@property(retain, nonatomic) JDButton *cartButton; // @synthesize cartButton=_cartButton;
@property(retain, nonatomic) UIImageView *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) JDImageView *purchaseReminderIcon; // @synthesize purchaseReminderIcon=_purchaseReminderIcon;
@property(retain, nonatomic) JDImageView *wareImgView; // @synthesize wareImgView=_wareImgView;
@property(retain, nonatomic) UIView *bgView; // @synthesize bgView=_bgView;
@property(retain, nonatomic) JDImageView *wareImgForAnimation; // @synthesize wareImgForAnimation=_wareImgForAnimation;
@property(retain, nonatomic) OrderOftenBuyListModel *wareModel; // @synthesize wareModel=_wareModel;
- (void).cxx_destruct;
- (void)setCellDelegate:(id)arg1;
- (id)cellDelegate;
- (void)prepareForReuse;
- (void)updateBgViewLayout;
- (void)updateCartButtonLayout;
- (void)updateBuyNowButtonLayout;
- (void)fillPurchaseReminderIconData:(id)arg1;
- (void)fillBuyCountLabelData:(int)arg1;
- (void)fillPriceDiffLabelAndTagLabelData:(id)arg1;
- (void)fillPriceLabelData:(id)arg1;
- (void)fillWareNameLabelData:(id)arg1;
- (struct CGPoint)animationStartPoint;
- (void)fillData:(id)arg1;
- (void)setupUI;
- (void)clickedListItem;
- (void)buyNow;
- (void)addCart;
- (double)contentViewHeight;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(nonatomic) __weak id <OOBListCellDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

