//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FirmwareBundle, NSMutableData;

@interface iAUPServer : NSObject
{
    id <iAUPServerDelegate> _delegate;
    int _parserState;
    BOOL _escapeInProgress;
    unsigned int _telegramLength;
    unsigned char _telegramChecksum;
    NSMutableData *_telegramDataIn;
    unsigned short objectBlockTransferSizes[4];
    unsigned int _firmwareImageBaseTransferAddress;
    FirmwareBundle *firmwareBundle;
}

+ (id)sharedServer;
@property(retain) FirmwareBundle *firmwareBundle; // @synthesize firmwareBundle;
- (void)setBootloaderEntry;
- (void)processDataFromAccessory:(id)arg1;
- (unsigned int)supportedTargetProductIDCode;
- (unsigned char)appendByteWithEscaping:(unsigned char)arg1 toObject:(id *)arg2;
- (void)sendCommand:(unsigned char)arg1 payload:(char *)arg2 payload_length:(unsigned short)arg3;
- (void)logCommand:(unsigned char)arg1 payload:(char *)arg2 length:(unsigned int)arg3;
- (void)processInTelegram;
- (void)resetParser;
- (void)processInByte:(unsigned char)arg1;
- (void)appendToLog:(id)arg1;
@property id <iAUPServerDelegate> delegate; // @synthesize delegate=_delegate;
- (id)init;
- (void)dealloc;

@end

