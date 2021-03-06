//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

#import "TableBindViewDelegate.h"

@class MDUKView, NSString, UIImageView, UILabel, UIView;

@interface MDRoomPartCell : UITableViewCell <TableBindViewDelegate>
{
    int _onLineState;
    UIImageView *_headImageView;
    UILabel *_roomTitleLabel;
    UILabel *_leftNumberLabel;
    UIImageView *_leftImageView;
    UILabel *_locationLabel;
    UILabel *_leftTitleLabel;
    MDUKView *_ukView;
    MDUKView *_ukImageView;
    UILabel *_visitNumLabel;
    UIView *_rightContentView;
    UIView *_line;
    NSString *_roomID;
    NSString *_adminRemoteid;
    long long _cellType;
}

@property(nonatomic) long long cellType; // @synthesize cellType=_cellType;
@property(retain, nonatomic) NSString *adminRemoteid; // @synthesize adminRemoteid=_adminRemoteid;
@property(nonatomic) int onLineState; // @synthesize onLineState=_onLineState;
@property(retain, nonatomic) NSString *roomID; // @synthesize roomID=_roomID;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(retain, nonatomic) UIView *rightContentView; // @synthesize rightContentView=_rightContentView;
@property(retain, nonatomic) UILabel *visitNumLabel; // @synthesize visitNumLabel=_visitNumLabel;
@property(retain, nonatomic) MDUKView *ukImageView; // @synthesize ukImageView=_ukImageView;
@property(retain, nonatomic) MDUKView *ukView; // @synthesize ukView=_ukView;
@property(retain, nonatomic) UILabel *leftTitleLabel; // @synthesize leftTitleLabel=_leftTitleLabel;
@property(retain, nonatomic) UILabel *locationLabel; // @synthesize locationLabel=_locationLabel;
@property(retain, nonatomic) UIImageView *leftImageView; // @synthesize leftImageView=_leftImageView;
@property(retain, nonatomic) UILabel *leftNumberLabel; // @synthesize leftNumberLabel=_leftNumberLabel;
@property(retain, nonatomic) UILabel *roomTitleLabel; // @synthesize roomTitleLabel=_roomTitleLabel;
@property(retain, nonatomic) UIImageView *headImageView; // @synthesize headImageView=_headImageView;
- (void).cxx_destruct;
- (_Bool)canPerformAction:(SEL)arg1 withSender:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (void)doRemoveCollect;
- (void)doReport;
- (void)doLongPress:(id)arg1;
- (void)resetToDefault;
- (void)setLineType:(long long)arg1;
- (void)updateMenus:(long long)arg1 model:(id)arg2;
- (void)bindModel:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

