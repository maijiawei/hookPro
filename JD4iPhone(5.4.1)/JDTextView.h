//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITextView.h"

@class NSString, UIButton, UIColor, UILabel;

@interface JDTextView : UITextView
{
    NSString *_placeholder;
    UIColor *_placeholderColor;
    long long _clearButtonMode;
    UIButton *_clearButton;
    UILabel *_placeholderLabel;
}

@property(retain, nonatomic) UILabel *placeholderLabel; // @synthesize placeholderLabel=_placeholderLabel;
@property(retain, nonatomic) UIButton *clearButton; // @synthesize clearButton=_clearButton;
@property(nonatomic) long long clearButtonMode; // @synthesize clearButtonMode=_clearButtonMode;
@property(retain, nonatomic) UIColor *placeholderColor; // @synthesize placeholderColor=_placeholderColor;
@property(retain, nonatomic) NSString *placeholder; // @synthesize placeholder=_placeholder;
- (void).cxx_destruct;
- (void)textViewTextDidEndEditing:(id)arg1;
- (void)textViewTextDidChange:(id)arg1;
- (void)textViewTextDidBeginEditing:(id)arg1;
- (void)updatePlaceholdFrame;
- (void)pressClearButton:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)setFont:(id)arg1;
- (void)setText:(id)arg1;
- (void)drawRect:(struct CGRect)arg1;
- (void)initalize;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end
