#pragma once
#include <iostream>
#include <string>

#define e '\n';

using namespace std;

class VoiceyName
{
public:
	void Final4();
	void Voices();
	void Name();
	bool finish = false;
private:
	string voice, name;
}z;

class Color
{
public:
	void ThreePart();
	void AspectColor();
	void Final3();
private:
	string hairC = "Black", skinC = "Peach", eyeC = "Blue", headbandC = "Black";

}y;

class Parts
{
public:
	void Aspect();
	void SecondPart();
	void Final2();
private:
	string bodyType = "Type 3", hair = "Hairstyle 1", mouth = "Mouth 1", eyes = "Eyes 2", pupils = "Pupils 3", eyebrows = "Eyebrows 2", nose = "Nose 1", facePaints = "FacePaints 3";
}v;

class Character : private Parts, private Color, private VoiceyName
{
public:
	int opc, opc1, counter;
	bool MoF;
	void FirstPart();
	void Final();
	void review();
	void Verification(int& a);
	Character();
	~Character();
private:
	string Gender, HomeVillage;
}x;