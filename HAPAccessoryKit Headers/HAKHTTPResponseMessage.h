/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "HAKHTTPMessage.h"

@class NSData, NSDate, NSString;

@interface HAKHTTPResponseMessage : HAKHTTPMessage
{
    NSString *_statusDescription;
}

@property(readonly, nonatomic) NSString *statusDescription; // @synthesize statusDescription=_statusDescription;

- (void)setDateToNow;
@property(retain, nonatomic) NSDate *date;
@property(retain, nonatomic) NSString *contentType;
@property(nonatomic) unsigned long long contentLength;
- (void)setValue:(id)arg1 forHeaderField:(id)arg2;
@property(retain, nonatomic) NSData *body;
@property(readonly, nonatomic) unsigned long long statusCode;

- (id)initWithRequest:(id)arg1 statusCode:(unsigned long long)arg2 statusDescription:(id)arg3 httpVersion:(id)arg4;
- (id)initWithRequest:(id)arg1 statusCode:(unsigned long long)arg2;

@property(retain, nonatomic) id JSONObject;
@property(retain, nonatomic) NSData *tlv8Data;

@end

