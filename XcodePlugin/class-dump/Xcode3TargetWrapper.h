//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSImage, NSString, PBXTarget, Xcode3Project, Xcode3Target;

@interface Xcode3TargetWrapper : NSObject
{
    Xcode3Target *_target;
    PBXTarget *_pbxTarget;
    Xcode3Project *_project;
    NSString *_name;
    NSImage *_image;
    BOOL _selected;
}

@property(readonly) NSImage *image; // @synthesize image=_image;
@property(readonly) NSString *name; // @synthesize name=_name;
@property BOOL selected; // @synthesize selected=_selected;
@property(readonly) Xcode3Project *project; // @synthesize project=_project;
@property(readonly) PBXTarget *pbxTarget; // @synthesize pbxTarget=_pbxTarget;
@property(readonly) Xcode3Target *target; // @synthesize target=_target;
//- (void).cxx_destruct;
- (id)initWithPBXTarget:(id)arg1 project:(id)arg2;

@end