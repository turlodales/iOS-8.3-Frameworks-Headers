//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface ML3AlbumData : NSObject
{
    unsigned char _section;
    NSString *_sortAlbum;
    int _userRating;
    int _albumYear;
    long long _albumPID;
    long long _order;
}

@property(nonatomic) long long albumPID; // @synthesize albumPID=_albumPID;
- (id)initWithAlbumPID:(long long)arg1 sortAlbum:(id)arg2 userRating:(int)arg3 albumYear:(int)arg4 order:(long long)arg5 section:(unsigned char)arg6;
@property(nonatomic) int albumYear; // @synthesize albumYear=_albumYear;
@property(retain, nonatomic) NSString *sortAlbum; // @synthesize sortAlbum=_sortAlbum;
@property(nonatomic) int userRating; // @synthesize userRating=_userRating;
@property(nonatomic) unsigned char section; // @synthesize section=_section;
- (void).cxx_destruct;
@property(nonatomic) long long order; // @synthesize order=_order;

@end
