//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "TBIStickerViewDelegate-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, TBICropAssistantView, TBIPhotoPreviewDO, TBIVideoCamera, UIImage, UIImageView, UIScrollView;

@interface TBIPhotoPreviewView : UIView <UIScrollViewDelegate, TBIStickerViewDelegate>
{
    NSMutableArray *waterMarkArray;	// 8 = 0x8
    TBIPhotoPreviewDO *_viewDO;	// 16 = 0x10
    UIImage *_rawImage;	// 24 = 0x18
    UIScrollView *_previewScrollView;	// 32 = 0x20
    UIImageView *_previewImageView;	// 40 = 0x28
    TBIVideoCamera *_videoCamera;	// 48 = 0x30
    TBICropAssistantView *_cropAssistantView;	// 56 = 0x38
}

@property(retain, nonatomic) TBICropAssistantView *cropAssistantView; // @synthesize cropAssistantView=_cropAssistantView;
@property(retain, nonatomic) TBIVideoCamera *videoCamera; // @synthesize videoCamera=_videoCamera;
@property(retain, nonatomic) UIImageView *previewImageView; // @synthesize previewImageView=_previewImageView;
@property(retain, nonatomic) UIScrollView *previewScrollView; // @synthesize previewScrollView=_previewScrollView;
@property(retain, nonatomic) UIImage *rawImage; // @synthesize rawImage=_rawImage;
@property(retain, nonatomic) TBIPhotoPreviewDO *viewDO; // @synthesize viewDO=_viewDO;
@property(readonly, nonatomic) NSArray *waterMarkArray; // @synthesize waterMarkArray;
- (void).cxx_destruct;
- (struct CGRect)fitSize:(struct CGSize)arg1 toRect:(struct CGRect)arg2;
- (void)stickerViewDidClose:(id)arg1;
- (void)stickerViewDidTap:(id)arg1;
- (void)stickerViewDidBeginMoving:(id)arg1;
- (void)addWatermark:(id)arg1 waterMarkImage:(id)arg2;
- (void)removeAllWatermarks;
- (void)captureView;
- (id)viewForZoomingInScrollView:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)keyPathRemoving:(id)arg1;
- (void)keyPathBinding:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 withViewDO:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

