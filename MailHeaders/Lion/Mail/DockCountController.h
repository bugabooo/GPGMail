/*
 *     Generated by class-dump 3.3.3 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2010 by Steve Nygard.
 */



@class MailboxUid;

@interface DockCountController : NSObject
{
    MailboxUid *_mailBadgeMailbox;
    int _mailBadgeScope;
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)clearCountAndStopUpdating;
- (void)_setDockBadgeForCount:(id)arg1;
- (void)_mailboxWillBeInvalidated:(id)arg1;
- (void)_setMailBadgeMailbox:(id)arg1;
- (id)mailBadgeMailbox;
- (void)_updateUnreadCount;
- (void)unreadCountChanged:(id)arg1;
- (int)mailBadgeScope;
- (void)setMailBadgeScope:(int)arg1 mailbox:(id)arg2;

@end

