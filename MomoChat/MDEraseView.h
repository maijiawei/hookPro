//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class CALayer, CAShapeLayer, MDWeakProxy, NSMutableArray, NSString, UIImage, UIImageView;

@interface MDEraseView : UIView <UIGestureRecognizerDelegate>
{
    _Bool _openMask;
    id <MDEraseAnimaitonDelegate> _delegate;
    double _limitWidth;
    double _limitHeight;
    UIImageView *_eraseMaskView;
    CALayer *_contentLayer;
    CAShapeLayer *_shapeLayer;
    UIImage *_content;
    struct CGPath *_path;
    NSMutableArray *_limitPoints;
    MDWeakProxy *_proxy;
}

@property(retain, nonatomic) MDWeakProxy *proxy; // @synthesize proxy=_proxy;
@property(retain, nonatomic) NSMutableArray *limitPoints; // @synthesize limitPoints=_limitPoints;
@property(nonatomic) _Bool openMask; // @synthesize openMask=_openMask;
@property(nonatomic) struct CGPath *path; // @synthesize path=_path;
@property(retain, nonatomic) UIImage *content; // @synthesize content=_content;
@property(retain, nonatomic) CAShapeLayer *shapeLayer; // @synthesize shapeLayer=_shapeLayer;
@property(retain, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property(retain, nonatomic) UIImageView *eraseMaskView; // @synthesize eraseMaskView=_eraseMaskView;
@property(nonatomic) double limitHeight; // @synthesize limitHeight=_limitHeight;
@property(nonatomic) double limitWidth; // @synthesize limitWidth=_limitWidth;
@property(nonatomic) __weak id <MDEraseAnimaitonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (struct CGPoint)limitPointFor:(long long)arg1;
- (void)setMaskImage:(id)arg1;
- (void)setImage:(id)arg1;
- (void)checkClearMask;
- (void)animationToDefault;
- (void)delayAnimateToDefault;
- (void)setupLimitPoints;
- (void)resetShapePath;
- (void)resetDefault;
- (void)touchesEndedAndCanceled:(struct CGPoint)arg1;
- (void)touchesMoved:(struct CGPoint)arg1;
- (void)touchesBegan:(struct CGPoint)arg1;
- (void)doPan:(id)arg1;
- (void)doTap:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
