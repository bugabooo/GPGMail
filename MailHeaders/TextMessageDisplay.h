/*
 *     Generated by class-dump 3.2 (32 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2009 by Steve Nygard.
 */

#import "NSObject.h"

#import "MessageContentDisplay-Protocol.h"

@class MessageBody, MessageTextView, NSInvocation, NSScrollView;

@interface TextMessageDisplay : NSObject <MessageContentDisplay>
{
    NSScrollView *messageScroll;
    MessageTextView *textView;
    MessageBody *messageBody;
    BOOL needsSetUp;
    NSInvocation *displayChangedInvocation;
    id _delegate;
}

+ (id)copyDocumentForMessage:(id)arg1 viewingState:(id)arg2;
- (void)dealloc;
- (id)findTarget;
- (id)contentView;
- (id)textView;
- (void)awakeFromNib;
- (void)display:(id)arg1 inContainerView:(id)arg2 replacingView:(id)arg3 invokeWhenDisplayChanged:(id)arg4;
- (void)prepareToRemoveView;
- (id)selectedTextRepresentation;
- (void)setSelectedTextRepresentation:(id)arg1;
- (id)selectedText;
- (id)selectionParsedMessage;
- (id)attachmentsInSelection;
- (id)parsedMessage;
- (void)highlightSearchText:(id)arg1;
- (void)adjustFontSizeBy:(long)arg1 viewingState:(id)arg2;
- (void)displayAttributedString:(id)arg1;
- (id)messageTextView:(id)arg1 willReturnMenu:(id)arg2 forEvent:(id)arg3;
- (void)detectDataInMessage:(id)arg1 usingContext:(id)arg2;
- (void)cancelDataDetection;
- (void)_setDisplayChangedInvocation:(id)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end
