//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBCodable.h"

#import "NSCopying.h"

@class NSMutableArray, NSString;

@interface GEOPDIndexQueryNode : PBCodable <NSCopying>
{
    NSString *_field;
    NSMutableArray *_operands;
    int _type;
    NSString *_value;
}

- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operandAtIndex:(unsigned int)arg1;
- (void)addOperand:(id)arg1;
@property(retain, nonatomic) NSMutableArray *operands; // @synthesize operands=_operands;
- (void)clearOperands;
- (unsigned int)operandsCount;
@property(retain, nonatomic) NSString *field; // @synthesize field=_field;
@property(readonly, nonatomic) BOOL hasField;
@property(readonly, nonatomic) BOOL hasValue;
- (id)dictionaryRepresentation;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(nonatomic) int type; // @synthesize type=_type;
- (id)description;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (void)dealloc;

@end

