//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSString;

@interface AFSpeechCorrectionInfo : NSObject <NSSecureCoding>
{
    int _alternativeSelectionCount;
    int _characterModificationCount;
    NSString *_correctedText;
}

+ (BOOL)supportsSecureCoding;
@property(copy, nonatomic) NSString *correctedText; // @synthesize correctedText=_correctedText;
@property(nonatomic) int characterModificationCount; // @synthesize characterModificationCount=_characterModificationCount;
@property(nonatomic) int alternativeSelectionCount; // @synthesize alternativeSelectionCount=_alternativeSelectionCount;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

