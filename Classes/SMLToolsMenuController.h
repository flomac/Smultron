/*
Smultron version 3.7a1, 2009-09-12
Written by Jean-François Moy - jeanfrancois.moy@gmail.com
Find the latest version at http://github.com/jfmoy/Smultron

Copyright 2004-2009 Peter Borg - 2010 Jean-François Moy
 
Licensed under the Apache License, Version 2.0 (the "License"); you may not use this file except in compliance with the License. You may obtain a copy of the License at
 
http://www.apache.org/licenses/LICENSE-2.0
 
Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the specific language governing permissions and limitations under the License.
*/

#import <Cocoa/Cocoa.h>

@interface SMLToolsMenuController : NSObject
{
	IBOutlet NSMenu *runCommandMenu;
	IBOutlet NSMenu *insertSnippetMenu;
	IBOutlet NSMenu *functionsMenu;
	
	NSTextView *textViewToInsertColourInto;
}

+ (SMLToolsMenuController *)sharedInstance;

- (IBAction)createSnippetFromSelectionAction:(id)sender;
- (IBAction)insertColourAction:(id)sender;
- (IBAction)previewAction:(id)sender;
- (IBAction)reloadPreviewAction:(id)sender;
- (IBAction)showCommandsWindowAction:(id)sender;
- (IBAction)runTextAction:(id)sender;
- (IBAction)showSnippetsWindowAction:(id)sender;
- (IBAction)previousFunctionAction:(id)sender;
- (IBAction)nextFunctionAction:(id)sender;

- (void)buildInsertSnippetMenu;
- (void)buildRunCommandMenu;

- (IBAction)emptyDummyAction:(id)sender;

- (IBAction)getInfoAction:(id)sender;
- (IBAction)refreshInfoAction:(id)sender;

- (IBAction)importSnippetsAction:(id)sender;
- (IBAction)exportSnippetsAction:(id)sender;

- (IBAction)importCommandsAction:(id)sender;
- (IBAction)exportCommandsAction:(id)sender;

- (IBAction)showCommandResultWindowAction:(id)sender;
- (IBAction)runSelectionInlineAction:(id)sender;

- (IBAction)runCommandAction:(id)sender;
- (IBAction)newCommandAction:(id)sender;
- (IBAction)newCommandCollectionAction:(id)sender;

- (IBAction)newSnippetAction:(id)sender;
- (IBAction)newSnippetCollectionAction:(id)sender;

@end
