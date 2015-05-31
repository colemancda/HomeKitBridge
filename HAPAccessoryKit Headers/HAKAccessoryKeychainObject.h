/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

@import Foundation;

@class HAKKeychainKey, NSArray, NSString;

@interface HAKAccessoryKeychainObject : NSObject
{
    NSString *_identifier;
    HAKKeychainKey *_key;
}

@property(retain, nonatomic) HAKKeychainKey *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;

- (BOOL)removeController:(id)arg1 error:(id *)arg2;
- (BOOL)addController:(id)arg1 error:(id *)arg2;
- (id)controllerWithIdentifier:(id)arg1;
@property(readonly, nonatomic) NSArray *controllers;
- (id)initWithIdentifier:(id)arg1;

@end

