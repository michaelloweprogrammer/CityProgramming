#ifndef _AUDIO_H_
#define _AUDIO_H_

// Linking
#pragma comment(lib, "dsound.lib")
#pragma comment(lib, "dxguid.lib")
#pragma comment(lib, "winmm.lib")

//includes
#include <windows.h>
#include <mmsystem.h>
#include <dsound.h>
#include <stdio.h>



class Audio
{

public:
	char* location;
	int  AudioType;
private:
	//structs
		struct WaveHeaderType
	{
		char chunkId[4];
		unsigned long chunkSize;
		char format[4];
		char subChunkId[4];
		unsigned long subChunkSize;
		unsigned short audioFormat;
		unsigned short numChannels;
		unsigned long sampleRate;
		unsigned long bytesPerSecond;
		unsigned short blockAlign;
		unsigned short bitsPerSample;
		char dataChunkId[4];
		unsigned long dataSize;
	};
		
public:
	//prototypes
	Audio();
	Audio(const Audio&);
	~Audio();

	bool setAudio(char* Location);
	bool Initialize(HWND,int);
	void Shutdown();
private:
	//prototypes
	bool InitializeDirectSound(HWND);
	void ShutdownDirectSound();

	bool LoadWaveFile(char*, IDirectSoundBuffer8**, IDirectSound3DBuffer8**);
	bool LoadMp3File(char*, IDirectSoundBuffer8**, IDirectSound3DBuffer8**);
	void ShutdownWaveFile(IDirectSoundBuffer8**, IDirectSound3DBuffer8**);

	bool PlayWaveFile();
	bool PlayWaveFile2d();
private:
	//Variales
	IDirectSound8* m_DirectSound;
	IDirectSoundBuffer* m_primaryBuffer;
	IDirectSound3DListener8* m_listener;
	IDirectSoundBuffer8* m_secondaryBuffer1;
	IDirectSound3DBuffer8* m_secondary3DBuffer1;
	
	


};
#endif