/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "HAKPairingCharacteristic.h"

#import "HAKPairVerifySessionDelegate-Protocol.h"

@class NSString;

@interface HAKPairVerifyCharacteristic : HAKPairingCharacteristic <HAKPairVerifySessionDelegate>
{
}

+ (id)pairVerifyCharacteristic;
- (id)handleReadRequest:(id)arg1;
- (id)handleWriteRequest:(id)arg1;
- (void)pairVerifySession:(id)arg1 verifiedPairingWithIdentifier:(id)arg2 sharedSecret:(id)arg3;
- (id)initWithType:(id)arg1 properties:(unsigned long long)arg2 format:(unsigned long long)arg3;



@end

