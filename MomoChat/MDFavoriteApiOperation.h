//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MDFavoriteApiOperation : NSObject
{
    _Bool _isRequesting;
    id <MDFavoriteApiOperationDelegate> _delegate;
}

@property(nonatomic) _Bool isRequesting; // @synthesize isRequesting=_isRequesting;
@property(nonatomic) id <MDFavoriteApiOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void)searchMusicWithKeyword:(id)arg1 index:(long long)arg2;
- (void)searchMovieWithKeyword:(id)arg1 index:(long long)arg2;
- (void)searchBookWithKeyword:(id)arg1 index:(long long)arg2;
- (void)searchFavoriteError:(id)arg1;
- (void)searchFavoriteFail:(id)arg1;
- (void)searchFavoriteSuccess:(id)arg1;
- (void)searchFavoriteWithType:(id)arg1 keyword:(id)arg2 index:(long long)arg3;
- (void)dealloc;

@end
