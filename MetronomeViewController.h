//
//  MetronomeViewController.h
//  ELEC2660 Project
//
//  Created by Angus Moore on 20/11/2017.
//  Copyright © 2017 Leeds.ac.uk. All rights reserved.
//


// Play and stop button images taken from https://www.shareicon.net/stop-next-fast-forward-button-interface-play-button-arrows-skip-701691
// Tuning fork icon taken from https://thenounproject.com/term/tuning-fork/77256/
// Metronome icon taken from https://thenounproject.com/term/metronome/118052/
// Indicator, tuner gradient and beat images created by myself
// Metronome Up and Down click sounds taken from free sound user Druminfected https://freesound.org/people/Druminfected/
// Metronome click sound taken from free sound user m1rk0 https://freesound.org/people/m1rk0/
// Pitches in tuner were generated myself using Ableton's operator synth

#import <UIKit/UIKit.h>
#import "MetronomeData.h"
#import <AVFoundation/AVFoundation.h>
#import <QuartzCore/QuartzCore.h>

@interface MetronomeViewController : UIViewController <UIPickerViewDelegate, UIPickerViewDataSource, UITextFieldDelegate>

@property (strong, nonatomic) MetronomeData *metronomedata;
@property (strong, nonatomic) NSTimer *metronometimer;

@property float bpm;
@property NSString *metre;
@property NSInteger beatnumber;
@property BOOL timeron;

@property AVAudioPlayer *UpClickAudioPlayer;
@property AVAudioPlayer *ClickAudioPlayer;
@property AVAudioPlayer *DownClickAudioPlayer;

@property (weak, nonatomic) IBOutlet UIPickerView *MetreTempoPicker;
@property (weak, nonatomic) IBOutlet UITextField *bpmtextfield;
@property (weak, nonatomic) IBOutlet UIStepper *bpmstepper;
@property (weak, nonatomic) IBOutlet UIButton *PlayButtonImage;
@property (weak, nonatomic) IBOutlet UIButton *StopButtonImage;
@property (weak, nonatomic) IBOutlet UIImageView *beatone;
@property (weak, nonatomic) IBOutlet UIImageView *beattwo;
@property (weak, nonatomic) IBOutlet UIImageView *beatthree;
@property (weak, nonatomic) IBOutlet UIImageView *beatfour;
@property (weak, nonatomic) IBOutlet UIImageView *beatfive;
@property (weak, nonatomic) IBOutlet UIImageView *beatsix;
@property (weak, nonatomic) IBOutlet UIImageView *beatseven;
@property (weak, nonatomic) IBOutlet UIImageView *beateight;
@property (weak, nonatomic) IBOutlet UIImageView *beatnine;

- (IBAction)bmpentered:(UITextField *)sender;
- (IBAction)bpmincremented:(UIStepper *)sender;
- (IBAction)Playpressed:(UIButton *)sender;
- (IBAction)Stoppressed:(UIButton *)sender;

@end
