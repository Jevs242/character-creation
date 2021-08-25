//Jose E Velazquez Sepulveda
//Naruto to Boruto Shinobi Striker

#include <iostream>
#include <string>\

#define e '\n';

using namespace std;

void verificacion(int& a);

class VoiceyName
{
public:
	void final4();
	void voces();
	void nombre();
	bool terminado = false;
private:
	string voice, name;
}z;

class Color
{
public:
	void tercerap();
	void swc();
	void final3();
private:
	string HairC = "Black", SkinC = "Peach", EyeC = "Blue", HeadbandC = "Black";

}y;

class Parts
{
public:
	void sw();
	void segundap();
	void final2();
private:
	string BodyType = "Type 3", Hair = "Hairstyle 1", Mouth = "Mouth 1", Eyes = "Eyes 2", Pupils = "Pupils 3", Eyebrows = "Eyebrows 2", Nose = "Nose 1", FacePaints = "FacePaints 3";
}v;

class Personaje : private Parts, private Color, private VoiceyName
{
public:
	int opc, opc1, counter;
	bool MoF;
	void primerap();
	void final();
	void review();
	Personaje();
	~Personaje();
private:
	string Gender, HomeVillage;
}x;


Personaje::Personaje()
{
	cout << "-|Bienvenido al Character Creation del Juego : Naruto to Boruto Shinobi Striker|-\n" << e;
	primerap();
	segundap();
	voces();
	nombre();
}

int main()
{

}

void Personaje::primerap()
{
	x.counter = 5;
	cout << "Select Home Village\n" << e;
	cout << "|1.Hidden Leaf Village\n|2.Hidden Sand Village\n|3.Hidden Mist Village\n|4.Hidden Stone Village\n|5.Hidden Cloud Village\n" << e;
	verificacion(x.opc);
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

	system("cls");
	x.counter = 2;
	cout << "Select Gender\n" << e;
	cout << "|1.Male\n|2.Female\n" << e;
	verificacion(x.opc);
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
	system("cls");

}

void Personaje::final()
{
	cout << "\n\n|Home Village --> " << HomeVillage << "\n\n|Genero --> " << Gender << e;
}

void Personaje::review()
{
	cout << "-------------[Tu Personaje]-------------" << e;
	final();
	final2();
	final3();
	final4();
	if (z.terminado == true)
	{
		cout << "----------------[Character Creation Completed]----------------\n\n" << e;
	}
	system("pause");
}

void Parts::segundap()
{
	do
	{
		x.counter = 11;
		cout << "---------[Appearance Settings]----------\n\n-----------------[Part]-----------------" << e;

		cout << "\n---------->[11.Ver Personaje]<----------\n\n|1.Body Type  \n|2.Hair \n|3.Eyesbrows \n|4.Eyes  \n|5.Pupils  \n|6.Nose  \n|7.Mouth \n|8.Face Paints\n\n\n         [_[Part]_] [_9.Color_]\n\n\n\n         [_____10.Confirm_____]" << e;

		verificacion(x.opc);
		system("cls");
		cout << "---------[Appearance Settings]----------\n\n-----------------[Part]-----------------\n" << e;
		x.counter = 3;
		switch (x.opc)
		{
		case 1:
			cout << "|Body Type\n" << e;
			cout << "1.Type 1 (Little)\n2.Type 2 (Strong)\n3.Type 3 (Tall)" << e;
			sw();
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
			sw();
			break;
		case 3:
			cout << "|Eyesbrows\n" << e;
			cout << "1.Eyebrows 1 (Medium)\n2.Eyebrows 2 (Little)\n3.Eyebrows 3 (Big)" << e;
			sw();
			break;
		case 4:
			cout << "|Eyes\n" << e;
			cout << "1.Eye 1 (Medium)\n2.Eye 2 (Little)\n3.Eye 3 (Big)" << e;
			sw();
			break;
		case 5:
			cout << "|Pupils\n" << e;
			cout << "1.Pupils 1 (1 Full Color)\n2.Pupils 2 (Hyuga)\n3.Pupils 3 (Normal)" << e;
			sw();
			break;
		case 6:
			cout << "|Nose\n" << e;
			cout << "1.Nose 1 (Medium)\n2.Nose 2 (Little)\n3.Nose 3(Big)" << e;
			sw();
			break;
		case 7:
			cout << "|Mouth\n" << e;
			cout << "1.Mouth 1 (Little)\n2.Mouth 2 (Big)\n3.Mouth 3 (Medium)" << e;
			sw();
			break;
		case 8:
			cout << "|Face Paints\n" << e;
			cout << "1.Face Paints 1 (Naruto)\n2.Face Paints 2 (Kiba Clan) \n3.Face Paints 3 (Gaara)" << e;
			sw();
			break;
		case 9:
			y.tercerap();
			break;
		case 10:
			cout << "Confirm" << e;
			system("cls");
			break;
		case 11:
			system("cls");
			x.review();
			break;
		default:
			break;
		}
		system("cls");
	} while (x.opc != 10);


}

void Parts::final2()
{
	cout << "\n|Body Type --> " << BodyType << "\n\n|Hair --> " << Hair << "\n\n|Eyes Brows --> " << Eyebrows << "\n\n|Eyes --> " << Eyes << "\n\n|Pupils --> " << Pupils << "\n\n|Nose --> " << Nose << "\n\n|Mouth --> " << Mouth << "\n\n|Face Paints --> " << FacePaints << e;
}

void Color::tercerap()
{
	x.counter = 7;
	system("cls");
	cout << "---------[Appearance Settings]----------\n\n-----------------[Color]----------------" << e;

	cout << "\n----------->[7.Ver Personaje]<----------\n\n|1.Hair Color \n|2.Skin Color \n|3.Eye Color \n|4.Parts Color (Headband)  \n\n\n         [_5.Parts_] [_[Color]_] \n\n\n\n         [_____6.Confirm______]" << e;

	verificacion(x.opc);
	system("cls");
	cout << "---------[Appearance Settings]----------\n\n-----------------[Color]----------------" << e;
	switch (x.opc)
	{
	case 1:
		cout << "\n|Hair Color\n" << e;
		cout << "1.Black \n2.Blue \n3.Brown " << e;
		x.opc = 9;
		swc();
		break;
	case 2:
		cout << "\n|Skin Color\n" << e;
		cout << "1.Peach \n2.White \n3.Brown " << e;
		x.opc = 11;
		swc();
		break;
	case 3:
		cout << "\n|Eye Color\n" << e;
		cout << "1.Black \n2.Blue \n3.Brown " << e;
		x.opc = 12;
		swc();
		break;
	case 4:
		cout << "\n|Parts Color (Headband)\n" << e;
		cout << "1.Black \n2.Blue \n3.Red " << e;
		x.opc = 13;
		swc();
		break;
	case 5:
		cout << "\nParts\n" << e;
		break;
	case 6:
		cout << "Confirm" << e;
		x.opc = 10;
		system("cls");
		break;
	case 7:
		system("cls");
		x.review();
	}
	system("cls");


}

void Color::swc()
{
	x.counter = 3;
	verificacion(x.opc1);

	switch (x.opc1)
	{
	case 1:
		if (x.opc == 9)
		{
			HairC = "Black";
		}
		else if (x.opc == 11)
		{
			SkinC = "Peach";
		}
		else if (x.opc == 12)
		{
			EyeC = "Black";
		}
		else if (x.opc == 13)
		{
			HeadbandC = "Black";
		}
		break;
	case 2:
		if (x.opc == 9)
		{
			HairC = "Blue";
		}
		else if (x.opc == 11)
		{
			SkinC = "White";
		}
		else if (x.opc == 12)
		{
			EyeC = "Blue";
		}
		else if (x.opc == 13)
		{
			HeadbandC = "Blue";
		}
		break;
	case 3:
		if (x.opc == 9)
		{
			HairC = "Brown";
		}
		else if (x.opc == 11)
		{
			SkinC = "Brown";
		}
		else if (x.opc == 12)
		{
			EyeC = "Brown";
		}
		else if (x.opc == 13)
		{
			HeadbandC = "Red";
		}
		break;
	}
	tercerap();

}

void Color::final3()
{
	cout << "\n|Hair Color --> " << HairC << "\n\n|Skin Color --> " << SkinC << "\n\n|Eyes Color --> " << EyeC << "\n\n|Parts Color (HeadBand) --> " << HeadbandC << "\n" << e;
}

void Parts::sw()
{
	x.counter = 3;
	cin >> x.opc1;
	switch (x.opc1)
	{
	case 1:
		if (x.opc == 1)
		{
			BodyType = "Body Type 1";
		}
		else if (x.opc == 2)
		{
			Hair = "Hairstyle 1";
		}
		else if (x.opc == 3)
		{
			Eyebrows = "Eyebrows 1";
		}
		else if (x.opc == 4)
		{
			Eyes = "Eyes 1";
		}
		else if (x.opc == 5)
		{
			Pupils = "Pupils 1";
		}
		else if (x.opc == 6)
		{
			Nose = "Nose 1";
		}
		else if (x.opc == 7)
		{
			Mouth = "Mouth 1";

		}
		else if (x.opc == 8)
		{
			FacePaints = "FacePaints 1";
		}
		break;
	case 2:
		if (x.opc == 1)
		{
			BodyType = "Body Type 2";
		}
		else if (x.opc == 2)
		{
			Hair = "Hairstyle 2";
		}
		else if (x.opc == 3)
		{
			Eyebrows = "Eyebrows 2";
		}
		else if (x.opc == 4)
		{
			Eyes = "Eyes 2";
		}
		else if (x.opc == 5)
		{
			Pupils = "Pupils 2";
		}
		else if (x.opc == 6)
		{
			Nose = "Nose 2";
		}
		else if (x.opc == 7)
		{
			Mouth = "Mouth 2";

		}
		else if (x.opc == 8)
		{
			FacePaints = "FacePaints 2";
		}
		break;
	case 3:
		if (x.opc == 1)
		{
			BodyType = "Body Type 3";
		}
		else if (x.opc == 2)
		{
			Hair = "Hairstyle 3";
		}
		else if (x.opc == 3)
		{
			Eyebrows = "Eyebrows 3";
		}
		else if (x.opc == 4)
		{
			Eyes = "Eyes 3";
		}
		else if (x.opc == 5)
		{
			Pupils = "Pupils 3";
		}
		else if (x.opc == 6)
		{
			Nose = "Nose 3";
		}
		else if (x.opc == 7)
		{
			Mouth = "Mouth 3";

		}
		else if (x.opc == 8)
		{
			FacePaints = "FacePaints 3";
		}
		break;
	}
}

Personaje::~Personaje()
{
	z.terminado = true;
	review();
}

void verificacion(int& a)
{
	while (true)
	{
		cin >> a;
		if (!cin.good())
		{
			cout << "Solo numeros : ";
			cin.clear();//Borrar datos del cin
			cin.ignore(numeric_limits<streamsize>::max(), '\n');//Ignora los espacios
		}
		else if (x.counter == 2 && a > 2 || x.counter == 3 && a > 3 || x.counter == 5 && a > 5 || x.counter == 11 && a > 11 || x.counter == 7 && a > 7)
		{
			cout << "Opcion Invalida" << e;
			cin.clear();
			cin.ignore(numeric_limits<streamsize>::max(), '\n');
		}
		else
			break;
	}
}

void VoiceyName::final4()
{
	cout << "Voice --> " << voice << e;
	cout << "\nNombre -->" << name << "\n\n" << e;
}

void VoiceyName::voces()
{
	x.counter = 3;
	cout << "-----------[Select Voice]-----------\n\n---------------[Voice]--------------\n" << e;
	cout << "|1.Voice 1 (Acute)\n|2.Voice 2 (Deep)\n|3.Voice 3 (Hoarse)\n" << e;
	verificacion(x.opc);
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

void VoiceyName::nombre()
{
	system("cls");
	x.counter = 3;
	cout << "---------------[Register]---------------\n" << e;
	cout << "|1.Enter Name \n|2.Register Avatar\n" << e;
	verificacion(x.opc);
	switch (x.opc)
	{
	case 1:
		system("cls");
		cout << "|Enter Name|\n" << e;
		cout << "|Give your avatar a name|\n" << e;
		cin >> name;
		nombre();
		break;
	case 2:
		system("cls");
		if (name == "")
		{
			cout << "|Put a name : ";
			cin >> name;
		}
		system("cls");
		break;
	}
}
