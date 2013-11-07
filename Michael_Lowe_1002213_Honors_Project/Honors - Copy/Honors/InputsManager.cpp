//********** Inputs Manager Class    ***************************************
//********** Created by Michael Lowe ***************************************
//********** 02/10/2013              ***************************************
//********** Honors project prototype***************************************

//********** Includes
#include "InputsManager.h"


InputsManager::InputsManager()
{

}
InputsManager::InputsManager(const InputsManager&)
{

}
InputsManager::~InputsManager()
{

}
					
void InputsManager::InitInputManager()
{
	int i = 0; //declaring a local vairable for the for loop
	
	for (i; i < 256; i++){ mkeys[i] = false;}// Initialize all the keys to being released and not pressed.

	return;
}
void InputsManager::KeyDown(unsigned int input)
{
	mkeys[input] = true;
	return;
}
void InputsManager::KeyIsUp(unsigned int input)
{
	mkeys[input] = false;
	return;
}
bool InputsManager::IsKeyDown(unsigned int key)
{
	return mkeys[key];	
}