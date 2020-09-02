/****************************************************
* Author: Mike Hodges                               *
* COP 3275 C++ Programming for Eng.Technology       *
* assg_07_ models_of_non_vertical_line.cpp          *
* Function: void main()                             *
*                                                   *
* Description: This application Calculates three    *
* commonly used mathematical models of a straight   *
* line.                                             *
*                                                   *
*                                                   *
*****************************************************
*                  Home Work                        *
*****************************************************
*Public:                                            *
*class homework                                     *
*                                                   *
*Function:                                          *
* int init                                          *
*  Output: Initializes textAreas                    * 
*                                                   *
*Function: getProblem                               *  
* Description:displays user menu                    *
*   OutPut: returns 0 int                           *   
*                                                   *
*Function: getProblem overloaded                    *
* Description: take mouse input and return number   *
*              selected                             * 
* Input mouse-x x int                               *  
*		mouse-y y int                               *
* Output: return 0 int                              *
*                                                   *
*Function: get2Pt                                   *  
* Description: Prompts user for x-y coordinates     *
*              for both points                      *
*   OutPut: return 0 int                            * 
*                                                   *
*Function: get2Pt overloaded                        *
* Description: Input four parameters x-y            * 
*              coordinates for two point and        *
*              returns them to the calling function *
* Input:  xp1 double                                * 
*         yp1 double                                *
*	      xp2 double                                *
*		  yp2 double                                * 
* Output: _xp1 double                               *
*         _yp1 double                               * 
*		  _xp2 double                               *
*		  _yp2 double                               *
*                                                   *
*Function: getPtSlope                               *
* Description: Prompts user for slope and x-y       *
*              coordinates                          *
* Output: return 0  int                             *
*                                                   *
*Function: getPtSlope overloaded                    * 
* Description: Input x-y coordinates and slope and  *
*              return them to the calling function  *
*              though output parameters.            *
* Input: x1 double                                  *
*        y1 double                                  *
*        slp double                                 *
* Output: _xs1 double                               *
*         _ys1 double                               *
*		  _slp double                               *
*         return 0 int                              *
*                                                   *
Function: slopeIntcptForm2Pt                        *
* Description: Take four input parameters x-y       *
*              coordinates for two points and       *
*              return the slope m and the y         *
*              intersect b                          *
* Input  x1 double                                  *
*        y1 double                                  *
*        x2 double                                  *
*        y2 double                                  *
* Output: slope m double                            *
*         y-intersect b double                      *
*                                                   *
*Function: intcptFromPtSlope                        *
* Description: Take three parameters x-y            *
*              coordinates and the slope and        *
*              returns the y intersect              *
* Input: x1 double                                  *
*        y1 double                                  *
*        slp double                                 *
* Output return y_intersect b double                *
*                                                   *
*Function: display2Pt                               *
* Description: Take four parameters x-y coordinates *
*              for two points and display the two   *
*              point line equation.                 *
* Input:  x1 double                                 *
*         y1 double                                 *
*         x2 double                                 *
*         y2 double                                 *
* Output: Display the two line equation on the      *
*         console                                   *
*                                                   *
*Function: diplayPtSlope                            *
* Description: take three parameters x-y            *
*              coordinates and the slope and        *
*              display the point slope equation.    *
* Input: x1 double                                  *
*       y1 double                                   *
*       slp double                                  *
* OutPut: Display the point slope equation on the   *
*         console                                   *
*                                                   *
*Function: displaySlopeIntcpt                       * 
* Description: Take two parameters slope and the    *
*              y-intersect and display slope        *
*              intersect equation.                  *
* Input: slope m double                             *
         Y intersect  yIntcpt double                *         
* Output: Display the slope intersect on the        *
*         console                                   *
*****************************************************
*****************************************************
*                                                   *
* Function: _init                                   *
*   set Handles for console                         *
*	set console Title                               *
*	set console Size                                *
*	set Cursor                                      *
*	set Background consoleBuffer CHAR_INFO          *
*                                                   *
*                                                   *
*Function  setCursorVisible(bool b)                 *
* Description set cursor visible and invisible      *
* Input: b bool                                     *
* Output: visible or invisible cursor               *
*                                                   *
* Function setCursorPosition                        *
*   Input:                                          *
*    x coordinate for cursor int                    *
*    y coordinate for cursor int                    *
*   Output:                                         *
*    set cursor position to x y                     *
*                                                   *
*                                                   *
* Class draw 			                            *
*  Description:										*
*	This class draws vertical lines, horizontal     *
*	lines and text and writes it to the console     *
*	buffer.                                         *
*                                                   *
*Public:                                            *
* Function: drawLineHorizontal                      *
*  Description:										*
*	This function draws a horizontal line to        *
*   the console buffer.                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   x coordinate for start short,                   *
*   y coordinate for start short,                   *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*	lineLength length of line short					*
*   character ascii character for line short		*
*	color color for line short						*
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
*Public:                                            *
* Function: drawLineVertical                        *
*  Description:										*
*	This function draws a vertical line to          *
*   the console buffer.                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   x coordinate for start short,                   *
*   y coordinate for start short,                   *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*	lineLength length of line short					*
*   character ascii character for line short		*
*	color color for line short						*
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
*                                                   *
*Public:                                            *
* Function: drawLineDiagonal                        *
*  Description:										*
*	This function draws a diagonal line to          *
*   the console. Bresenham's line algorithm         *
*   (rosettacode.org/wiki/Bitmap/                   *
*     Bresenham's_line_algorithm#C.2B.2B)           *
*  Input:                                           *
*	dc handle to device context,                    *
*   x coordinate for start double,                  *
*   y coordinate for start double,                  *
*   x coordinate for end double,                    *
*   y coordinate for end double,                    *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*	color color for line CORORREF       			*
*  Output:                                          *
*   draw pixels to consol                           *
*													*
*Public:                                            *
* Function: drawText                                *
*  Description:										*
*	This function draws text to the console	buffer.	*
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   str a string to write string					*
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*	color color for text short						*
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
* Function: drawText  overloaded                    *
*  Description:										*
*	This function draws text to the console	buffer.	*
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   str a string to write string					*
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*	color color for text short						*
*	lineLength length of line short					*
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
* Class button 			                            *
* Description: This class will create a button      *
* and write it to the console buffer.               *
*                                                   *
*Public                                             *
* Constructor: button                               *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   btnLabel string Label for button,               *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*  Output:                                          *
*    set local variables                            *
*                                                   *
* Constructor: button                               *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   btnLabel string Label for button,               *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   btnWidth button width short,                    *
*   btnHeight button height short,                  *
*  Output:                                          *
*    set local variables                            *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
* Function:                                         *
* isClicked                                         *
*  Description:                                     *
* Take mouse click coordinates and returns true if  *
* button is click and false if it is not clicked.   *
* Input:                                            *
*   mouse x, mouse y int                            *
*output:                                            *
*   returns true or false  bool                     *
*                                                   *
*Private:											*
* Function: createButton                            *
* Description:                                      *
*  creates Button and adds it to the                *
*  console buffer                                   *
*  Input:                                           *
*	outputBuffer array containing                   *
*   character location and color CHAR_INFO          *
*   btnLabel string text for,                       *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   btnWidth  text area width short,                *
*   btnHeight text area height short,               *
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
*                                                   *
* Class textarea    	                            *
* Description: This class will create a text area   *
* and write it to the console buffer.               *
*                                                   *
* Blank constructor to be defined later             *
* Constructor: textarea                             *
*  Input:                                           *
*  Output:                                          *
*                                                   *
* Constructor: textarea                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*  Output:                                          *
*    set local variables                            *
*    call function createButton                     *
*                                                   *
* Constructor: textarea                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   txtText string text for text area,              *
*   x coordinate for position short,                *
*   y coordinate for position area short,           *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   txtWidth text area width short,                 *
*   txtHeight text area height short,               *
*  Output:                                          *
*    set local variables                            *
*    call function createButton                     *
*                                                   *
* Constructor: textarea                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   x coordinate for position area short,           *
*   y coordinate for position area short,           *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*  Output:                                          *
*    set local variables                            *
*    call function createButton                     *
*                                                   *
* Constructor: textarea                             *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   txtText string text for text area,              *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   txtWidth text area width short,                 *
*   txtHeight text area height short,               *
*  Output:                                          *
*    set local variables                            *
*    call function createButton                     *
*                                                   *
*Private:											*
* Function: createTextArea                          *
* Description:                                      *
*  Removes creates text area and adds it to the     *
*  console buffer                                   *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   txtText string text for text area,              *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   txtWidth  text area width short,                *
*   txtHeight text area height short,               *
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*Function deleteTextArea                            *
* Description:                                      *
*  Removes text area from console buffer            *
*  Input:                                           *
*	consoleBuffer array containing                  *
*   character location and color CHAR_INFO,         *
*   x coordinate for position short,                *
*   y coordinate for position short,                *
*   consoleWidth width of console short,            *
*   consoleHeight height of console short,          *
*   txtWidth  text area width short,                *
*   txtHeight text area height short,               *
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
* Public:                                           *
* Function: isVisible                               *
* Description:                                      *
*  return true of false if text area is visible     *
* Output:                                           *
* return true or false bool                         *
*                                                   *
* Function visible                                  *
* Description:                                      *
*   show or hides text area                         *
*  Output:                                          *
*   outputBuffer CHAR_INFO  console buffer          *
*                                                   *
* Function:	bool isClicked                          *
*  Input:                                           *
*	mousePosition x, mousePosition y                *
*  Output:											*
*    returns true false bool                        *
*                                                   *
* Function:	string getText                          *
*  Output:											*
*    returns Text string                            *
*                                                   *
* Function:	bool setText                            *
*  Input:                                           *
*   txtText string text for text area,              *
*  Output:											*
*    returns true false bool                        *
*                                                   *
*Function: bool setCursor                           *
* Output: sets Focus and cursor                     *
* return true                                       *  
*                                                   *
*Function: bool clearText                           *
* Output clears textArea set cursor                 *
*                                                   *
*                                                   *
*                                                   *
****************************************************/
#include "stdafx.h"		// Precompiled header files that are frequently used. 
#include <string>		// Allow strings to be stored and manipulated.	
#include <windows.h>	// Access to Window console attributes and events.
//#include <cmath>        // TODO Check that this really needed Access to math operation  


using namespace std;
class draw{
public:
	// Function: send data to the buffer including character color and location creating a horizontal line from start x y to line length
	void drawLineHorizotal(CHAR_INFO outputBuffer[], short x, short y, short consoleWidth, short consoleHeight, short lineLength, short charater, short color){
		int _Start, _End, i;
		_Start = (y * consoleWidth) + x;                       // algorithm to determine start and end location 
		_End = (_Start + lineLength);
		for (i = _Start; i < _End; ++i)
		{
			outputBuffer[i].Char.AsciiChar = (char)charater;   // set ascii character in the desired location
			outputBuffer[i].Attributes = color;                // set color in the desired location
		}
	}
	// Function: send data to the buffer including character color and location creating a vertical line from start x y to line length 
	void drawLineVertical(CHAR_INFO outputBuffer[], short x, short y, short consoleWidth, short consoleHeight, short lineLength, short charater, short color){
		int  _Start, _End, i;
		_Start = (y * consoleWidth);                           // algorithm to determine start and end location 
		_End = _Start + (consoleWidth * lineLength);

		for (i = _Start; i < _End; ++i)
		{
			if (!(i % consoleWidth)){
				outputBuffer[i + x].Char.AsciiChar = (char)charater;  // set ascii character in the desired location
				outputBuffer[i + x].Attributes = (char)color;         // set color in the desired location			
			}
		}

	}
	// Bresenham's line algorithm http://rosettacode.org/wiki/Bitmap/Bresenham's_line_algorithm#C.2B.2B
	// This function draws a diagonal line between two points to the console.
	void drawLineDiagonal(HDC dc, int x1, int y1, int x2, int y2, int offX, int offY, COLORREF cr){
		x1 += 75; // modified here by Mike Hodges offset for negative numbers
		x2 += 75; // pixel locations are all positive
		y1 += 75; 
		y2 += 75;
		// modified here by Mike Hodges deleted negative number algorithm
		if (x1 > x2)
		{
			swap(x1, x2);
			swap(y1, y2);
		}
		if (x1 == x2){// modified here by Mike Hodges fudged for straight lines
			x2++;
		}


		int deltaX = x2 - x1;
		int deltaY = y2 - y1;
		double error = 0;
		double deltaError = abs(deltaY / (float)deltaX);
		int y = (int)y1;
		for (int x = (int)x1; x < x2; x++){
			Sleep(1);

			// modified here by Mike Hodges offset for negative numbers
			SetPixel(dc, x +  (offX * 8), (75 - y) + (+6 + (offY * 12)), cr);
			error += deltaError;
			while (error >= .5){
				// modified here by Mike Hodges offset for negative numbers
				SetPixel(dc, x  + (offX * 8), (75 - y) + (+6 + (offY * 12)), cr);
				if ((y2 - y1)< 0){
					y--;
				}
				else{
					y++;
				}
				error -= 1.0;
			}
		}

	}
	// Function: send text data to the buffer including text color and location 
	void drawText(CHAR_INFO outputBuffer[], string str, short x, short y, short consoleWidth, short consoleHeight, short color){
		for (unsigned int i = 0; i < str.size(); ++i) {
			outputBuffer[(x + i) + (consoleWidth * (y))].Char.AsciiChar = str[i];  // set ascii character in the desired location
			outputBuffer[(x + i) + (consoleWidth * (y))].Attributes = color;       // set color in the desired location
		}
	}
	// Function: send text data to the buffer including text color, location , line length :: starts new line at last space before line length  
	void drawText(CHAR_INFO outputBuffer[], string str, short x, short y, short consoleWidth, short consoleHeight, short color, short lineLength){
		string tempString = "";
		if ((int)str.length() > lineLength){                                                   // check if string is longer than desired lineLength.
			tempString = str.substr(0, lineLength);                                            //get part of the string that is the desired lineLength size
			tempString = tempString.substr(0, tempString.find_last_of(" ") + 1);               // Find the last space and discard the remaining string
			drawText(outputBuffer, tempString, x, y, consoleWidth, consoleHeight, color);      // write this to the console
			str = str.substr(tempString.length(), str.length());                               // remove the string that has been written from the original string
			y++;
			drawText(outputBuffer, str, x, y, consoleWidth, consoleHeight, color, lineLength); //recall the function until string length is less than desired lineLength.

		}
		else{
			drawText(outputBuffer, str, x, y, consoleWidth, consoleHeight, color);             // if string is less than lineLength writeLine and exit
		}
	}
}draw;





class button{
private:
	short _x, _y, _btnWidth, _btnHeight = 0;
public:
	button(){}
	// Constructor: receive data to create a new button including string for label, location, and size
	button(CHAR_INFO  outputBuffer[], string btnLabel, short x, short y, short consoleWidth, short consoleHeight, short btnWidth, short btnHeight){
		_x = x;
		_y = y;
		_btnWidth = btnWidth;
		_btnHeight = btnHeight;
		createButton(outputBuffer, btnLabel, _x, _y, consoleWidth, consoleHeight, _btnWidth, _btnHeight);
	}
	// Constructor: receive data to create a new button including string for label, location and set default size.
	button(CHAR_INFO  outputBuffer[], string btnLabel, short x, short y, short consoleWidth, short consoleHeight){
		_x = x;
		_y = y;
		_btnWidth = 15;
		_btnHeight = 5;
		createButton(outputBuffer, btnLabel, _x, _y, consoleWidth, consoleHeight, _btnWidth, _btnHeight);
	}

	bool isClicked(int mouseX, int mouseY){//Public Function: Take mouse click coordinates and returns true if button is click and false if it is not clicked.

		if (((_x <= mouseX) && (mouseX <= _x + _btnWidth - 2)) && ((mouseY >= _y) && (mouseY <= _y - 2 + _btnHeight)))// check for mouse click
		{
			return true;
		}
		else{
			return false;
		}
	}

private:
	// Private Function create a button and write it to the console buffer
	void createButton(CHAR_INFO  outputBuffer[], string btnLabel, short x, short y, short consoleWidth, short consoleHeight, short btnWidth, short btnHeight){

		draw.drawLineHorizotal(outputBuffer, x, y, consoleWidth, consoleHeight, btnWidth, 220, 135);                          // top side
		draw.drawLineHorizotal(outputBuffer, x, y + btnHeight - 1, consoleWidth, consoleHeight, btnWidth, 223, 128);          // bottom side
		draw.drawLineVertical(outputBuffer, x, y + 1, consoleWidth, consoleHeight, btnHeight - 2, 222, 120);				  // left side							
		draw.drawLineVertical(outputBuffer, x + btnWidth - 1, y + 1, consoleWidth, consoleHeight, btnHeight - 2, 221, 8);	  // right side 
		x = x + (int)((btnWidth / 2) - (btnLabel.length() / 2));                                                              // x center text on button
		y = y + (int)(btnHeight / 2);                                                                                         // y center text on button
		draw.drawText(outputBuffer, btnLabel, x, y, consoleWidth, consoleHeight, 128);                                        // send text data to the buffer
	}
};

void setCursorPosition(int x, int y);


class textarea{
private:
	CHAR_INFO *_outputBuffer;
	short _x, _y, _txtWidth = 15, _txtHeight = 3, _consoleWidth, _consoleHeight = 0;
	string _txtText = "";
	bool _isVisible = true;
public:
	textarea(){}// Blank constructor 
	// Constructor: receive data to create a new text area including a location and set default size.
	textarea(CHAR_INFO  outputBuffer[], short x, short y, short consoleWidth, short consoleHeight){
		_outputBuffer = outputBuffer;
		_x = x;
		_y = y;
		_consoleWidth = consoleWidth;
		_consoleHeight = consoleHeight;

		createTextArea(outputBuffer, _txtText, _x, _y, consoleWidth, consoleHeight, _txtWidth, _txtHeight);
	}

	// Constructor: receive data to create a new text area including a location, and size
	textarea(CHAR_INFO  outputBuffer[], short x, short y, short consoleWidth, short consoleHeight, short txtWidth, short txtHeight){
		_outputBuffer = outputBuffer;
		_x = x;
		_y = y;
		_consoleWidth = consoleWidth;
		_consoleHeight = consoleHeight;
		_txtWidth = txtWidth;
		_txtHeight = txtHeight;

		createTextArea(outputBuffer, _txtText, _x, _y, consoleWidth, consoleHeight, _txtWidth, _txtHeight);
	}

	// Constructor: receive data to create a new text area including a string for text, location, and set default size
	textarea(CHAR_INFO  outputBuffer[], string txtText, short x, short y, short consoleWidth, short consoleHeight){
		_outputBuffer = outputBuffer;
		_x = x;
		_y = y;
		_consoleWidth = consoleWidth;
		_consoleHeight = consoleHeight;
		_txtText = txtText;
		createTextArea(outputBuffer, _txtText, _x, _y, consoleWidth, consoleHeight, _txtWidth, _txtHeight);
	}
	// Constructor: receive data to create a new text area including a string for text, location and size.
	textarea(CHAR_INFO  outputBuffer[], string txtText, short x, short y, short consoleWidth, short consoleHeight, short txtWidth, short txtHeight){
		_outputBuffer = outputBuffer;
		_x = x;
		_y = y;
		_consoleWidth = consoleWidth;
		_consoleHeight = consoleHeight;
		_txtWidth = txtWidth;
		_txtHeight = txtHeight;
		_txtText = txtText;
		createTextArea(outputBuffer, _txtText, _x, _y, consoleWidth, consoleHeight, _txtWidth, _txtHeight);
	}

	bool isClicked(int mouseX, int mouseY){//Public Function: Take mouse click coordinates and returns true if button is click and false if it is not clicked.

		if (((_x <= mouseX) && (mouseX <= _x + _txtWidth - 2)) && ((mouseY >= _y) && (mouseY <= _y + _txtHeight - 1))&&isVisible())// check for mouse click
		{
			return true;
		}
		else{
			return false;
		}

	}
	string getText(){// return text from text area
		return _txtText;
	}
	bool isVisible(){//Public Function isVisible Description: return true of false if text area is visible
		return _isVisible;
	}
	bool visible(bool b){//Public Function visible show or hides text area
		if (b){
			createTextArea(_outputBuffer, _txtText, _x, _y, _consoleWidth, _consoleHeight, _txtWidth, _txtHeight);
			setCursor();
			_isVisible = true;
		}
		else{
			deleteTextArea(_outputBuffer, _x, _y, _consoleWidth, _consoleHeight, _txtWidth, _txtHeight);
			_isVisible = false;
		}
		return true;
	}
	bool clearText(){//clears textArea
		_txtText = "";
		createTextArea(_outputBuffer, _txtText, _x, _y, _consoleWidth, _consoleHeight, _txtWidth, _txtHeight);
		setCursor();
		return true;
	}
	bool setText(string txtText){// set text in text area
		_txtText = txtText;
		if (isVisible())
		{
			createTextArea(_outputBuffer, _txtText, _x, _y, _consoleWidth, _consoleHeight, _txtWidth, _txtHeight);
			setCursor();
		}
			return true;
		}
	bool setCursor(){//TODO add multiLine functionality  
		if (3 == _txtHeight && isVisible()){
			setCursorPosition(_x + 1 + _txtText.length(), _y + 1);
			return true;
		}
		else{
			return false;
		}
	}
private:
	// Private Function create a button and write it to the console buffer
	void createTextArea(CHAR_INFO  outputBuffer[], string txtText, short x, short y, short consoleWidth, short consoleHeight, short txtWidth, short txtHeight){

		draw.drawLineHorizotal(outputBuffer, x + 1, y, consoleWidth, consoleHeight, txtWidth - 2, 223, 240);                        // top side
		draw.drawLineHorizotal(outputBuffer, x + 1, y + txtHeight - 1, consoleWidth, consoleHeight, txtWidth - 2, 220, 247);        // bottom side
		draw.drawLineVertical(outputBuffer, x, y, consoleWidth, consoleHeight, txtHeight, 221, 128);				                // left side							
		draw.drawLineVertical(outputBuffer, x + txtWidth - 1, y, consoleWidth, consoleHeight, txtHeight, 222, 135);	                // right side       

		for (short i = 1; i < txtHeight - 1; i++){
			draw.drawLineHorizotal(outputBuffer, x + 1, y + i, consoleWidth, consoleHeight, txtWidth - 2, ' ', 255);                 // center
		}

		if (!("" == txtText))
		{
			++y;                                                                                                                     // move text down one line
			draw.drawText(outputBuffer, txtText, ++x, y, consoleWidth, consoleHeight, 240, txtWidth - 2);                              // send text data to the buffer
		}
	}// Private Function deleteTextArea Description: Removes text area from console buffer
	void deleteTextArea(CHAR_INFO  outputBuffer[], short x, short y, short consoleWidth, short consoleHeight, short txtWidth, short txtHeight){

		for (short i = 0; i < txtHeight; i++)
		{
			draw.drawLineHorizotal(outputBuffer, x, y + i, consoleWidth, consoleHeight, txtWidth, ' ', 136);
		}
	}
};

const string APP_NAME = "Non-vertical straight line Calculator";                            // Application name
const string APP_DISCRIPTION = "This application Calculates three commonly used mathematical models of a straight line."; // Application Description
const string APP_AUTHOR = "This application was written by Mike Hodges."; // Application Description



const short WIDTH = 67;                                         // console width
const short HEIGHT = 39;                                        // console height

CHAR_INFO consoleBuffer01[WIDTH * HEIGHT];                      // an array to hold character and color information to output to console
COORD characterBufferSize = { WIDTH, HEIGHT };                  // cord to store x y coordinates for window output
COORD characterPosition = { 0, 0 };								// cord to store x y coordinates for window output					
SMALL_RECT windowSize;                                          // container to a rectangle for window output
HANDLE output;                                                  // output to console handle
HANDLE input;                                                   // input to console handle
HWND console = GetConsoleWindow();                              //Get a console handle
HDC dc = GetDC(console);                                        //Get a handle to device context
CONSOLE_CURSOR_INFO ci;
COLORREF red = RGB(255, 0, 0);
COLORREF green = RGB(0, 255, 0);
COLORREF blue = RGB(0, 0, 255);
COLORREF yellow = RGB(255, 255, 0);



void _init();
void tab(short tabIndex);     //TODO figure out a better way
void setCursorVisible(bool b);


/***************************************************************************************************************************************************************************************
******************************     Homework        *************************************************************************************************************************************
****************************************************************************************************************************************************************************************/
class homework{
public:
	int problemClicked = 0;
	button btn1, btn2;
	textarea txt_x1, txt_y1, txt_x2_Slope, txt_y2, txtOutput;
	char chrSolution[50];
	double  _yp1 = 0, _yp2 = 0, _xp1 = 0, _xp2 = 0, _xs1 = 0, _ys1 = 0, _slp = 0;
	double  m, b, yIntcpt;

public:
	//Initializes textAreas
	int init(){
		txt_x1 = textarea(consoleBuffer01, 10, 17, WIDTH, HEIGHT, 10, 3);
		txt_y1 = textarea(consoleBuffer01, 22, 17, WIDTH, HEIGHT, 10, 3);
		txt_x2_Slope = textarea(consoleBuffer01, 10, 23, WIDTH, HEIGHT, 10, 3);
		txt_y2 = textarea(consoleBuffer01, 22, 23, WIDTH, HEIGHT, 10, 3);
		txtOutput = textarea(consoleBuffer01, 10, 2, WIDTH, HEIGHT, 48, 6);
		txt_x1.visible(false);
		txt_y1.visible(false);
		txt_x2_Slope.visible(false);
		txt_y2.visible(false);
		return 0;
	}
	// getProblem displays user menu
	int getProblem(){
		txtOutput.setText("If you know two points on the line choose.   (Two-points form) If you know the line's slope and one point choose.  (Point-slope form) ");
		btn1 = button(consoleBuffer01, " Two-points form ", 10, 9, WIDTH, HEIGHT, 48, 3);
		btn2 = button(consoleBuffer01, " Point-slope form ", 10, 12, WIDTH, HEIGHT, 48, 3);
		return 1;
	}
	// getProblem overloaded  Description: take mouse input and return number
	int getProblem(int x, int y){
		problemClicked = 0;
		if (btn1.isClicked(x,y)){
			problemClicked = 1;
		}
		else if (btn2.isClicked(x,y)){
			problemClicked = 2;
		}
		return problemClicked;
	}
	// get2Pt Description: Prompts user for x - y coordinates
	int get2Pt(){ 
		txtOutput.setText("Enter two set of x y coordinates below");
		draw.drawText(consoleBuffer01, "Point #1", 1, 18, WIDTH, HEIGHT, 128, 10);
		draw.drawText(consoleBuffer01, "Point #2", 1, 24, WIDTH, HEIGHT, 128, 10);
		txt_y2.visible(true);
		return 0; 
	}
	// get2Pt overloaded   Description: Input four parameters x - y coordinates for two point and returns them to the calling function  
	int get2Pt(double x1, double y1, double x2, double y2){
		_xp1 = x1;
		_yp1 = y1;
		_xp2 = x2;
		_yp2 = y2;
		return 0; 
	}
	//getPtSlope  Description: Prompts user for slope and x - y coordinates
	int getPtSlope(){ 
		txtOutput.setText("Enter x y coordinates and a slope below");
		draw.drawText(consoleBuffer01, "Point   ", 1, 18, WIDTH, HEIGHT, 128, 10);
		draw.drawText(consoleBuffer01, "Slope   ", 1, 24, WIDTH, HEIGHT, 128, 10);
		txt_y2.visible(false);
		return 0;
	}
	//getPtSlope overloaded Description: Input x - y coordinates and slope and return them to the calling function though output parameters. 
	int getPtSlope(double x1, double y1, double slp){ 
		_xs1 = x1;
		_ys1 = y1;
		_slp = slp;
		return 0; 
	}
	//slopeIntcptForm2Pt Description: Take four input parameters x - y coordinates for two points and return the slope m and the y intersect b 
	int slopeIntcptForm2Pt(double x1, double y1, double x2, double y2){
		if (_xp1 != _xp2)
		{// slope and y-intersect algorithm 
			m = (y1 - y2) / (x1 - x2);
			b = y1 - (m * x1);
		}
		return 0; }
	//intcptFromPtSlope Description: Take three parameters x - y coordinates and the slope and returns the y intersect           
	double intcptFromPtSlope(double x1, double y1, double slp){
		yIntcpt = y1 - (slp * x1);
		return yIntcpt;
	}
	//display2Pt Description: Take four parameters x - y coordinates for two points and display the two point line equation.
	int display2Pt(double x1, double y1, double x2, double y2){
		draw.drawText(consoleBuffer01, "Two-point Form", 16, 3, WIDTH, HEIGHT, 240);
		sprintf_s(chrSolution,  sizeof(chrSolution),  "    (%4.2f - %4.2f)", y2, y1);
		draw.drawText(consoleBuffer01, chrSolution, 12, 4, WIDTH, HEIGHT, 240);
		draw.drawText(consoleBuffer01,                "m = ----------------", 12, 5, WIDTH, HEIGHT, 240);
		sprintf_s(chrSolution, sizeof(chrSolution),   "    (%4.2f - %4.2f)", x1, x2);
		draw.drawText(consoleBuffer01, chrSolution, 12, 6, WIDTH, HEIGHT, 240);
		return 0; 
	}
	//diplayPtSlope Description: take three parameters x - y coordinates and the slope and display the point slope equation.
	int diplayPtSlope(double x1, double y1, double slp){
		draw.drawText(consoleBuffer01, "Point-slope Form", 13, 3, WIDTH, HEIGHT, 240);
		sprintf_s(chrSolution, sizeof(chrSolution), "y-%4.2f=%4.2f(x-%4.2f)", y1 , slp , x1 );
		draw.drawText(consoleBuffer01, chrSolution, 11, 5, WIDTH, HEIGHT, 240);
		return 0;
	}
	//displaySlopeIntcpt Description: Take two parameters slope and the y - intersect and display slope intersect equation.
	int displaySlopeIntcpt(double m, double yIntcpt){
		draw.drawText(consoleBuffer01, "Slope-intercept Form", 35, 3, WIDTH, HEIGHT, 240);
		if (_xp1 == _xp2 && 1 == problemClicked){// make sure slope is defined
			sprintf_s(chrSolution, sizeof(chrSolution), "Slope is Undefined");
		}
		else if (0 <= yIntcpt){
			sprintf_s(chrSolution, sizeof(chrSolution), "y = %4.2fx + %4.2f ", m, yIntcpt);
		}
		else{
			sprintf_s(chrSolution, sizeof(chrSolution), "y = %4.2fx %4.2f ", m, yIntcpt);
		}
		// send out put to console
		draw.drawText(consoleBuffer01, chrSolution, 37, 5, WIDTH, HEIGHT, 240);
		return 0;
	}

}hw;


/********************************************************************************************************************
*********************************************************************************************************************
*********************************************************************************************************************/




void main()
{
	
	input = GetStdHandle(STD_INPUT_HANDLE);                                                   // input to console handle
	DWORD fdwMode = ENABLE_EXTENDED_FLAGS;
	SetConsoleMode(input, fdwMode);
	fdwMode = ENABLE_WINDOW_INPUT | ENABLE_MOUSE_INPUT;
	SetConsoleMode(input, fdwMode);
	bool updateConsole = false;
	short tabIndex = 0;
	short flip = 75;
	float area = 0;
	string strInputTmp;                               //temporary containers
	string strBufTmp = "";
	string strInput[6] = { "", "", "", "", "", "" };                             // input containers
	int problemChoice;
	int offsetydiagln = 32;
	double yy1, yy2, xx1, xx2;
	double x, y, m, y1x75, y1xneg75, x1y75, x1yneg75;
	bool exitApp = false;                                        // Boolean flag to exit.
	_init();
	
	draw.drawText(consoleBuffer01, APP_AUTHOR, 11, 0, WIDTH, HEIGHT, 128);
		
	hw.init();
	hw.getProblem();
	
	setCursorVisible(false);

	draw.drawText(consoleBuffer01, "Display Graph", 36, 16, WIDTH, HEIGHT, 128);
	textarea txtGraph(consoleBuffer01, 35, 17, WIDTH, HEIGHT, 23, 15);
	draw.drawLineHorizotal(consoleBuffer01, 36, 24, WIDTH, HEIGHT, 21, 197, 247);
	draw.drawLineVertical(consoleBuffer01, 46, 18, WIDTH, HEIGHT, 13, 197, 247);
	draw.drawText(consoleBuffer01, "Y", 46, 18, WIDTH, HEIGHT, 247);
	draw.drawText(consoleBuffer01, "X", 56, 24, WIDTH, HEIGHT, 247);

	button btnClear(consoleBuffer01, "Clear", 10, 33, WIDTH, HEIGHT);
	button btnAbout(consoleBuffer01, "About", 26, 33, WIDTH, HEIGHT);
	button btnExit(consoleBuffer01, "Exit", 42, 33, WIDTH, HEIGHT);
	
	string textOut = "";
	string textClear = "                               ";
	
	WriteConsoleOutputA(output, consoleBuffer01, characterBufferSize, characterPosition, &windowSize);

FlushConsoleInputBuffer(input);
	while (!exitApp)
	{
		// write console buffer to console 



		DWORD numEvents = 0;                                         // number of input events
		DWORD numEventsRead = 0;                                     // number of events read
		GetNumberOfConsoleInputEvents(input, &numEvents);                                                   // get number of events 

		if (numEvents != 0) { // check to see if user has typed or clicked
			INPUT_RECORD *eventBuffer = new INPUT_RECORD[numEvents];
			
			// Read the console events into that buffer, and save how
			// many events have been read into numEventsRead.
			ReadConsoleInput(input, eventBuffer, numEvents, &numEventsRead);

			for (DWORD i = 0; i < numEventsRead; ++i) {													               // Cycle through the events TODO: DWORD seem like to much
				// Check the event type
				if (eventBuffer[i].Event.KeyEvent.bKeyDown == KEY_EVENT && eventBuffer[i].EventType != FOCUS_EVENT){   // CHECK EVENT TYPE and make sure it not a focus event 
					switch (eventBuffer[i].Event.KeyEvent.wVirtualKeyCode)									           // get key code
					{
					case VK_ESCAPE:
						exitApp = true;// exit
						break;
					case VK_DELETE:
						strInput[tabIndex] = "";
						updateConsole = true;
						break;
					case VK_BACK:
						if (strInput[tabIndex] != ""){
							strInput[tabIndex].pop_back();
						}
						updateConsole = true;
						break;
					case VK_TAB://TODO figure out a better way 
						if (tabIndex == 0){
							tabIndex = 1;
							hw.txt_y1.setCursor();
						}
						else if (tabIndex == 1){
							tabIndex = 2;
							hw.txt_x2_Slope.setCursor();
						}
						else if (tabIndex == 2){
							tabIndex = (2== hw.problemClicked) ? 0 : 3;
							hw.txt_y2.setCursor();
						}
						else if (tabIndex == 3 ){
							tabIndex = 0;
							hw.txt_x1.setCursor();
						}
						break;
					case VK_RETURN:
						if (tabIndex == 0){
							tabIndex = 1;
							hw.txt_y1.setCursor();
						}
						else if (tabIndex == 1){
							tabIndex = 2;
							hw.txt_x2_Slope.setCursor();
						}
						else if (tabIndex == 2){
							tabIndex = (2 == hw.problemClicked) ? 0 : 3;
							hw.txt_y2.setCursor();
						}
						else if (tabIndex == 3){
							tabIndex = 0;
							hw.txt_x1.setCursor();
						}
						break;
					default:
						strBufTmp.clear();
						hw.txtOutput.clearText();

						strBufTmp = eventBuffer[i].Event.KeyEvent.uChar.AsciiChar;
						strInput[tabIndex] = strInput[tabIndex] + strBufTmp;
						bool b = strBufTmp.empty();
						string g = strInput[tabIndex];
						
							if (strBufTmp == "Z") {
								exitApp = true;
							}
							else if ((strInput[tabIndex].find_first_not_of("1234567890.-") != string::npos)){
								strInput[tabIndex].pop_back();
								draw.drawText(consoleBuffer01, "You Must Enter Numbers Only.                            ", 10, 27, WIDTH, HEIGHT, 140, 24);
								//hw.txtOutput.setText("You Must Enter Numbers Only. ");// return error
							}
							else if (strInput[tabIndex].length() >= 8){
								strInput[tabIndex].pop_back();
								draw.drawText(consoleBuffer01, "Enter 7 or less Characters                              ", 10, 27, WIDTH, HEIGHT, 140, 24);
								//hw.txtOutput.setText("Enter 7 or less Characters");// return error
							}
							else if (strInput[tabIndex].size() != 1){
								try{//TODO FIND BETTER WAY
									if (abs(stod(strInput[tabIndex])) > 75){
										draw.drawText(consoleBuffer01, "Enter a number less than 75 and greater than -75.", 10, 27, WIDTH, HEIGHT, 140, 24);
										//hw.txtOutput.setText("Enter a number less than 75 and greater than -75.");// return error
										strInput[tabIndex].pop_back();
									}
								}
								catch (exception&){
									//draw.drawText(consoleBuffer01, "First Character cannot be a decimal              ", 10, 27, WIDTH, HEIGHT, 140, 24);
									//hw.txtOutput.setText("First Character cannot be a decimal");// return error
									strInput[tabIndex].pop_back();
								}
							}
							else{
								draw.drawText(consoleBuffer01, "                                                            ", 10, 27, WIDTH, HEIGHT, 140, 24);
							}
						}

						
						updateConsole = true;
						break;


					}
				else if (eventBuffer[i].EventType == MOUSE_EVENT) {
					

					if (eventBuffer[i].Event.MouseEvent.dwButtonState == FROM_LEFT_1ST_BUTTON_PRESSED){
						int posX = eventBuffer[i].Event.MouseEvent.dwMousePosition.X;
						int posY = eventBuffer[i].Event.MouseEvent.dwMousePosition.Y;
						textOut = "x = " + to_string(posX) + " y = " + to_string(posY) + " ";

						if (hw.txt_x1.isClicked(posX, posY)){								 		       //check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_x1.setCursor();
							tabIndex = 0;
							updateConsole = true;
						}
						else  if (hw.txt_y1.isClicked(posX, posY)){										//check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_y1.setCursor();
							tabIndex = 1;
							updateConsole = true;
						}
						else  if (hw.txt_x2_Slope.isClicked(posX, posY)){										//check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_x2_Slope.setCursor();
							tabIndex = 2;
							updateConsole = true;
						}
						else  if (hw.txt_y2.isClicked(posX, posY)){										//check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_y2.setCursor();
							tabIndex = 3;
							updateConsole = true;
						}
						else  if (hw.getProblem(posX, posY)){										//check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_x1.setCursor();
							for (int i = 0; i < 4; i++) {                                               //TODO FIND BETTER WAY 
								strInput[i] = "";
							}
							problemChoice = hw.problemClicked;
							hw.txt_x1.setText(strInput[0]);
							hw.txt_y1.setText(strInput[1]);
							hw.txt_x2_Slope.setText(strInput[2]);
							hw.txt_y2.setText(strInput[3]);
							draw.drawText(consoleBuffer01, "X", 11, 16, WIDTH, HEIGHT, 128);
							draw.drawText(consoleBuffer01, "Y", 23, 16, WIDTH, HEIGHT, 128);
							hw.txt_x1.visible(true);
							hw.txt_y1.visible(true);
							hw.txt_x2_Slope.visible(true);
							hw.txt_y2.visible(true);
							if (1 == problemChoice){
								hw.get2Pt();
							}
							else if (2 == problemChoice){
								hw.getPtSlope();
							}
						
							setCursorVisible(true);
							hw.txt_x1.setCursor();
							tabIndex = 0;
							updateConsole = true;
						}

						else  if (btnClear.isClicked(posX, posY)){										//check FROM_LEFT_1ST_BUTTON_PRESSED coordinates
							hw.txt_x1.setCursor();
							for (int i = 0; i < 4; i++) {//TODO FIND BETTER WAY 
								strInput[i] = "";
							}
							hw.txt_x1.setText(strInput[0]);
							hw.txt_y1.setText(strInput[1]);
							hw.txt_x2_Slope.setText(strInput[2]);
							hw.txt_y2.setText(strInput[3]);
							draw.drawText(consoleBuffer01, " ", 11, 16, WIDTH, HEIGHT, 128);
							draw.drawText(consoleBuffer01, " ", 23, 16, WIDTH, HEIGHT, 128);
							draw.drawText(consoleBuffer01, "        ", 1, 18, WIDTH, HEIGHT, 128, 10);
							draw.drawText(consoleBuffer01, "        ", 1, 24, WIDTH, HEIGHT, 128, 10);
							hw.txt_x1.visible(false);
							hw.txt_y1.visible(false);
							hw.txt_x2_Slope.visible(false);
							hw.txt_y2.visible(false);
							setCursorVisible(false);
							hw.txtOutput.setText("If you know two points on the line choose.   (Two-points form) If you know the line's slope and one point choose.  (Point-slope form) "); 
							draw.drawText(consoleBuffer01, "                                                            ", 10, 27, WIDTH, HEIGHT, 140, 24);
							tabIndex = 0;
							updateConsole = true;
						}
						else if (btnAbout.isClicked(posX, posY)){
							hw.txt_x1.setCursor();
							for (int i = 0; i < 4; i++) {//TODO FIND BETTER WAY 
								strInput[i] = "";
							}
							hw.txt_x1.setText(strInput[0]);
							hw.txt_y1.setText(strInput[1]);
							hw.txt_x2_Slope.setText(strInput[2]);
							hw.txt_y2.setText(strInput[3]);
							hw.txtOutput.clearText();
							draw.drawText(consoleBuffer01, " ", 11, 16, WIDTH, HEIGHT, 128);
							draw.drawText(consoleBuffer01, " ", 23, 16, WIDTH, HEIGHT, 128);
							draw.drawText(consoleBuffer01, "        ", 1, 18, WIDTH, HEIGHT, 128, 10);
							draw.drawText(consoleBuffer01, "        ", 1, 24, WIDTH, HEIGHT, 128, 10);
							hw.txt_x1.visible(false);
							hw.txt_y1.visible(false);
							hw.txt_x2_Slope.visible(false);
							hw.txt_y2.visible(false);
							setCursorVisible(false);
							hw.txtOutput.setText("" + APP_NAME + "  " + APP_DISCRIPTION + " " + APP_AUTHOR);
							draw.drawText(consoleBuffer01, "                                                            ", 10, 27, WIDTH, HEIGHT, 140, 24);
							//string _out = " " + APP_NAME + " \n" + APP_DISCRIPTION + " \n" + APP_AUTHOR;

							//MessageBoxA(console, _out.c_str(), "About", MB_OK);
							

							updateConsole = true;
						}
						else if (btnExit.isClicked(posX, posY)){
							exitApp = true;
						}

						else{
							textOut = textOut + "nothing clicked ";
							updateConsole = true;
						}


					}
					
				}
			}

			if (false){// debug x y mouse clicks
				draw.drawText(consoleBuffer01, textClear, 0, HEIGHT -1, WIDTH, HEIGHT, 128);                                 // clear old output to console buffer 
				draw.drawText(consoleBuffer01, textOut, 0, HEIGHT - 1, WIDTH, HEIGHT, 128);							  	      // write text output to console buffer  	
			}

			if (updateConsole)
			{
				switch (tabIndex){
				case 0:
					hw.txt_x1.setText(strInput[0]);
					break;
				case 1:
					hw.txt_y1.setText(strInput[1]);
					break;
				case 2:
					hw.txt_x2_Slope.setText(strInput[2]);
					break;
				case 3:
					hw.txt_y2.setText(strInput[3]);
					break;
			}
/***************************************************************************************************************************************************************************************
******************************     Homework        *************************************************************************************************************************************
****************************************************************************************************************************************************************************************/
				try{//TODO FIND BETTER WAY   may replace stod with double strtod( const char* str, char** str_end );
					// First-chance exception at 0x772C4598 in Assg_07_ models_of_non_vertical_line.exe: Microsoft C++ exception: std::invalid_argument at memory location 0x00B2F01C.
					if (1 == problemChoice){
						hw.get2Pt(stod(hw.txt_x1.getText()), stod(hw.txt_y1.getText()), stod(hw.txt_x2_Slope.getText()), stod(hw.txt_y2.getText()));
						hw.txtOutput.clearText();
						hw.display2Pt(hw._xp1, hw._yp1, hw._xp2, hw._yp2);
						hw.slopeIntcptForm2Pt(hw._xp1, hw._yp1, hw._xp2, hw._yp2);
						hw.displaySlopeIntcpt(hw.m, hw.intcptFromPtSlope(hw._xp1, hw._yp1, hw.m));
					}
					else if (2 == problemChoice){
                        hw.getPtSlope(stod(hw.txt_x1.getText()), stod(hw.txt_y1.getText()), stod(hw.txt_x2_Slope.getText()));
						hw.txtOutput.clearText();
						hw.diplayPtSlope(hw._xs1, hw._ys1, hw._slp);
						hw.displaySlopeIntcpt(hw._slp, hw.intcptFromPtSlope(hw._xs1, hw._ys1, hw._slp));
						
					}
				}
				catch (exception){

				}



				WriteConsoleOutputA(output, consoleBuffer01, characterBufferSize, characterPosition, &windowSize);
				try{//TODO FIND BETTER WAY   may replace stoi with  strtoi( const char* str, char** str_end );
					// First-chance exception at 0x772C4598 in Assg_07_ models_of_non_vertical_line.exe: Microsoft C++ exception: std::invalid_argument at memory location 0x00B2F01C.
					if (1 == problemChoice){
						draw.drawLineDiagonal(dc, stoi(hw.txt_x1.getText()), stoi(hw.txt_y1.getText()), stoi(hw.txt_x2_Slope.getText()), stoi(hw.txt_y2.getText()), 37, offsetydiagln, red);
					}
					else if (2 == problemChoice){
						// algorithm to covert point slope to two point form that fits graph area.
						yy1 = 999; yy2 = 999; xx1 = 999; xx2 = 999;
						x = stod(hw.txt_x1.getText()); y = stod(hw.txt_y1.getText()); m = stod(hw.txt_x2_Slope.getText());
						y1x75 = (m *(75 - x))+ y;
						y1xneg75 = (m *(-75 - x)) + y;
						
						if (y1x75 <= 75 && y1x75 >= -75){
							xx1 = 75;
							yy1 = y1x75;
						}
						else if (y1xneg75 <= 75 && y1xneg75 >= -75)
						{
							xx1 = -75;
							yy1 = y1xneg75;
						}
						x1y75    = ((75 - y)/m) + x ;
						x1yneg75 = ((-75 - y)/m) + x ;
						if (x1y75 <= 75 && x1y75 >= -75){
							yy1 = 75;
							xx1 = x1y75;
						}
						else if (x1yneg75 <= 75 && x1yneg75 >= -75)
						{
							yy1 = -75;
							xx1 = x1yneg75;
						}


						y1x75 = (m *(75 - xx1)) + yy1;
						y1xneg75 = (m *(-75 - xx1)) + yy1;

						if (y1x75 <= 75 && y1x75 >= -75 && xx1 != 75){
							xx2 = 75;
							yy2 = y1x75;
						}
						else if (y1xneg75 <= 75 && y1xneg75 >= -75 && xx1 != -75)
						{
							xx2 = -75;
							yy2 = y1xneg75;
						}
						x1y75 = ((75 - yy1) / m) + xx1;
						x1yneg75 = ((-75 - yy1) / m) + xx1;
						if (x1y75 <= 75 && x1y75 >= -75 && 75 != yy1){
							yy2 = 75;
							xx2 = x1y75;
						}
						else if (x1yneg75 <= 75 && x1yneg75 >= -75 && -75 != yy1)
						{
							yy2 = -75;
							xx2 = x1yneg75;
						}
						if (yy1 == 999 || yy2 == 999 || xx1 == 999 || xx2 == 999){

							draw.drawText(consoleBuffer01, "Line is out of range of the graph area.", 10, 27, WIDTH, HEIGHT, 140, 24);
							WriteConsoleOutputA(output, consoleBuffer01, characterBufferSize, characterPosition, &windowSize);
						}
						else{
							draw.drawLineDiagonal(dc, (int)xx1, (int)yy1, (int)xx2, (int)yy2, 37, offsetydiagln, red);
						}
						
					}
				
				}
				catch (exception){
				}
			updateConsole = false;
			}
			delete[] eventBuffer;                               // Clean up our event buffer:
			FlushConsoleInputBuffer(input);
		}
	}
};



void _init(){

	output = GetStdHandle(STD_OUTPUT_HANDLE);                    // set output handle to manipulate window output
	input = GetStdHandle(STD_INPUT_HANDLE);                      // set input to get input from console

	wstring stemp = wstring(APP_NAME.begin(), APP_NAME.end());   // Convert string to Long Pointer Wide STRing
	LPCWSTR sw = stemp.c_str();									 // Convert string to Long Pointer Wide STRing
	SetConsoleTitle(sw);                                         // Set Console Title

	windowSize = { 0, 0, WIDTH - 1, HEIGHT - 1 };                // set window size coordinates
	//COORD bufferSize = { WIDTH, HEIGHT };                      // set buffer size to write to console
	SetConsoleWindowInfo(output, TRUE, &windowSize);             // Set the window size must be const reference
	SetConsoleScreenBufferSize(output, characterBufferSize);     // Set the screen's buffer size

	for (int i = 0; i < WIDTH *HEIGHT; ++i) {                    // clear screen all vb form like grey
		consoleBuffer01[i].Char.AsciiChar = ' ';                 // Display all space
		consoleBuffer01[i].Attributes = 136;                     // color grey on grey
	}

                                                                 // cursor handle
	ci.dwSize = 10;                                              // set cursor size
	ci.bVisible = false;                                         // set cursor visibility
	SetConsoleCursorInfo(output, &ci);                           // send above to to console

}

void setCursorVisible(bool b){

		ci.dwSize = 10;                                           // set cursor size
		ci.bVisible = b;                                          // set cursor visibility
		SetConsoleCursorInfo(output, &ci);                        // send above to to console
}

void setCursorPosition(int x, int y)
{
	COORD crd;                                                   // COORDs hold coordinates
	crd.X = x;                                                   // COORD set X
	crd.Y = y;                                                   // COORD set y 
	SetConsoleCursorPosition(output, crd);                       // SetConsolePosition(HANDLE,COORD);
}
