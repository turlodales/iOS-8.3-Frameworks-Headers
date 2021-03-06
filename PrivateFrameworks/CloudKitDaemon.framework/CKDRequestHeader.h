//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSDictionary, NSString, NSURL;

@interface CKDRequestHeader : NSObject <NSSecureCoding>
{
    NSDictionary *_headerDict;
    NSString *_method;
    NSURL *_url;
    NSString *_sessionConfigurationIdentifier;
    unsigned int _urlSessionTaskIdentifier;
}

+ (BOOL)supportsSecureCoding;
@property(retain, nonatomic) NSString *method; // @synthesize method=_method;
@property(nonatomic) unsigned int urlSessionTaskIdentifier; // @synthesize urlSessionTaskIdentifier=_urlSessionTaskIdentifier;
@property(retain, nonatomic) NSString *sessionConfigurationIdentifier; // @synthesize sessionConfigurationIdentifier=_sessionConfigurationIdentifier;
@property(retain, nonatomic) NSDictionary *headerDict; // @synthesize headerDict=_headerDict;
- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

