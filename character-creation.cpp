//Jose Velazquez
//Naruto to Boruto Shinobi Striker

#include "character-creation.h"

Character::Character()
{
	cout << "-|Welcome to the creation of characters for the game : Naruto to Boruto Shinobi Striker|-\n" << e;
	FirstPart();
	SecondPart();
	Voices();
	Name();
}

int main()
{

}

void ClearScreen() {
#ifdef _WIN32
    system("cls"); // Windows
#else
    system("clear"); // Linux and macOS
#endif
}

void Pause() {
#ifdef _WIN32
    system("pause");
#else
    cout << "Press Enter to continue...";
    cin.ignore();
    cin.get(); // Linux and macOS
#endif
}

void Character::FirstPart()
{
	x.counter = 5;
	cout << "Select Home Village\n" << e;
	cout << "|1.Hidden Leaf Village\n|2.Hidden Sand Village\n|3.Hidden Mist Village\n|4.Hidden Stone Village\n|5.Hidden Cloud Village\n" << e;
	x.Verification(x.opc);
	switch (x.opc)
	{
	case 1:
		HomeVillage = "Hidden Leaf Village";
		break;
	case 2:
		HomeVillage = "Hidden Sand Village";
		break;
	case 3:
		HomeVillage = "Hidden Mist Village";
		break;
	case 4:
		HomeVillage = "Hidden Stone Village";
		break;
	case 5:
		HomeVillage = "Hidden Cloud Village";
		break;
	default:
		break;
	}

	ClearScreen();
	x.counter = 2;
	cout << "Select Gender\n" << e;
	cout << "|1.Male\n|2.Female\n" << e;
	x.Verification(x.opc);
	switch (x.opc)
	{
	case 1:
		Gender = "Male";
		x.MoF = true;
		break;
	case 2:
		Gender = "Female";
		x.MoF = false;
		break;
	default:
		break;
	}
	ClearScreen();

}

void Character::Final()
{
	cout << "\n\n|Home Village --> " << HomeVillage << "\n\n|Gender --> " << Gender << e;
}

void Character::review()
{
	cout << "-------------[Your Character]-------------" << e;
	Final();
	Final2();
	Final3();
	Final4();
	if (z.finish == true)
	{
		cout << "----------------[Character Creation Completed]----------------\n\n" << e;
	}
	Pause();
}

void Parts::SecondPart()
{
	do
	{
		x.counter = 11;
		cout << "---------[Appearance Settings]----------\n\n-----------------[Part]-----------------" << e;

		cout << "\n---------->[11.Ver Personaje]<----------\n\n|1.Body Type  \n|2.Hair \n|3.Eyesbrows \n|4.Eyes  \n|5.Pupils  \n|6.Nose  \n|7.Mouth \n|8.Face Paints\n\n\n         [_[Part]_] [_9.Color_]\n\n\n\n         [_____10.Confirm_____]" << e;

		x.Verification(x.opc);
		ClearScreen();
		cout << "---------[Appearance Settings]----------\n\n-----------------[Part]-----------------\n" << e;
		x.counter = 3;
		switch (x.opc)
		{
		case 1:
			cout << "|Body Type\n" << e;
			cout << "1.Type 1 (Little)\n2.Type 2 (Strong)\n3.Type 3 (Tall)" << e;
			Aspect();
			break;
		case 2:
			cout << "|Hair\n" << e;
			cout << "1.Hairstyle 1 ";
			if (x.MoF == true)
			{
				cout << "(Naruto)" << e;;

			}
			else
			{
				cout << "(Sakura)" << e;
			}
			cout << "\n2.Hairstyle 2 ";
			if (x.MoF == true)
			{
				cout << "(Sasuke)" << e;
			}
			else
			{
				cout << "(Hinata)" << e;
			}
			cout << "\n3.Hairstyle 3 ";
			if (x.MoF == true)
			{
				cout << "(Kakashi)\n" << e;
			}
			else
			{
				cout << "(Ino)\n" << e;
			}
			Aspect();
			break;
		case 3:
			cout << "|Eyesbrows\n" << e;
			cout << "1.Eyebrows 1 (Medium)\n2.Eyebrows 2 (Little)\n3.Eyebrows 3 (Big)" << e;
			Aspect();
			break;
		case 4:
			cout << "|Eyes\n" << e;
			cout << "1.Eye 1 (Medium)\n2.Eye 2 (Little)\n3.Eye 3 (Big)" << e;
			Aspect();
			break;
		case 5:
			cout << "|Pupils\n" << e;
			cout << "1.Pupils 1 (1 Full Color)\n2.Pupils 2 (Hyuga)\n3.Pupils 3 (Normal)" << e;
			Aspect();
			break;
		case 6:
			cout << "|Nose\n" << e;
			cout << "1.Nose 1 (Medium)\n2.Nose 2 (Little)\n3.Nose 3(Big)" << e;
			Aspect();
			break;
		case 7:
			cout << "|Mouth\n" << e;
			cout << "1.Mouth 1 (Little)\n2.Mouth 2 (Big)\n3.Mouth 3 (Medium)" << e;
			Aspect();
			break;
		case 8:
			cout << "|Face Paints\n" << e;
			cout << "1.Face Paints 1 (Naruto)\n2.Face Paints 2 (Kiba Clan) \n3.Face Paints 3 (Gaara)" << e;
			Aspect();
			break;
		case 9:
			y.ThreePart();
			break;
		case 10:
			cout << "Confirm" << e;
			ClearScreen();
			break;
		case 11:
			ClearScreen();
			x.review();
			break;
		default:
			break;
		}
		ClearScreen();
	} while (x.opc != 10);


}

void Parts::Final2()
{
	cout << "\n|Body Type --> " << bodyType << "\n\n|Hair --> " << hair << "\n\n|Eyes Brows --> " << eyebrows << "\n\n|Eyes --> " << eyes << "\n\n|Pupils --> " << pupils << "\n\n|Nose --> " << nose << "\n\n|Mouth --> " << mouth << "\n\n|Face Paints --> " << facePaints << e;
}

void Color::ThreePart()
{
	x.counter = 7;
	ClearScreen();
	cout << "---------[Appearance Settings]----------\n\n-----------------[Color]----------------" << e;

	cout << "\n----------->[7.View Character]<----------\n\n|1.Hair Color \n|2.Skin Color \n|3.Eye Color \n|4.Parts Color (Headband)  \n\n\n         [_5.Parts_] [_[Color]_] \n\n\n\n         [_____6.Confirm______]" << e;

	x.Verification(x.opc);
	ClearScreen();
	cout << "---------[Appearance Settings]----------\n\n-----------------[Color]----------------" << e;
	switch (x.opc)
	{
	case 1:
		cout << "\n|Hair Color\n" << e;
		cout << "1.Black \n2.Blue \n3.Brown " << e;
		x.opc = 9;
		AspectColor();
		break;
	case 2:
		cout << "\n|Skin Color\n" << e;
		cout << "1.Peach \n2.White \n3.Brown " << e;
		x.opc = 11;
		AspectColor();
		break;
	case 3:
		cout << "\n|Eye Color\n" << e;
		cout << "1.Black \n2.Blue \n3.Brown " << e;
		x.opc = 12;
		AspectColor();
		break;
	case 4:
		cout << "\n|Parts Color (Headband)\n" << e;
		cout << "1.Black \n2.Blue \n3.Red " << e;
		x.opc = 13;
		AspectColor();
		break;
	case 5:
		cout << "\nParts\n" << e;
		break;
	case 6:
		cout << "Confirm" << e;
		x.opc = 10;
		ClearScreen();
		break;
	case 7:
		ClearScreen();
		x.review();
	}
	ClearScreen();


}

void Color::AspectColor()
{
	x.counter = 3;
	x.Verification(x.opc1);

	switch (x.opc1)
	{
	case 1:
		if (x.opc == 9)
		{
			hairC = "Black";
		}
		else if (x.opc == 11)
		{
			skinC = "Peach";
		}
		else if (x.opc == 12)
		{
			eyeC = "Black";
		}
		else if (x.opc == 13)
		{
			headbandC = "Black";
		}
		break;
	case 2:
		if (x.opc == 9)
		{
			hairC = "Blue";
		}
		else if (x.opc == 11)
		{
			skinC = "White";
		}
		else if (x.opc == 12)
		{
			eyeC = "Blue";
		}
		else if (x.opc == 13)
		{
			headbandC = "Blue";
		}
		break;
	case 3:
		if (x.opc == 9)
		{
			hairC = "Brown";
		}
		else if (x.opc == 11)
		{
			skinC = "Brown";
		}
		else if (x.opc == 12)
		{
			eyeC = "Brown";
		}
		else if (x.opc == 13)
		{
			headbandC = "Red";
		}
		break;
	}
	ThreePart();

}

void Color::Final3()
{
	cout << "\n|Hair Color --> " << hairC << "\n\n|Skin Color --> " << skinC << "\n\n|Eyes Color --> " << eyeC << "\n\n|Parts Color (HeadBand) --> " << headbandC << "\n" << e;
}

void Parts::Aspect()
{
	x.counter = 3;
	cin >> x.opc1;
	switch (x.opc1)
	{
	case 1:
		if (x.opc == 1)
		{
			bodyType = "Body Type 1";
		}
		else if (x.opc == 2)
		{
			hair = "Hairstyle 1";
		}
		else if (x.opc == 3)
		{
			eyebrows = "Eyebrows 1";
		}
		else if (x.opc == 4)
		{
			eyes = "Eyes 1";
		}
		else if (x.opc == 5)
		{
			pupils = "Pupils 1";
		}
		else if (x.opc == 6)
		{
			nose = "Nose 1";
		}
		else if (x.opc == 7)
		{
			mouth = "Mouth 1";

		}
		else if (x.opc == 8)
		{
			facePaints = "FacePaints 1";
		}
		break;
	case 2:
		if (x.opc == 1)
		{
			bodyType = "Body Type 2";
		}
		else if (x.opc == 2)
		{
			hair = "Hairstyle 2";
		}
		else if (x.opc == 3)
		{
			eyebrows = "Eyebrows 2";
		}
		else if (x.opc == 4)
		{
			eyes = "Eyes 2";
		}
		else if (x.opc == 5)
		{
			pupils = "Pupils 2";
		}
		else if (x.opc == 6)
		{
			nose = "Nose 2";
		}
		else if (x.opc == 7)
		{
			mouth = "Mouth 2";

		}
		else if (x.opc == 8)
		{
			facePaints = "FacePaints 2";
		}
		break;
	case 3:
		if (x.opc == 1)
		{
			bodyType = "Body Type 3";
		}
		else if (x.opc == 2)
		{
			hair = "Hairstyle 3";
		}
		else if (x.opc == 3)
		{
			eyebrows = "Eyebrows 3";
		}
		else if (x.opc == 4)
		{
			eyes = "Eyes 3";
		}
		else if (x.opc == 5)
		{
			pupils = "Pupils 3";
		}
		else if (x.opc == 6)
		{
			nose = "Nose 3";
		}
		else if (x.opc == 7)
		{
			mouth = "Mouth 3";

		}
		else if (x.opc == 8)
		{
			facePaints = "FacePaints 3";
		}
		break;
	}
}

Character::~Character()
{
	z.finish = true;
	review();
}

void Character::Verification(int& a)
{
	while (true)
	{
		cin >> a;
		if (!cin.good())
		{
			cout << "Only Numbers : ";
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else if (x.counter == 2 && a > 2 || x.counter == 3 && a > 3 || x.counter == 5 && a > 5 || x.counter == 11 && a > 11 || x.counter == 7 && a > 7)
		{
			cout << "Invalid option" << e;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
			break;
	}
}

void VoiceyName::Final4()
{
	cout << "Voice --> " << voice << e;
	cout << "\nName -->" << name << "\n\n" << e;
}

void VoiceyName::Voices()
{
	x.counter = 3;
	cout << "-----------[Select Voice]-----------\n\n---------------[Voice]--------------\n" << e;
	cout << "|1.Voice 1 (Acute)\n|2.Voice 2 (Deep)\n|3.Voice 3 (Hoarse)\n" << e;
	x.Verification(x.opc);
	switch (x.opc)
	{
	case 1:
		voice = "Voice 1";
		break;
	case 2:
		voice = "Voice 2";
		break;
	case 3:
		voice = "Voice 3";
		break;
	}
}

void VoiceyName::Name()
{
	ClearScreen();
	x.counter = 3;
	cout << "---------------[Register]---------------\n" << e;
	cout << "|1.Enter Name \n|2.Register Avatar\n" << e;
	x.Verification(x.opc);
	switch (x.opc)
	{
	case 1:
		ClearScreen();
		cout << "|Enter Name|\n" << e;
		cout << "|Give your avatar a name|\n" << e;
		cin >> name;
		Name();
		break;
	case 2:
		ClearScreen();
		if (name == "")
		{
			cout << "|Put a name : ";
			cin >> name;
		}
		ClearScreen();
		break;
	}
}
