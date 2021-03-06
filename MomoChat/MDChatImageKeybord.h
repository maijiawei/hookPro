//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDBaseKeybord.h"

#import "MDChatSelectImageCellDelegate.h"
#import "MDCollectionHelperDelegate.h"
#import "MDImageKeybordCollectionViewDelegate.h"

@class ALAssetsLibrary, MDCollectionHelper, NSMutableArray, NSString, UIButton, UICollectionView, UIImageView, UILabel, UIView;

@interface MDChatImageKeybord : MDBaseKeybord <MDCollectionHelperDelegate, MDChatSelectImageCellDelegate, MDImageKeybordCollectionViewDelegate>
{
    _Bool _isAnimating;
    _Bool _isSelectOriginal;
    id <MDChatImageKeybordDelegate> _imagebordDelegate;
    ALAssetsLibrary *_alLibrary;
    UICollectionView *_collectionView;
    NSMutableArray *_assets;
    NSMutableArray *_choosedItems;
    MDCollectionHelper *_helper;
    UIImageView *_panImageView;
    UIView *_panMaskView;
    long long _panIndex;
    UIButton *_orignalBtn;
    UIButton *_sendBtn;
    UILabel *_orignalLabel;
}

@property(retain, nonatomic) UILabel *orignalLabel; // @synthesize orignalLabel=_orignalLabel;
@property(retain, nonatomic) UIButton *sendBtn; // @synthesize sendBtn=_sendBtn;
@property(retain, nonatomic) UIButton *orignalBtn; // @synthesize orignalBtn=_orignalBtn;
@property(nonatomic) _Bool isSelectOriginal; // @synthesize isSelectOriginal=_isSelectOriginal;
@property(nonatomic) _Bool isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) long long panIndex; // @synthesize panIndex=_panIndex;
@property(retain, nonatomic) UIView *panMaskView; // @synthesize panMaskView=_panMaskView;
@property(retain, nonatomic) UIImageView *panImageView; // @synthesize panImageView=_panImageView;
@property(retain, nonatomic) MDCollectionHelper *helper; // @synthesize helper=_helper;
@property(retain, nonatomic) NSMutableArray *choosedItems; // @synthesize choosedItems=_choosedItems;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) ALAssetsLibrary *alLibrary; // @synthesize alLibrary=_alLibrary;
@property(nonatomic) __weak id <MDChatImageKeybordDelegate> imagebordDelegate; // @synthesize imagebordDelegate=_imagebordDelegate;
- (void).cxx_destruct;
- (unsigned long long)getOriginalLength;
- (void)resetOrignalLabelTitle;
- (void)cleanPanImageView;
- (void)delayReleasePanCell;
- (void)didMarkedCell:(id)arg1;
- (void)didSelectedCellAtPoint:(struct CGPoint)arg1;
- (void)cancelVerticalPan:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
- (void)endVerticalPan:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
- (void)movedVerticalPan:(struct CGPoint)arg1 atPoint:(struct CGPoint)arg2;
- (void)shouldVerticalPanAtPoint:(struct CGPoint)arg1;
- (void)sendSingleImageWithPan:(id)arg1;
- (void)sendImage;
- (void)reloadData;
- (void)didEndDisplayingCell:(id)arg1 forItemAtIndexPath:(long long)arg2;
- (void)cell:(id)arg1 atIndexPath:(id)arg2;
- (id)cellReuseIdentifer:(long long)arg1;
- (void)doMarkOriginal;
- (void)doPhotos;
- (void)doCamera;
- (id)imageItemAtIndex:(long long)arg1;
- (void)resetIsSelectOriginal:(_Bool)arg1;
- (void)cleanAll;
- (void)cleanSelectedImages;
- (id)buttonWithSize:(struct CGSize)arg1 imageName:(id)arg2 title:(id)arg3 action:(SEL)arg4;
- (id)createSendButton;
- (void)setupBottomToolBar;
- (double)bordHeight;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)hideAnimated:(_Bool)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

