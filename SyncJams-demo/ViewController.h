//
//  ViewController.h
//  SyncJams-demo
//
//  Created by Dan Wilcox on 5/9/15.
//  Copyright (c) 2015 puredata. All rights reserved.
//

#import <UIKit/UIKit.h>

#import "PdBase.h"

@interface ViewController : UIViewController <PdReceiverDelegate, PdMidiReceiverDelegate>

@end
