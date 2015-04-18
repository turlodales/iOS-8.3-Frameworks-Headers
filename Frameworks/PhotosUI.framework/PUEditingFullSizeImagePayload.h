//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface PUEditingFullSizeImagePayload : NSObject <NSSecureCoding>
{
    NSURL *_url;
    int _imageOrientation;
    NSString *_sandboxExtensionToken;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(retain, nonatomic, setter=setURL:) NSURL *url; // @synthesize url=_url;
@property(nonatomic) int imageOrientation; // @synthesize imageOrientation=_imageOrientation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(retain, nonatomic) NSString *sandboxExtensionToken; // @synthesize sandboxExtensionToken=_sandboxExtensionToken;

@end

