//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDCellLayout.h"

@class GroupProfileManager, MDImageNode, MDImageTextNode, MDLabelNode, MDNearbyGroupItem, MDTextIconsNode, MDTextNode, MDViewNode, MomoGroupProfileInfo;

@interface MDNearbyGroupLayout : MDCellLayout
{
    MDViewNode *_nodeHeadImage;
    MDLabelNode *_nodeGroupName;
    MDImageTextNode *_nodeTopSubtitle;
    MDViewNode *_nodeJoinButton;
    MDViewNode *_nodeTopContent;
    MDViewNode *_nodeGroupContent;
    MDImageNode *_nodeContentImageBack;
    MDTextIconsNode *_nodeGroupIcons;
    MDViewNode *_groupImageIcons;
    MDTextNode *_nodeJoinTip;
    MDTextNode *_nodeActiveMessage;
    MDImageTextNode *_nodeActiveTextIcon;
    MDViewNode *_nodeActiveUserHeaders;
    MDViewNode *_nodeSeparator;
    MDTextNode *_nodeLatestActivity;
    double _cellHeight;
    MDViewNode *_nodeBottomContent;
    MDImageTextNode *_nodeBottomSite;
    MDTextNode *_nodeRecruitTip;
    MDNearbyGroupItem *_groupItem;
    MomoGroupProfileInfo *_gpi;
    GroupProfileManager *_groupProfileManager;
}

@property(retain, nonatomic) GroupProfileManager *groupProfileManager; // @synthesize groupProfileManager=_groupProfileManager;
@property(retain, nonatomic) MomoGroupProfileInfo *gpi; // @synthesize gpi=_gpi;
@property(nonatomic) __weak MDNearbyGroupItem *groupItem; // @synthesize groupItem=_groupItem;
@property(retain, nonatomic) MDTextNode *nodeRecruitTip; // @synthesize nodeRecruitTip=_nodeRecruitTip;
@property(retain, nonatomic) MDImageTextNode *nodeBottomSite; // @synthesize nodeBottomSite=_nodeBottomSite;
@property(retain, nonatomic) MDViewNode *nodeBottomContent; // @synthesize nodeBottomContent=_nodeBottomContent;
@property(nonatomic) double cellHeight; // @synthesize cellHeight=_cellHeight;
@property(retain, nonatomic) MDTextNode *nodeLatestActivity; // @synthesize nodeLatestActivity=_nodeLatestActivity;
@property(retain, nonatomic) MDViewNode *nodeSeparator; // @synthesize nodeSeparator=_nodeSeparator;
@property(retain, nonatomic) MDViewNode *nodeActiveUserHeaders; // @synthesize nodeActiveUserHeaders=_nodeActiveUserHeaders;
@property(retain, nonatomic) MDImageTextNode *nodeActiveTextIcon; // @synthesize nodeActiveTextIcon=_nodeActiveTextIcon;
@property(retain, nonatomic) MDTextNode *nodeActiveMessage; // @synthesize nodeActiveMessage=_nodeActiveMessage;
@property(retain, nonatomic) MDTextNode *nodeJoinTip; // @synthesize nodeJoinTip=_nodeJoinTip;
@property(retain, nonatomic) MDViewNode *groupImageIcons; // @synthesize groupImageIcons=_groupImageIcons;
@property(retain, nonatomic) MDTextIconsNode *nodeGroupIcons; // @synthesize nodeGroupIcons=_nodeGroupIcons;
@property(retain, nonatomic) MDImageNode *nodeContentImageBack; // @synthesize nodeContentImageBack=_nodeContentImageBack;
@property(retain, nonatomic) MDViewNode *nodeGroupContent; // @synthesize nodeGroupContent=_nodeGroupContent;
@property(retain, nonatomic) MDViewNode *nodeTopContent; // @synthesize nodeTopContent=_nodeTopContent;
@property(retain, nonatomic) MDViewNode *nodeJoinButton; // @synthesize nodeJoinButton=_nodeJoinButton;
@property(retain, nonatomic) MDImageTextNode *nodeTopSubtitle; // @synthesize nodeTopSubtitle=_nodeTopSubtitle;
@property(retain, nonatomic) MDLabelNode *nodeGroupName; // @synthesize nodeGroupName=_nodeGroupName;
@property(retain, nonatomic) MDViewNode *nodeHeadImage; // @synthesize nodeHeadImage=_nodeHeadImage;
- (void).cxx_destruct;
- (void)layoutBottomContent;
- (void)setActiveText:(id)arg1 maxWidth:(double)arg2;
- (void)layoutGroupContent;
- (void)layoutTopContent;
- (void)layout;
- (void)setupSeparator;
- (void)setupAsyncComposeBottomContent;
- (void)setupAsyncComposeGroupContent;
- (void)setupActiveUserHeaders;
- (void)setupContentImageBack;
- (void)setupGroupContent;
- (void)setupJoinButton;
- (void)setupAsyncComposeTopContent;
- (void)setupGroupName;
- (void)setupHeadImage;
- (void)setupTopContent;
- (id)initWithNearbyGroupItem:(id)arg1;

@end

