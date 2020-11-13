//pritaikytas steam chat
#include <iostream>
#include <string>

using namespace std;

string IvedimasEmoticonas();
string IvedimasSimboliai();
//string BeTarpu(string nice);
string MazRaides(string nice);
void Spausdintuvas(char simb, string zodis, string whitespace, string Sriftas[5][3], int ind1, int ind2, int &x);
void Skaiciuotuvas(string zodis, string whitespace, string A[5][3], string B[5][3], string C[5][3], string D[5][3], string E[5][3], string F[5][3], string G[5][3], string H[5][3], string I[5][3], string Y[5][3], string J[5][3], string K[5][3], string L[5][3], string M[5][3], string N[5][3], string O[5][3], string P[5][3], string R[5][3], string S[5][3], string T[5][3], string U[5][3], string V[5][3], string Z[5][3], string W[5][3], string Q[5][3], string X[5][3], string Kl[5][3], string Ts[5][3]);
int main()
{
	string zodis, emoticonas, whitespace, tzodis;



	zodis = MazRaides(IvedimasSimboliai());
	emoticonas = IvedimasEmoticonas();
	whitespace = "__"; //pakeisti jei norima kitokiu tustuma uzpildanciu simboliu

	

	string A[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string B[5][3] = { emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace };
	string C[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas };
	string D[5][3] = { emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace };
	string E[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas };
	string F[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace };
	string G[5][3] = { whitespace,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas };
	string H[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string I[5][3] = { emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,emoticonas,emoticonas,emoticonas };
	string Y[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace };
	string J[5][3] = { whitespace,whitespace,emoticonas,whitespace,whitespace,whitespace,whitespace,whitespace,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace };
	string K[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string L[5][3] = { emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas };
	string M[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string N[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas };
	string O[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas };
	string P[5][3] = { emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace };
	string R[5][3] = { emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string S[5][3] = { emoticonas,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas,emoticonas };
	string T[5][3] = { emoticonas,emoticonas,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace };
	string U[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas };
	string V[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,whitespace };
	string Z[5][3] = { emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace,whitespace,emoticonas,emoticonas,emoticonas };
	string W[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,emoticonas,whitespace,emoticonas };
	string Q[5][3] = { whitespace,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas };
	string X[5][3] = { emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace,emoticonas,whitespace,emoticonas,emoticonas,whitespace,emoticonas };
	string Kl[5][3] = { emoticonas,emoticonas,emoticonas,whitespace,whitespace,emoticonas,whitespace,emoticonas,whitespace,whitespace,whitespace,whitespace,whitespace,emoticonas,whitespace };
	string Ts[5][3] = { whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,whitespace,emoticonas,whitespace };
	//"sriftai"


	Skaiciuotuvas(zodis, whitespace, A, B, C, D, E, F, G, H, I, Y, J, K, L, M, N, O, P, R, S, T, U, V, Z, W, Q, X, Kl, Ts);

	

	return 0;
}
void Spausdintuvas(char simb, string zodis, string whitespace, string Sriftas[5][3], int i, int j, int &x)
{
	if (simb == ' ')
		cout << whitespace;
	else
	{
		for (int k = 0; k < 3; k++) //3, nes sriftu dydis 5x3
		{
			if (x == 0 && k == 0)
			{
				cout << "." << Sriftas[i][k];
				x = 1;
			}
			else if (x != 0 && k == 0)
				cout << Sriftas[i][k];
			if (k == 1 || k == 2)
				cout << Sriftas[i][k];

			if (zodis.length() - j != 1 && k == 2) //tarpai tarp simboliu
				cout << whitespace;
			if (zodis.length() - j == 1 && k == 2) //i eilutes pabaiga
				cout << '\n' << '\n';
		}
	}
}
string MazRaides(string nice)
{
	string tzodis;
	for (size_t i = 0; i < nice.length(); i++)
	{
		tzodis += char(tolower(nice[i]));
	}
	return tzodis;
}
/*string BeTarpu(string nice)
{
	string be_tarpu;

	for (size_t i = 0; i < nice.length(); i++)
	{
		if (nice[i] != ' ')
			be_tarpu += nice[i];
	}
	return be_tarpu;
}*/
string IvedimasSimboliai()
{
	string nice;

	cout << "Simboliai: ";
	getline(cin, nice);

	return nice;
}
string IvedimasEmoticonas()
{
	string nice;

	cout << "Iveskite emoticona (:tavoemoticonas:) : ";
	cin >> nice;

	return nice;
}
void Skaiciuotuvas(string zodis, string whitespace, string A[5][3], string B[5][3], string C[5][3], string D[5][3], string E[5][3], string F[5][3], string G[5][3], string H[5][3], string I[5][3], string Y[5][3], string J[5][3], string K[5][3], string L[5][3], string M[5][3], string N[5][3], string O[5][3], string P[5][3], string R[5][3], string S[5][3], string T[5][3], string U[5][3], string V[5][3], string Z[5][3], string W[5][3], string Q[5][3], string X[5][3], string Kl[5][3], string Ts[5][3]) 
{
	int x; //del tikrinimo ar spausdinama pirma raide eiluteje

	for (int i = 0; i < 5; i++) //5, nes sriftu dydis 5x3
	{
		x = 0;

		for (size_t j = 0; j < zodis.length(); j++)
		{
			if (zodis[j] == 'a')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, A, i, j, x);
			}
			if (zodis[j] == 'b')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, B, i, j, x);
			}
			if (zodis[j] == 'c')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, C, i, j, x);
			}
			if (zodis[j] == 'd')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, D, i, j, x);
			}
			if (zodis[j] == 'e')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, E, i, j, x);
			}
			if (zodis[j] == 'f')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, F, i, j, x);
			}
			if (zodis[j] == 'g')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, G, i, j, x);
			}
			if (zodis[j] == 'h')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, H, i, j, x);
			}
			if (zodis[j] == 'i')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, I, i, j, x);
			}
			if (zodis[j] == 'y')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Y, i, j, x);
			}
			if (zodis[j] == 'j')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, J, i, j, x);
			}
			if(zodis[j] == 'k')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, K, i, j, x);
			}
			if (zodis[j] == 'l')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, L, i, j, x);
			}
			if (zodis[j] == 'm')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, M, i, j, x);
			}
			if (zodis[j] == 'n')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, N, i, j, x);
			}
			if (zodis[j] == 'o')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, O, i, j, x);
			}
			if (zodis[j] == 'p')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, P, i, j, x);
			}
			if (zodis[j] == 'r')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, R, i, j, x);
			}
			if (zodis[j] == 's')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, S, i, j, x);
			}
			if (zodis[j] == 't')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, T, i, j, x);
			}
			if (zodis[j] == 'u')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, U, i, j, x);
			}
			if (zodis[j] == 'v')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, V, i, j, x);
			}
			if (zodis[j] == 'z')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Z, i, j, x);
			}
			if (zodis[j] == 'w')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, W, i, j, x);
			}
			if (zodis[j] == 'q')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Q, i, j, x);
			}
			if (zodis[j] == 'x')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, X, i, j, x);
			}
			if (zodis[j] == '?')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Kl, i, j, x);
			}
			if (zodis[j] == '.')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Ts, i, j, x);
			}
			if (zodis[j] == ' ')
			{
				Spausdintuvas(zodis[j], zodis, whitespace, Ts, i, j, x);
			}
		}
	}
}