/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@import Foundation;

@class NSMutableArray;

@interface HAKTLV8Container : NSObject <NSCopying, NSCoding>
{
    NSMutableArray *_packets;
}





- (id)numberForType:(unsigned char)arg1;
- (void)setUnsignedLongLong:(unsigned long long)arg1 forType:(unsigned char)arg2;
- (void)setUnsignedInt:(unsigned int)arg1 forType:(unsigned char)arg2;
- (void)setUnsignedShort:(unsigned short)arg1 forType:(unsigned char)arg2;
- (void)setUnsignedChar:(unsigned char)arg1 forType:(unsigned char)arg2;
- (unsigned long long)sizeOfNumber:(id)arg1;
- (id)stringForType:(unsigned char)arg1;
- (void)setString:(id)arg1 forType:(unsigned char)arg2;
- (id)dataForType:(unsigned char)arg1;
- (void)setData:(id)arg1 forType:(unsigned char)arg2;
- (BOOL)voidForType:(unsigned char)arg1;
- (void)setVoidType:(unsigned char)arg1;
- (id)serialize;
- (void)removePacketsWithType:(unsigned char)arg1;

- (id)initWithData:(id)arg1;


@end

