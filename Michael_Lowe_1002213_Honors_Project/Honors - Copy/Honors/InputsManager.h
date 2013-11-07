//********** Inputs Manager Class    ***************************************
//********** Created by Michael Lowe ***************************************
//********** 02/10/2013              ***************************************
//********** Honors project prototype***************************************

#ifndef _INPUTSMANAGER_H_
#define _INPUTSMANAGER_H_

//********** Includes                ***************************************
//********** Globals                 ***************************************

		class InputsManager
			{
				public:
					InputsManager();                    // Default constructor
					InputsManager(const InputsManager&);// Default constructor
					~InputsManager();                   // Default deconstructor
					
					void InitInputManager();            //Initalise function
					void KeyDown(unsigned int);         //Keydown function
					void KeyIsUp(unsigned int);         //Key up  function
					bool IsKeyDown(unsigned int);       //Check to see if key is down
				
				private:
					bool mkeys[256];             //declaring an array to contain all the keys
				
			};

	#endif