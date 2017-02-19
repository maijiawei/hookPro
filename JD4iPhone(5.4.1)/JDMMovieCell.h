//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class NSDictionary, UIImageView, UILabel;

@interface JDMMovieCell : UITableViewCell
{
    UIImageView *m_movieImgView;
    UILabel *m_movieNameLab;
    UILabel *m_movieActorLab;
    UILabel *m_movieDirectorLab;
    UILabel *m_movieDirectorTitleLab;
    UILabel *m_movieActorTitleLab;
    UILabel *m_movieScoreLab;
    UIImageView *m_movieTypeImgView;
    UILabel *m_movieReleaseDateLab;
    UIImageView *m_movieTypeImg;
    UIImageView *m_goupiaoBtn;
    NSDictionary *m_movieDic;
    UIImageView *m_prebuyBtn;
    UILabel *m_actPriceLabel;
    UILabel *m_todayShowNumLabel;
    UILabel *m_wannacNumLab;
}

@property(retain, nonatomic) UILabel *m_wannacNumLab; // @synthesize m_wannacNumLab;
@property(retain, nonatomic) UILabel *m_todayShowNumLabel; // @synthesize m_todayShowNumLabel;
@property(retain, nonatomic) UILabel *m_actPriceLabel; // @synthesize m_actPriceLabel;
@property(retain, nonatomic) UIImageView *m_prebuyBtn; // @synthesize m_prebuyBtn;
@property(retain, nonatomic) NSDictionary *m_movieDic; // @synthesize m_movieDic;
@property(retain, nonatomic) UIImageView *m_goupiaoBtn; // @synthesize m_goupiaoBtn;
@property(retain, nonatomic) UIImageView *m_movieTypeImg; // @synthesize m_movieTypeImg;
@property(retain, nonatomic) UILabel *m_movieReleaseDateLab; // @synthesize m_movieReleaseDateLab;
@property(retain, nonatomic) UIImageView *m_movieTypeImgView; // @synthesize m_movieTypeImgView;
@property(retain, nonatomic) UILabel *m_movieScoreLab; // @synthesize m_movieScoreLab;
@property(retain, nonatomic) UILabel *m_movieActorTitleLab; // @synthesize m_movieActorTitleLab;
@property(retain, nonatomic) UILabel *m_movieDirectorTitleLab; // @synthesize m_movieDirectorTitleLab;
@property(retain, nonatomic) UILabel *m_movieDirectorLab; // @synthesize m_movieDirectorLab;
@property(retain, nonatomic) UILabel *m_movieActorLab; // @synthesize m_movieActorLab;
@property(retain, nonatomic) UILabel *m_movieNameLab; // @synthesize m_movieNameLab;
@property(retain, nonatomic) UIImageView *m_movieImgView; // @synthesize m_movieImgView;
- (void)dealloc;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)fillDataWithDic:(id)arg1 withType:(long long)arg2;
- (id)handleLikeNumber:(id)arg1;
- (void)gotoGoupiao;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
