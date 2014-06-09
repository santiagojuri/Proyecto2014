#include "../item.hpp"
#include "../Question.hpp"
#include "../Answers.hpp"

void printmat(vector<int> lista,int n)
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

void print(vector<int> lista)
{
	cout << "{";
    for(auto x: lista)
    {
    	cout << x << "  ";
    }
    cout << "}";
    cout << "\n";
}

void print(vector<item> lista)
{
	cout << "{";
    for(auto x: lista)
    {
    	cout << x.get_value() << "  ";
    }
    cout << "}";
    cout << "\n";
}

int comparator(vector<int> ans, vector<item> ques)
{
	for(int i=0;i<ans.size();i++)
	{
		if(ans[i]!=ques[i].get_value())
		{
			return 0;
		}
	}
	return 1;
}

vector<int> comparator2(vector<int> a, vector<item> b)
{
	vector<int> temp;
	int c=0;
	int m=0;
	int res=0;
	for(int i=0;i<a.size();i++)
	{
		for(int j=0;j<b.size();j++)
		{
			if(a[i]==b[j].get_value() and i == j)
			{
				c++;
				break;
			}
			else if(a[i]==b[j].get_value() and i != j)
			{
				if(a[i]==a[j] and a[i]==b[j].get_value()) 
				{
					res++;
					break;
				}
				else {m++;}
			}
		}
	}
	temp.push_back(c);
	temp.push_back(m);
	temp.push_back(res);
	return temp;
}

int Juego(vector<item> b, int n)
{
  for(int i=0;i<n;i++)
  {
  	Answers a(4);
  	print(a.get_ans());
  	if(comparator(a.get_ans(),b)!=1)
  	{
  		vector<int> s =comparator2(a.get_ans(),b);
  		print(s);
  		cout << "Usted tiene " << s[0] << " Perfectas y " << s[1]-s[2] << " Correctas pero mal ubicadas" << endl;
  	}
  	else
  	{
  		cout << "CORRECTO!!!!"<< endl;
  		break;
  	}
  }
  
} 