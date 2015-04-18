//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSSecureCoding.h"

@class NSString, NSURL;

@interface CPLResourceIdentity : NSObject <NSSecureCoding, NSCopying>
{
    BOOL _available;
    NSURL *_fileURL;
    NSString *_fingerPrint;
    unsigned int _fileSize;
    NSString *_fileUTI;
    struct CGSize _imageDimensions;
}

+ (id)alloc;
+ (id)fingerPrintForFileAtURL:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (Class)resourceIdentityImplementation;
+ (void)setResourceIdentityImplementation:(Class)arg1;
+ (Class)_identityImplementationClass;
+ (id)identityForStorageName:(id)arg1;
+ (id)storageNameForFingerPrint:(id)arg1 fileUTI:(id)arg2 bucket:(id *)arg3;
+ (id)fingerPrintForFD:(int)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)extensionForFileUTI:(id)arg1;
+ (id)fingerPrintForData:(id)arg1 typeIdentifier:(id)arg2 error:(id *)arg3;
+ (id)fileUTIForExtension:(id)arg1;
+ (id)identityFromStoredIdentity:(id)arg1;
+ (BOOL)supportsSecureCoding;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(copy, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property(copy, nonatomic) NSString *fingerPrint; // @synthesize fingerPrint=_fingerPrint;
@property(copy, nonatomic) NSString *fileUTI; // @synthesize fileUTI=_fileUTI;
@property(nonatomic, getter=isAvailable) BOOL available; // @synthesize available=_available;
@property(nonatomic) struct CGSize imageDimensions; // @synthesize imageDimensions=_imageDimensions;
@property(nonatomic) unsigned int fileSize; // @synthesize fileSize=_fileSize;
- (id)identityForStorage;
- (id)initWithFileURL:(id)arg1;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

