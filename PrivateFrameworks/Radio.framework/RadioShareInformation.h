//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSString, NSURL, RadioArtworkCollection;

@interface RadioShareInformation : NSObject <NSCopying>
{
    RadioArtworkCollection *_artworkCollection;
    NSString *_messageMIMEType;
    NSString *_message;
    NSString *_subject;
    NSURL *_URL;
}

@property(readonly, copy, nonatomic) RadioArtworkCollection *artworkCollection; // @synthesize artworkCollection=_artworkCollection;
@property(readonly, copy, nonatomic) NSString *messageMIMEType; // @synthesize messageMIMEType=_messageMIMEType;
- (id)_initWithShareInfoResponse:(id)arg1;
@property(readonly, copy, nonatomic) NSString *subject; // @synthesize subject=_subject;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, copy, nonatomic) NSString *message; // @synthesize message=_message;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

