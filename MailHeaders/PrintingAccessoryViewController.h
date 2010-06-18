/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSViewController.h"

#import "NSPrintPanelAccessorizing-Protocol.h"

@class MessagePrinter, NSMatrix;

@interface PrintingAccessoryViewController : NSViewController <NSPrintPanelAccessorizing>
{
    MessagePrinter *_messagePrinter;
    NSMatrix *_scalingBehaviorMatrix;
}

- (id)initWithMessagePrinter:(id)arg1;
- (void)setScalingBehavior:(unsigned long)arg1;
- (void)updateScalingBehavior:(id)arg1;
- (void)setRepresentedObject:(id)arg1;
- (unsigned long)scalingBehavior;
- (id)stringForScalingBehavior;
- (id)keyPathsForValuesAffectingPreview;
- (id)localizedSummaryItems;

@end
