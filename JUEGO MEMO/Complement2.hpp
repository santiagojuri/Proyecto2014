#include "../item.hpp"
#include "../Question.hpp"
#include "../Answers.hpp"

class question_matriz
: public Question
{
	/*Atributos*/
public:
	/*Metodos*/
	question_matriz()
	:Question()
	{}

	question_matriz(int n, int s)
	{
		vector<int> random;
		int temp=1;
		for(int i=0;i<(n/2);i++)
		{
			random.push_back(temp);
			random.push_back(temp);
			temp++;
		}
		srand(time(0));
		int tmp=0;
		auto it= random.begin();
		for(int i=0;i<n;i++)
		{
			item a;
			tmp=(rand()%random.size());
			a.Set_value(random[tmp]);
			advance(it,tmp);
			random.erase(it);
			it= random.begin();
			Objetos.push_back(a);
		}
	}

	void show(vector<item> lista, int n)
	{
	 	cout << "{";
	    int i=0;
	    for(auto x: lista)
	    {
			if(i%n==0)
			{
				cout << endl;
			}
			cout << x.get_value() << "  ";
	    	i++;
	    }
	    cout << "}";
	    cout << "\n";
	}
	~question_matriz(){}; //destructor
};


void show2(vector<int> lista,int n)
{
	
	cout << "{";
	int i=0;
	for(auto x: lista)
	{
		if(i%n==0)
		{
			cout << endl;
		}
		cout << x << "  ";
		i++;
	}
	cout << "}";
	cout << "\n";   
}


void seleccion(vector<int>& s)
{
	cout << "Selecciona uno por uno, dos(2) posiciones de la tabla" << endl;
	for(int i=0;i<2;i++)
	{
		int t;
		cout << "Ingrese La posicion:" << i+1 <<endl;
		cin >> t;
		s[i]=t-1;
	}
}

int comparator(vector<int>const& s, vector<item> b)
{
	cout << "Los valores obtenidos respectivamente son  " << b[s[0]].get_value() <<" y " << b[s[1]].get_value() <<endl;
	if(b[s[0]].get_value()!=b[s[1]].get_value())
		{
			return 0;
		}
	return 1;
}

int Mecanica(vector<int>& random, question_matriz m, int valor, int x)
{
	int d=0;
	m.show(m.get_Object(),x);
	show2(random, x);
	if(d==0)
	{
		vector<int> s(2,0);
		seleccion(s);
		d=comparator(s,m.get_Object());
		if(d==1){
			random[s[0]]=0;
			random[s[1]]=0;
			cout << "Has Obtenido Una Pareja" << endl;
		}
	}
	int sum = 0;
	for(int j=0;j<valor;j++)
	{
		if(random[j]==0)
		{
			sum++;
		}
		if(sum==valor){return 1;}
		else{d=0;}
	}
}

void Juego(question_matriz m, int valor, int x)
{
	int gana=0;
	vector<int> random;
	for(int i=0;i<valor;i++)
	{
		random.push_back(i+1);
	}
	while(gana!=1)
	{
		gana = Mecanica(random, m, valor,x);
	}
	cout << "FELICIDADES HAS GANADO" << endl;
}

