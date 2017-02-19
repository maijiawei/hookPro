//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface CommentDetailUsefulCell : UITableViewCell <UIGestureRecognizerDelegate>
{
    UIImageView *imageView;
    UILabel *numLabel;
    id <CommentDetailUsefulCellDelegate> _delegate;
}

@property(nonatomic) __weak id <CommentDetailUsefulCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setIsUseful:(_Bool)arg1;
- (void)setUsefulNumber:(id)arg1;
- (void)usefulTap:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
