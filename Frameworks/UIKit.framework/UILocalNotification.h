/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class NSCalendar, NSDate, NSDictionary, NSString, NSTimeZone;

@interface UILocalNotification : NSObject <NSCopying, NSCoding> {
}

@property(copy) NSString * alertAction;
@property(copy) NSString * alertBody;
@property(copy) NSString * alertLaunchImage;
@property BOOL allowSnooze;
@property int applicationIconBadgeNumber;
@property(copy) NSString * customLockSliderLabel;
@property(copy) NSDate * fireDate;
@property BOOL fireNotificationsWhenAppRunning;
@property(copy) NSString * firedNotificationName;
@property BOOL hasAction;
@property BOOL hideAlertTitle;
@property BOOL interruptAudioAndLockDevice;
@property BOOL isSystemAlert;
@property int remainingRepeatCount;
@property(copy) NSCalendar * repeatCalendar;
@property unsigned int repeatInterval;
@property BOOL resumeApplicationInBackground;
@property BOOL showAlarmStatusBarItem;
@property(copy) NSString * snoozedNotificationName;
@property(copy) NSString * soundName;
@property int soundType;
@property(copy) NSTimeZone * timeZone;
@property int totalRepeatCount;
@property(copy) NSDictionary * userInfo;

+ (id)alloc;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (void)clearNonSystemProperties;
- (int)compareFireDates:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isValid;
- (id)nextFireDateAfterDate:(id)arg1 localTimeZone:(id)arg2;
- (id)nextFireDateForLastFireDate:(id)arg1;

@end
