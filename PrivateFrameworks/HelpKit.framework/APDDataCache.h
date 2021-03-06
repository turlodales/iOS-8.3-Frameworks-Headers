//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"
#import "NSCopying.h"

@class NSDate, NSString;

@interface APDDataCache : NSObject <NSCopying, NSCoding>
{
    unsigned int _cacheType;
    int _maxAge;
    unsigned int _fileSize;
    NSString *_identifier;
    NSString *_lastModified;
    NSString *_locale;
    NSDate *_updatedDate;
}

@property(retain, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property(nonatomic) int maxAge; // @synthesize maxAge=_maxAge;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
@property(readonly, nonatomic) BOOL expired; // @dynamic expired;
@property(retain, nonatomic) NSDate *updatedDate; // @synthesize updatedDate=_updatedDate;
@property(nonatomic) unsigned int cacheType; // @synthesize cacheType=_cacheType;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

