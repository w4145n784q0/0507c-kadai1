#include "Sample.h"
#include<iostream>

//�����o�ϐ��ɒl�������郁���o�֐�
void SampleClass::Input() {
	a = 10;
	b = 3;
}
//�����o�ϐ����m�̌v�Z���s�������o�֐�
void SampleClass::Plus() {
	c = a + b;
}
//�����o�ϐ��̓��e���o�͂��郁���o�֐�
void SampleClass::Disp() {
	std::cout << "�ϐ��b�̒l��" << c << "\n";
}