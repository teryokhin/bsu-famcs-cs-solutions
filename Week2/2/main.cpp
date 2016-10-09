/*
	Copyright (c) 2016 Maxim Teryokhin
	This code is licensed under MIT. See LICENSE file for more details.
*/

/*
   � ������ ���� ��������� �������� x ����������,
   � ����� �� ������ ���� ���������� ������ �� 10%
   �� ����������� ��������. �� ������� ����� y
   ���������� ����� ���, �� ������� ������ ����������
   �������� �� ����� y ����������.
   ��������, ��� ����� 10 20 ��������� ������ ������� 9.
   x � y � �������������� �����, ����� � ����� �����.
*/
#include <iostream>

using namespace std;

int main()
{
    cout << "Solving task #2\nEnter x and y: " << endl;
    double x, y;
    int n = 1;
    cin >> x >> y;
    while (x < y)
    {
        x *= 1.1;
        n++;
    }
    cout << n;
    return 0;
}
