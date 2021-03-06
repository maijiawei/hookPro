//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "MDCollectionHelperDelegate.h"

@class NSMutableArray, NSString, UICollectionView;

@interface MDMultiSelectedView : UIView <MDCollectionHelperDelegate>
{
    NSMutableArray *_datas;
    id <MDMultiSelectedViewDelegate> _delegate;
    UICollectionView *_collectionView;
}

@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic) __weak id <MDMultiSelectedViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSMutableArray *datas; // @synthesize datas=_datas;
- (void).cxx_destruct;
- (void)didSelectItemAtIndexPath:(id)arg1;
- (id)cellReuseIdentifer:(long long)arg1;
- (void)scrollToLastItemHorizontallyAndUpdateSourceDatas:(id)arg1;
- (void)reloadData;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

