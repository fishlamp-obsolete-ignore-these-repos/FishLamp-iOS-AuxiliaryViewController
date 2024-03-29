//
//  FLAuxiliaryViewControllerBehavior.h
//  FishLampiOS
//
//  Created by Mike Fullerton on 6/6/12.
//  Copyright (c) 2013 GreenTongue Software LLC, Mike Fullerton. 
//  The FishLamp Framework is released under the MIT License: http://fishlamp.com/license 
//

#import <Foundation/Foundation.h>

#import "FLDragController.h"

@class FLAuxiliaryViewController;

@protocol FLAuxiliaryViewControllerBehavior <NSObject>
- (UIViewController*) parentControllerForAuxiliaryViewController:(FLAuxiliaryViewController*) viewController;
- (void) addContainerViewToParentViewController:(FLAuxiliaryViewController*) viewController;
- (void) showViewControllerAnimated:(BOOL) animated viewController:(FLAuxiliaryViewController*) viewController;
- (void) hideViewController:(BOOL) animated viewController:(FLAuxiliaryViewController*) viewController;
- (void) didFinishDraggingWithResults:(FLViewDraggerResults) results viewController:(FLAuxiliaryViewController*) viewController;
- (CGRect) initialFrameForContainerView:(FLAuxiliaryViewController*) viewController;
- (BOOL) handleInternalTouches:(NSSet*) touches event:(UIEvent*) event viewController:(FLAuxiliaryViewController*) viewController;
- (void) didAddTouchableView:(FLAuxiliaryViewController*) viewController;
@end