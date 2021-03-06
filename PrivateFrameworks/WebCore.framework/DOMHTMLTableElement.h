/* Generated by RuntimeBrowser.
   Image: /Applications/Xcode.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebCore.framework/WebCore
 */

@class DOMHTMLTableSectionElement, NSString, DOMHTMLCollection, DOMHTMLTableCaptionElement;

@interface DOMHTMLTableElement : DOMHTMLElement  {
}

@property(retain) DOMHTMLTableCaptionElement * caption;
@property(retain) DOMHTMLTableSectionElement * tHead;
@property(retain) DOMHTMLTableSectionElement * tFoot;
@property(readonly) DOMHTMLCollection * rows;
@property(readonly) DOMHTMLCollection * tBodies;
@property(copy) NSString * align;
@property(copy) NSString * bgColor;
@property(copy) NSString * border;
@property(copy) NSString * cellPadding;
@property(copy) NSString * cellSpacing;
@property(copy) NSString * frameBorders;
@property(copy) NSString * rules;
@property(copy) NSString * summary;
@property(copy) NSString * width;


- (void)deleteRow:(int)arg1;
- (id)insertRow:(int)arg1;
- (void)setWidth:(id)arg1;
- (id)width;
- (void)deleteCaption;
- (id)createCaption;
- (id)createTBody;
- (void)deleteTFoot;
- (id)createTFoot;
- (void)deleteTHead;
- (id)createTHead;
- (void)setSummary:(id)arg1;
- (id)summary;
- (void)setRules:(id)arg1;
- (void)setFrameBorders:(id)arg1;
- (id)frameBorders;
- (void)setCellSpacing:(id)arg1;
- (id)tBodies;
- (void)setTFoot:(id)arg1;
- (id)tFoot;
- (void)setTHead:(id)arg1;
- (id)tHead;
- (void)setCaption:(id)arg1;
- (id)caption;
- (void)setBgColor:(id)arg1;
- (id)bgColor;
- (void)setAlign:(id)arg1;
- (id)align;
- (id)rules;
- (void)setBorder:(id)arg1;
- (id)border;
- (id)cellPadding;
- (id)cellSpacing;
- (void)setCellPadding:(id)arg1;
- (int)structuralComplexityContribution;
- (id)rows;

@end
