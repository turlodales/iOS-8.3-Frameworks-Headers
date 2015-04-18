//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface CompassShader : NSObject
{
    struct map<std::__1::basic_string<char>, int, std::__1::less<std::__1::basic_string<char>>, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, int>>> _uniforms;
    NSArray *_uniformNames;
    NSString *_fragmentName;
    NSString *_vertexName;
    unsigned int _program;
}

- (BOOL)validateProgram:(unsigned int)arg1;
- (int)locationForUniform:(id)arg1;
- (id)initWithName:(id)arg1 uniformNames:(id)arg2;
- (BOOL)linkProgram:(unsigned int)arg1;
- (BOOL)compileShader:(unsigned int *)arg1 type:(unsigned int)arg2 file:(id)arg3;
- (BOOL)loadShader;
- (id)initWithFragmentName:(id)arg1 vertexName:(id)arg2 uniformNames:(id)arg3;
- (void).cxx_destruct;
- (id).cxx_construct;
- (void)use;
- (void)dealloc;
@property(nonatomic) unsigned int program; // @synthesize program=_program;

@end

