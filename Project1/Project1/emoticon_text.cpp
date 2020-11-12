//pritaikytas steam chat
#include <iostream>
#include <string>

using namespace std;

string IvedimasEmoticonas();
string IvedimasSimboliai();
string BeTarpu(string nice);
void Skaiciuotuvas(string zodis, string whitespace, string A[5][3], string B[5][3], string C[5][3], string D[5][3], string E[5][3], string F[5][3], string G[5][3], string H[5][3], string I[5][3], string Y[5][3], string J[5][3], string K[5][3], string L[5][3], string M[5][3], string N[5][3], string O[5][3], string P[5][3], string R[5][3], string S[5][3], string T[5][3], string U[5][3], string V[5][3], string Z[5][3], string W[5][3], string Q[5][3], string X[5][3], string Kl[5][3], string Ts[5][3]);
int main()
{
	string zodis, emoticonas, whitespace;


	zodis = BeTarpu(IvedimasSimboliai());
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
string BeTarpu(string nice)
{
	string be_tarpu;

	for (size_t i = 0; i < nice.length(); i++)
	{
		if (nice[i] != ' ')
			be_tarpu += nice[i];
	}
	return be_tarpu;
}
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
			if (zodis[j] == 'a' || zodis[j] == 'A')
			{
				for (int k = 0; k < 3; k++) //3, nes sriftu dydis 5x3
				{
					if (x == 0 && k == 0)
					{
						cout << "." << A[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << A[i][k];
					if (k == 1 || k == 2)
						cout << A[i][k];

					if (zodis.length() - j != 1 && k == 2) //tarpai tarp simboliu
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2) //i eilutes pabaiga
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'b' || zodis[j] == 'B')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << B[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << B[i][k];
					if (k == 1 || k == 2)
						cout << B[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'c' || zodis[j] == 'C')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << C[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << C[i][k];
					if (k == 1 || k == 2)
						cout << C[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'd' || zodis[j] == 'D')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << D[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << D[i][k];
					if (k == 1 || k == 2)
						cout << D[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'e' || zodis[j] == 'E')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << E[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << E[i][k];
					if (k == 1 || k == 2)
						cout << E[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'f' || zodis[j] == 'F')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << F[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << F[i][k];
					if (k == 1 || k == 2)
						cout << F[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'g' || zodis[j] == 'G')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << G[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << G[i][k];
					if (k == 1 || k == 2)
						cout << G[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'h' || zodis[j] == 'H')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << H[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << H[i][k];
					if (k == 1 || k == 2)
						cout << H[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'i' || zodis[j] == 'I')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << I[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << I[i][k];
					if (k == 1 || k == 2)
						cout << I[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'y' || zodis[j] == 'Y')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << Y[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << Y[i][k];
					if (k == 1 || k == 2)
						cout << Y[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'j' || zodis[j] == 'J')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << J[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << J[i][k];
					if (k == 1 || k == 2)
						cout << J[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'k' || zodis[j] == 'K')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << K[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << K[i][k];
					if (k == 1 || k == 2)
						cout << K[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'l' || zodis[j] == 'L')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << L[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << L[i][k];
					if (k == 1 || k == 2)
						cout << L[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'm' || zodis[j] == 'M')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << M[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << M[i][k];
					if (k == 1 || k == 2)
						cout << M[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'n' || zodis[j] == 'N')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << N[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << N[i][k];
					if (k == 1 || k == 2)
						cout << N[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'o' || zodis[j] == 'O')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << O[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << O[i][k];
					if (k == 1 || k == 2)
						cout << O[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'p' || zodis[j] == 'P')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << P[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << P[i][k];
					if (k == 1 || k == 2)
						cout << P[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'r' || zodis[j] == 'R')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << R[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << R[i][k];
					if (k == 1 || k == 2)
						cout << R[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 's' || zodis[j] == 'S')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << S[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << S[i][k];
					if (k == 1 || k == 2)
						cout << S[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 't' || zodis[j] == 'T')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << T[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << T[i][k];
					if (k == 1 || k == 2)
						cout << T[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'u' || zodis[j] == 'U')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << U[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << U[i][k];
					if (k == 1 || k == 2)
						cout << U[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'v' || zodis[j] == 'V')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << V[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << V[i][k];
					if (k == 1 || k == 2)
						cout << V[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'z' || zodis[j] == 'Z')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << Z[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << Z[i][k];
					if (k == 1 || k == 2)
						cout << Z[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'w' || zodis[j] == 'W')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << W[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << W[i][k];
					if (k == 1 || k == 2)
						cout << W[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'q' || zodis[j] == 'Q')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << Q[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << Q[i][k];
					if (k == 1 || k == 2)
						cout << Q[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == 'x' || zodis[j] == 'X')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << X[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << X[i][k];
					if (k == 1 || k == 2)
						cout << X[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == '?')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << Kl[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << Kl[i][k];
					if (k == 1 || k == 2)
						cout << Kl[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
			if (zodis[j] == '.')
			{
				for (int k = 0; k < 3; k++)
				{
					if (x == 0 && k == 0)
					{
						cout << "." << Ts[i][k];
						x = 1;
					}
					else if (x != 0 && k == 0)
						cout << Ts[i][k];
					if (k == 1 || k == 2)
						cout << Ts[i][k];

					if (zodis.length() - j != 1 && k == 2)
						cout << whitespace;
					if (zodis.length() - j == 1 && k == 2)
						cout << '\n' << '\n';
				}
			}
		}
	}
}