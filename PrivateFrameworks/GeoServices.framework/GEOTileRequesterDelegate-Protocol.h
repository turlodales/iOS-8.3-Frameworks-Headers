//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class GEOTileRequester, NSData, NSDictionary, NSError, NSString;

@protocol GEOTileRequesterDelegate
- (void)tileRequesterFinished:(GEOTileRequester *)arg1;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedError:(NSError *)arg2;
- (void)tileRequester:(GEOTileRequester *)arg1 receivedData:(NSData *)arg2 tileEdition:(unsigned int)arg3 tileSet:(unsigned int)arg4 etag:(NSString *)arg5 forKey:(struct _GEOTileKey)arg6 userInfo:(NSDictionary *)arg7;
@end

