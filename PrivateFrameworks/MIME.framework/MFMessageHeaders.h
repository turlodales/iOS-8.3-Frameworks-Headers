//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSData;

@interface MFMessageHeaders : NSObject <NSCopying>
{
    NSData *_data;
    unsigned long _preferredEncoding;
}

+ (id)basicHeaders;
+ (BOOL)isStructuredHeaderKey:(id)arg1;
+ (id)uniqueHeaderKeyStringForString:(id)arg1;
+ (id)addressListFromEncodedString:(id)arg1;
+ (id)encodedDataForAddressList:(id)arg1 splittingAtLength:(unsigned int)arg2 firstLineBuffer:(unsigned int)arg3;
+ (id)copyAddressListFromEncodedData:(id)arg1 encoding:(unsigned long)arg2;
+ (BOOL)shouldDecodeHeaderForKey:(id)arg1;
- (id)references;
- (id)_capitalizedKeyForKey:(id)arg1;
- (id)headersForKey:(id)arg1;
- (id)initWithHeaderData:(id)arg1 encoding:(unsigned long)arg2;
- (id)copyFirstStringValueForKey:(id)arg1;
- (id)copyAddressListForBcc;
- (id)copyHeadersForKey:(id)arg1;
- (id)firstSenderAddress;
- (id)copyAddressListForCc;
- (id)copyAddressListForTo;
- (void)appendHeaderData:(id)arg1 andRecipients:(id)arg2;
- (id)copyAddressListForSender;
- (id)copyAddressListForResentFrom;
- (id)encodedHeaders;
- (id)firstHeaderForKey:(id)arg1;
- (void)setPreferredEncoding:(unsigned long)arg1;
- (unsigned long)preferredEncoding;
- (id)headerData;
- (BOOL)messageIsFromEntourage;
- (BOOL)hasHeaderForKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1;
- (BOOL)_isStructuredHeaderKey:(id)arg1;
- (id)_headerValueForKey:(id)arg1 offset:(unsigned int *)arg2;
- (id)copyFirstHeaderForKey:(id)arg1;
- (id)_copyAddressListForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1;
- (id)_copyHeaderValueForKey:(id)arg1 offset:(unsigned int *)arg2 decoded:(BOOL)arg3;
- (id)copyDecodedStringFromHeaderData:(id)arg1 withRange:(struct _NSRange)arg2;
- (unsigned long)_contentTypeEncoding;
- (id)copyFirstNonDecodedHeaderForKey:(id)arg1;
- (void)_setCapitalizedKey:(id)arg1 forKey:(id)arg2;
- (id)_decodeHeaderKeysFromData:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)mutableCopy;
- (id)description;
- (id)init;
- (void)dealloc;
- (id)copyAddressListForReplyTo;
- (id)allHeaderKeys;

@end

