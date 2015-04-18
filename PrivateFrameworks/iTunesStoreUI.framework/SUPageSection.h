//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, SSMutableURLRequestProperties, SSURLRequestProperties, UIImage;

@interface SUPageSection : NSObject
{
    double _expirationTime;
    NSString *_identifier;
    UIImage *_image;
    int _structuredPageType;
    NSString *_title;
    SSMutableURLRequestProperties *_urlRequestProperties;
    id _userInfo;
}

@property(nonatomic) int structuredPageType; // @synthesize structuredPageType=_structuredPageType;
@property(readonly, nonatomic) id segmentedControlItem;
- (void)_setURLBagKey:(id)arg1;
@property(copy, nonatomic) SSURLRequestProperties *URLRequestProperties; // @synthesize URLRequestProperties=_urlRequestProperties;
- (BOOL)loadFromDictionary:(id)arg1;
@property(nonatomic) double expirationTime; // @synthesize expirationTime=_expirationTime;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) id userInfo; // @synthesize userInfo=_userInfo;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
- (BOOL)isEqual:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)_setURL:(id)arg1;

@end

