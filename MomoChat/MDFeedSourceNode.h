//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MDViewNode.h"

@class MDFeedResource, MDImageNode, MDTextNode;

@interface MDFeedSourceNode : MDViewNode
{
    MDTextNode *_nodeTitle;
    MDTextNode *_nodeDesc;
    MDTextNode *_nodeSubDesc;
    MDImageNode *_nodeIcon;
    MDFeedResource *_feedResource;
}

@property(retain, nonatomic) MDFeedResource *feedResource; // @synthesize feedResource=_feedResource;
@property(retain, nonatomic) MDImageNode *nodeIcon; // @synthesize nodeIcon=_nodeIcon;
@property(retain, nonatomic) MDTextNode *nodeSubDesc; // @synthesize nodeSubDesc=_nodeSubDesc;
@property(retain, nonatomic) MDTextNode *nodeDesc; // @synthesize nodeDesc=_nodeDesc;
@property(retain, nonatomic) MDTextNode *nodeTitle; // @synthesize nodeTitle=_nodeTitle;
- (void).cxx_destruct;
- (void)decorateFeedResourceView:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

