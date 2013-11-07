////////////////////////////////////////////////////////////////////////////////
// Filename: Texturing.cpp
////////////////////////////////////////////////////////////////////////////////
#include "Texturing.h"


Texturing::Texturing()
{
	m_texture = 0;
}


Texturing::Texturing(const Texturing& other)
{
}


Texturing::~Texturing()
{
}


bool Texturing::Initialize(ID3D11Device* device, WCHAR* filename)
{
	HRESULT result;


	// Load the texture in.
	result = D3DX11CreateShaderResourceViewFromFile(device, filename, NULL, NULL, &m_texture, NULL);
	if(FAILED(result))
	{
		return false;
	}

	return true;
}


void Texturing::Shutdown()
{
	// Release the texture resource.
	if(m_texture)
	{
		m_texture->Release();
		m_texture = 0;
	}

	return;
}


ID3D11ShaderResourceView* Texturing::GetTexture()
{
	return m_texture;
}