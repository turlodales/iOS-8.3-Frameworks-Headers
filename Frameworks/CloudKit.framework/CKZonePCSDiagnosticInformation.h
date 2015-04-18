//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSError, NSString;

@interface CKZonePCSDiagnosticInformation : NSObject <NSSecureCoding>
{
    BOOL _wasRepaired;
    int _pcsStatus;
    NSString *_pcsDiagnosticString;
    NSError *_pcsError;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) BOOL wasRepaired; // @synthesize wasRepaired=_wasRepaired;
@property(nonatomic) int pcsStatus; // @synthesize pcsStatus=_pcsStatus;
@property(retain, nonatomic) NSString *pcsDiagnosticString; // @synthesize pcsDiagnosticString=_pcsDiagnosticString;
@property(retain, nonatomic) NSError *pcsError; // @synthesize pcsError=_pcsError;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

