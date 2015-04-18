//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSAttributedString, NSDate, NSMutableArray, NSString;

@interface CKDBMessage : NSObject
{
    NSString *_text;
    NSString *_subject;
    NSString *_address;
    NSString *_groupID;
    NSString *_guid;
    NSString *_madridRoomname;
    NSString *_madridService;
    NSString *_madridAccount;
    NSString *_madridAccountGUID;
    NSString *_madridChatGUID;
    NSString *_madridChatIdentifier;
    BOOL _isMadrid;
    BOOL _hasBeenRead;
    BOOL _isOutgoing;
    BOOL _isVisibleByDefault;
    BOOL _isAudioMessage;
    long long _madridType;
    int _identifier;
    NSDate *_date;
    NSArray *_recipients;
    NSString *_plainBody;
    NSAttributedString *_madridAttributedBody;
    NSMutableArray *_mediaObjects;
    NSString *_voicemailString;
    NSString *_madridAccountLogin;
}

@property(readonly, retain, nonatomic) NSString *groupID; // @dynamic groupID;
@property(readonly, retain, nonatomic) NSString *guid; // @synthesize guid=_guid;
- (id)initWithRecordID:(int)arg1;
@property(readonly, retain, nonatomic) NSString *madridChatIdentifier; // @synthesize madridChatIdentifier=_madridChatIdentifier;
@property(readonly, nonatomic) BOOL isVisibleByDefault; // @synthesize isVisibleByDefault=_isVisibleByDefault;
@property(readonly, nonatomic) NSString *madridChatGUID; // @synthesize madridChatGUID=_madridChatGUID;
@property(readonly, retain, nonatomic) NSAttributedString *madridAttributedBody; // @synthesize madridAttributedBody=_madridAttributedBody;
@property(readonly, nonatomic) long long madridType; // @synthesize madridType=_madridType;
@property(readonly, nonatomic) BOOL isOutgoing; // @synthesize isOutgoing=_isOutgoing;
@property(readonly, nonatomic) BOOL hasBeenRead; // @synthesize hasBeenRead=_hasBeenRead;
@property(readonly, retain, nonatomic) NSString *madridAccountGUID; // @synthesize madridAccountGUID=_madridAccountGUID;
@property(readonly, retain, nonatomic) NSString *madridAccountLogin; // @synthesize madridAccountLogin=_madridAccountLogin;
@property(readonly, retain, nonatomic) NSString *madridService; // @synthesize madridService=_madridService;
@property(readonly, retain, nonatomic) NSString *madridRoomname; // @synthesize madridRoomname=_madridRoomname;
@property(readonly, retain, nonatomic) NSString *formattedAddress; // @dynamic formattedAddress;
@property(readonly, copy, nonatomic) NSString *attachmentText;
- (id)initWithMadridMessageGUID:(id)arg1;
- (id)alertImage;
@property(readonly, nonatomic) BOOL isMadrid; // @synthesize isMadrid=_isMadrid;
- (id)voicemailString;
- (BOOL)senderIsVoicemail;
- (id)attachmentText:(BOOL)arg1;
- (id)previewText;
@property(readonly, nonatomic) BOOL isAudioMessage; // @synthesize isAudioMessage=_isAudioMessage;
@property(readonly, retain, nonatomic) NSString *plainBody;
@property(readonly, retain, nonatomic) NSArray *mediaObjects; // @synthesize mediaObjects=_mediaObjects;
@property(readonly, retain, nonatomic) NSString *subject; // @synthesize subject=_subject;
@property(nonatomic) int identifier; // @synthesize identifier=_identifier;
@property(readonly, retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(readonly, retain, nonatomic) NSDate *date; // @synthesize date=_date;
- (id)description;
- (void)dealloc;
@property(readonly, retain, nonatomic) NSString *address; // @synthesize address=_address;
@property(readonly, copy, nonatomic) NSArray *recipients; // @dynamic recipients;
@property(readonly, nonatomic) BOOL hasAttachments; // @dynamic hasAttachments;

@end

