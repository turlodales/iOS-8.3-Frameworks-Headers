//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MPMediaQuery.h"

@class MPMediaPlaylist, NSString;

@interface MPMediaQuery (MCDAdditions)
+ (id)MCD_queryWithFilterPredicates:(id)arg1;
- (id)_music_nowPlayingComparableQuery;
@property(readonly, nonatomic, getter=MCD_playlistTitle) NSString *MCD_playlistTitle;
@property(readonly, nonatomic, getter=MCD_playlist) MPMediaPlaylist *MCD_playlist;
- (BOOL)MCD_isEqualToNowPlayingQuery:(id)arg1;
@end

