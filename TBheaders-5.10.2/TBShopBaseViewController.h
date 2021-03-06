//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBViewController.h"

#import "TBShopBaseVCProtocol-Protocol.h"

@class NSDictionary, NSMutableDictionary, NSString, NSURL, TBHUDActivityView, TBShopErrorView, TBShopHomeViewController, TBShopInfo, UIScrollView;

@interface TBShopBaseViewController : TBViewController <TBShopBaseVCProtocol>
{
    _Bool _requestCounterChangedNeedNotification;	// 10 = 0xa
    _Bool _dataIsLoaded;	// 11 = 0xb
    NSString *_shopId;	// 16 = 0x10
    NSString *_sellerId;	// 24 = 0x18
    NSString *_sellerNick;	// 32 = 0x20
    NSDictionary *_dataDict;	// 40 = 0x28
    TBShopInfo *_shopInfo;	// 48 = 0x30
    NSString *_pageName;	// 56 = 0x38
    NSDictionary *_pageEventParams;	// 64 = 0x40
    NSString *_accuratePageName;	// 72 = 0x48
    UIScrollView *_mainScrollView;	// 80 = 0x50
    TBHUDActivityView *_loadingView;	// 88 = 0x58
    TBShopErrorView *_errorView;	// 96 = 0x60
    NSURL *_localUrl;	// 104 = 0x68
    NSString *_originURL;	// 112 = 0x70
    NSMutableDictionary *_requests;	// 120 = 0x78
    unsigned long long _requestCounter;	// 128 = 0x80
}

@property(nonatomic) _Bool dataIsLoaded; // @synthesize dataIsLoaded=_dataIsLoaded;
@property(nonatomic) _Bool requestCounterChangedNeedNotification; // @synthesize requestCounterChangedNeedNotification=_requestCounterChangedNeedNotification;
@property(nonatomic) unsigned long long requestCounter; // @synthesize requestCounter=_requestCounter;
@property(retain, nonatomic) NSMutableDictionary *requests; // @synthesize requests=_requests;
@property(retain, nonatomic) NSString *originURL; // @synthesize originURL=_originURL;
@property(retain, nonatomic) NSURL *localUrl; // @synthesize localUrl=_localUrl;
@property(retain, nonatomic) TBShopErrorView *errorView; // @synthesize errorView=_errorView;
@property(retain, nonatomic) TBHUDActivityView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) UIScrollView *mainScrollView; // @synthesize mainScrollView=_mainScrollView;
@property(retain, nonatomic) NSString *accuratePageName; // @synthesize accuratePageName=_accuratePageName;
@property(retain, nonatomic) NSDictionary *pageEventParams; // @synthesize pageEventParams=_pageEventParams;
@property(retain, nonatomic) NSString *pageName; // @synthesize pageName=_pageName;
@property(retain, nonatomic) TBShopInfo *shopInfo; // @synthesize shopInfo=_shopInfo;
@property(copy, nonatomic) NSDictionary *dataDict; // @synthesize dataDict=_dataDict;
@property(retain, nonatomic) NSString *sellerNick; // @synthesize sellerNick=_sellerNick;
@property(retain, nonatomic) NSString *sellerId; // @synthesize sellerId=_sellerId;
@property(retain, nonatomic) NSString *shopId; // @synthesize shopId=_shopId;
- (void).cxx_destruct;
- (_Bool)existRequestWithName:(id)arg1;
- (void)removeRequestWithName:(id)arg1;
- (void)addRequest:(id)arg1 withName:(id)arg2;
- (void)cancelRequestWithName:(id)arg1;
- (void)cancelRequests;
- (void)requestCounterDidChanged;
- (void)shopInfoDidChangedAndViewDidLoaded;
- (void)shopInfoDidChanged;
- (void)deliverShopToNextViewController:(id)arg1;
- (void)viewDidLoad;
- (id)tbNavigationController;
- (id)tbNavigationItem;
- (id)tbToolbarController;
- (id)tbNavibar;
- (id)init;
- (id)initWithNavigatorURL:(id)arg1 query:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) TBShopHomeViewController *homeViewController;
@property(readonly) Class superclass;
@property(readonly, nonatomic) NSMutableDictionary *utData;

@end

