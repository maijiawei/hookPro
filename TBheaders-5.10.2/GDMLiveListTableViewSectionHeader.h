//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewHeaderFooterView.h>

@class UIImageView, UILabel;

@interface GDMLiveListTableViewSectionHeader : UITableViewHeaderFooterView
{
    int _type;	// 8 = 0x8
    UILabel *_titleLabel;	// 16 = 0x10
    UIImageView *_badgeImageView;	// 24 = 0x18
}

@property(retain, nonatomic) UIImageView *badgeImageView; // @synthesize badgeImageView=_badgeImageView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)initWithReuseIdentifier:(id)arg1;

@end

