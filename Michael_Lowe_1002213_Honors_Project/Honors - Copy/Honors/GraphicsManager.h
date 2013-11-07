//********** Graphics Manager Class  ***************************************
//********** Created by Michael Lowe ***************************************
//********** 02/10/2013              ***************************************
//********** Honors project prototype***************************************

#ifndef _GRAPHICSMANAGER_H_
#define _GRAPHICSMANAGER_H_

//********** Includes                ***************************************
#include "Directx11Init.h"
#include "CameraClass.h"
#include "ModelClass.h"
#include "ModelTriangle.h"
#include "ColourShader.h"
#include "TextureShader.h"
#include "Texturing.h"
//********** Globals                 ***************************************
const bool  FULL_SCREEN   = false;
const bool  VSYNC_ENABLED = true;
const float SCREEN_DEPTH  = 1000000.0f;
const float SCREEN_NEAR   = 0.1f;
//********** Class Prototypes        ***************************************

		class GraphicsManager
			{
				public:
					GraphicsManager();
					GraphicsManager(const GraphicsManager&);
					~GraphicsManager();

					bool Initialize(int, int, HWND);
					void Shutdown();
					bool Frame();
			     private:
					bool Render();

				private:
					DirectxInit  *m_D3D;
					ColourShader *m_ColourShader;
					ModelClass *m_Model;
					CameraClass*m_Camera;
					ModelTriangle *m_Triangle;
					TextureShader* m_TextureShader;
			};

	#endif