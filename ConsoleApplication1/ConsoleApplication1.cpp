// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//
#include <iostream>
#include <string>
using namespace std;

class shisok {
public:
	shisok* head;
	shisok* kon;
	string inf;
	shisok* next;

	void listvvod(string a)
	{
		shisok* tmp = new shisok;
		tmp->inf = a;
		tmp->next = head;
		if (empty() == 0)
		{
			kon = tmp;
			head = tmp;
		}
		else
		{
			head = tmp;
		}


	}
	void listvivod()
	{
		shisok* p = head;
		do
		{
			cout << p->inf << "\n";
			p = p->next;

		} while (p != kon->next);
		cout << "________________________________" << endl;
	}
	bool empty()
	{
		if (head == NULL)
			return 0;
		else
			return 1;
	}
	void prod()
	{
		shisok* p = head;
		int q = 0;
		int k = 0;
		do
		{
			k = 0;
			q = p->inf.length();
			for (int i = 0; i < q; i++)
			{
				
				if (p->inf.at(i) == 'z')
				{
					k++;
					if (k == 2)
					{
						
						cout << "Cлово в которых есть две 'z'" << p->inf << endl;
						break;
					}
				}
			}
			p = p->next;
		} while (p != kon->next);
		cout << "________________________________" << endl;
	}
};


int main()
{
	setlocale(LC_ALL, "Rus");
	shisok t1;
	t1.listvvod("prizz");
	t1.listvvod("zkz");
	t1.listvvod("sz");
	t1.listvvod("zz");
	
	t1.listvivod();
	t1.prod();
	system("pause");
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
