/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol HAKServiceDelegate <NSObject>

@optional
- (void)service:(id)arg1 didRemoveCharacteristic:(id)arg2;
- (void)service:(id)arg1 didFailToAddCharacteristic:(id)arg2 error:(id)arg3;
- (void)service:(id)arg1 didAddCharacteristic:(id)arg2;
@end

