//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class BWBracketSettings, FigCaptureStillImageSettings;

@protocol BWBracketSettingsProvider <NSObject>
- (BWBracketSettings *)bracketSettingsForBracketingMode:(int)arg1 withCurrentFrameStats:(CDStruct_1d2e688e *)arg2 stillImageSettings:(FigCaptureStillImageSettings *)arg3;
- (int)bracketCountForBracketingMode:(int)arg1 withCurrentFrameStats:(CDStruct_1d2e688e *)arg2 stillImageSettings:(FigCaptureStillImageSettings *)arg3;
- (int)worstCaseInitialMaxBracketCountForBracketingMode:(int)arg1;
@end

