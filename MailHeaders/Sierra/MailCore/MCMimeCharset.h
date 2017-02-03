//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

//#import "NSObject.h"

@class NSString;

@interface MCMimeCharset : NSObject
{
    BOOL _useBase64InHeaders;	// 8 = 0x8
    BOOL _canBeUsedForOutgoingMessages;	// 9 = 0x9
    unsigned long long _encoding;	// 16 = 0x10
    NSString *_charsetName;	// 24 = 0x18
}

+ (id)encodingVariantsForRecipients:(id)arg1;	// IMP=0x0000000000059f4f
+ (unsigned long long)encodingVariantForEncoding:(unsigned long long)arg1 address:(id)arg2;	// IMP=0x0000000000059e0d
+ (id)preferredMimeCharset;	// IMP=0x0000000000059da2
+ (id)charsetForEncoding:(unsigned long long)arg1;	// IMP=0x0000000000059ce8
+ (id)allMimeCharsets;	// IMP=0x00000000000595e9
@property(readonly, nonatomic) BOOL canBeUsedForOutgoingMessages; // @synthesize canBeUsedForOutgoingMessages=_canBeUsedForOutgoingMessages;
@property(readonly, nonatomic) BOOL useBase64InHeaders; // @synthesize useBase64InHeaders=_useBase64InHeaders;
@property(readonly, copy, nonatomic) NSString *charsetName; // @synthesize charsetName=_charsetName;
@property(readonly) unsigned long long encoding; // @synthesize encoding=_encoding;
- (void).cxx_destruct;	// IMP=0x000000000005aaaa
- (id)description;	// IMP=0x000000000005a98b
@property(readonly, copy, nonatomic) NSString *displayName;
- (id)init;	// IMP=0x000000000005a887
- (id)initWithCFEncoding:(unsigned int)arg1;	// IMP=0x000000000005a44d

@end
