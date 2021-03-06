/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
 */

@class PSSpecifier;

@interface PSLocaleController : PSListController {
    PSSpecifier *_checkedSpecifier;
    BOOL _firstAppearance;
}

- (void)addLanguage:(id)arg1 toSupportedLanguages:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)locale:(id)arg1;
- (void)localeChangedAction;
- (void)setLocale:(id)arg1 specifier:(id)arg2;
- (id)specifiers;
- (void)subcategorySelected:(id)arg1 specifier:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)updateChecked:(id)arg1;
- (void)viewWillAppear:(BOOL)arg1;

@end
