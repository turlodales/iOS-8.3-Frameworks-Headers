//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AssistantServices/AFSiriRequest.h>

@class NSArray;

@interface AFGetSettingsRequest : AFSiriRequest
{
    NSArray *_settings;
}

+ (BOOL)supportsSecureCoding;
- (id)createResponse;
- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *settings; // @synthesize settings=_settings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

