//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <Foundation/NSCoder.h>

@interface NSUnarchiver : NSCoder
{
    void *datax;
    unsigned int cursor;
    struct _NSZone *objectZone;
    unsigned int systemVersion;
    BOOL streamerVersion;
    BOOL swap;
    BOOL unused1;
    BOOL unused2;
    void *pointerTable;
    void *stringTable;
    id classVersions;
    int lastLabel;
    void *map;
    void *allUnarchivedObjects;
    id reserved;
}

+ (id)unarchiveObjectWithFile:(id)arg1;
+ (id)unarchiveObjectWithData:(id)arg1;
+ (void)initialize;
+ (id)classNameDecodedForArchiveClassName:(id)arg1;
+ (void)decodeClassName:(id)arg1 asClassName:(id)arg2;
- (void)finalize;
- (void)_setAllowedClasses:(id)arg1;
- (int)versionForClassName:(id)arg1;
- (void *)decodeBytesWithReturnedLength:(unsigned int *)arg1;
- (void)decodeArrayOfObjCType:(const char *)arg1 count:(unsigned int)arg2 at:(void *)arg3;
- (void)decodeValuesOfObjCTypes:(const char *)arg1;
- (id)decodeObject;
- (id)decodeDataObject;
- (void)decodeValueOfObjCType:(const char *)arg1 at:(void *)arg2;
- (void)replaceObject:(id)arg1 withObject:(id)arg2;
- (id)initForReadingWithData:(id)arg1;
@property(readonly, getter=isAtEnd) BOOL atEnd;
- (id)data;
@property(readonly) unsigned int systemVersion;
- (void)dealloc;
- (struct _NSZone *)objectZone;
- (void)setObjectZone:(struct _NSZone *)arg1;
- (id)classNameDecodedForArchiveClassName:(id)arg1;
- (void)decodeClassName:(id)arg1 asClassName:(id)arg2;

@end

