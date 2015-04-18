//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;

@interface QLPreviewParts : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    NSString *_password;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    id _delegate;
    int _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL *previewURL;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    const void *representedObject;
    CDStruct_6a83575d representedObjectCallbacks;
    long representedObjectProtection;
    BOOL htmlErrorDisabled;
}

+ (id)relativeStringForSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (void)unregisterPreview:(id)arg1;
+ (void)registerPreview:(id)arg1;
@property(readonly, nonatomic) NSURLResponse *previewResponse;
- (id)safeRequestForRequest:(id)arg1;
@property(readonly, nonatomic) NSURLRequest *previewRequest;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(readonly) float pageHeight; // @synthesize pageHeight=_pageHeight;
@property(readonly) float pageWidth; // @synthesize pageWidth=_pageWidth;
- (void)setError:(id)arg1;
@property(readonly, nonatomic) NSSet *attachmentURLs;
@property(retain, nonatomic) NSString *password; // @synthesize password=_password;
@property(retain, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property(readonly) int pageCount; // @synthesize pageCount=_pageCount;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(readonly, getter=isCancelled) BOOL cancelled;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void)dealloc;
- (void)cancel;
@property(nonatomic) BOOL progressive; // @synthesize progressive=_progressive;
- (unsigned long)cfEncodingForAttachmentURL:(id)arg1;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (const void *)documentObject;
- (void)setDocumentObject:(const void *)arg1 callbacks:(const CDStruct_6a83575d *)arg2;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;
- (void)_discardRepresentedObjectSafely;
- (void)computePreview;
- (void)_protectRepresentedObjectSafely;
- (void)computePreviewInThread;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
@property BOOL htmlErrorDisabled; // @synthesize htmlErrorDisabled;
- (void)startComputingPreview;
@property(retain, nonatomic) NSString *uti; // @synthesize uti=_uti;
@property(readonly, getter=isComputed) BOOL computed;
@property(readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL;

@end

