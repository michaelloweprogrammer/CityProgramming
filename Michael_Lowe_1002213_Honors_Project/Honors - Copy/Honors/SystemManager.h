//********** System   Manager Class  ***************************************
//********** Created by Michael Lowe ***************************************
//********** 02/10/2013              ***************************************
//********** Honors project prototype***************************************

#ifndef _SYSTEMMANAGER_H_
#define _SYSTEMMANAGER_H_

#define WIN32_LEAN_AND_MEAN// PRE-PROCESSING DIRECTIVES
//********** Includes                ***************************************
// INCLUDES
	#include <Windows.h>
	#include "InputsManager.h"
	#include "GraphicsManager.h"
	#include "Audio.h"
	#include "2DAudio.h"

//********** Globals                 ***************************************

//********** Class Prototypes        ***************************************

		class SystemManager
			{
				public:
					SystemManager();
					SystemManager(const SystemManager&);
					~SystemManager();

					bool Initialize();
					void Shutdown();
					void Run();

					LRESULT CALLBACK MessageHandler(HWND, UINT, WPARAM, LPARAM);
				private:
						bool Frame();
						void InitializeWindows(int&, int&);
						void ShutdownWindows();

				private:
						LPCWSTR m_applicationName;
						HINSTANCE m_hinstance;
						HWND m_hwnd;

						InputsManager* m_Input;
						GraphicsManager* m_Graphics;
						//create a pointer to a audio obj
						Audio* m_Sound[100];
						twoDAudio* m_Sound2[100];
						//Model
						ModelTriangle* m_Triangle;
			};

		// FUNCTION PROTOTYPES
		static LRESULT CALLBACK WndProc(HWND, UINT, WPARAM, LPARAM);
		// GLOBALS
		static SystemManager* ApplicationHandle = 0;

	#endif