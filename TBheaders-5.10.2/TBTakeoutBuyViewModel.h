//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TBTakeoutViewModel.h"

@class NSString, TBLSPOIEntity, TBTakeoutBuyApi, TBTakeoutBuyCouponsDetailModel, TBTakeoutBuyListViewModel, TBTakeoutBuyModel, TBTakeoutBuyToolbarViewModel;

@interface TBTakeoutBuyViewModel : TBTakeoutViewModel
{
    NSString *_params;	// 8 = 0x8
    TBLSPOIEntity *_poiEntity;	// 16 = 0x10
    TBTakeoutBuyCouponsDetailModel *_couponsDetail;	// 24 = 0x18
    TBTakeoutBuyModel *_buyModel;	// 32 = 0x20
    TBTakeoutBuyListViewModel *_listViewModel;	// 40 = 0x28
    TBTakeoutBuyToolbarViewModel *_toolbarViewModel;	// 48 = 0x30
    TBTakeoutBuyApi *_buyApi;	// 56 = 0x38
}

@property(retain, nonatomic) TBTakeoutBuyApi *buyApi; // @synthesize buyApi=_buyApi;
@property(retain, nonatomic) TBTakeoutBuyToolbarViewModel *toolbarViewModel; // @synthesize toolbarViewModel=_toolbarViewModel;
@property(retain, nonatomic) TBTakeoutBuyListViewModel *listViewModel; // @synthesize listViewModel=_listViewModel;
@property(retain, nonatomic) TBTakeoutBuyModel *buyModel; // @synthesize buyModel=_buyModel;
@property(retain, nonatomic) TBTakeoutBuyCouponsDetailModel *couponsDetail; // @synthesize couponsDetail=_couponsDetail;
@property(retain, nonatomic) TBLSPOIEntity *poiEntity; // @synthesize poiEntity=_poiEntity;
@property(retain, nonatomic) NSString *params; // @synthesize params=_params;
- (void).cxx_destruct;
- (id)h5Parameter;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)onError:(id)arg1;
- (void)onSuccess;
- (void)parseResult:(id)arg1;
- (id)serviceApi;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
