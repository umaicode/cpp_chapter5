//5-3.ASSIGN.CPP [Folk,Zoellick, Riccardi, 1998]  5.3.5 ��ü�� �����ϰ� ����ϴ� ��� 
#include<iostream>
#include<string>
using namespace std;
/*
 1) ����
  ��ü�� member ������ �����ϴ� ������� �񱳸� ���� �˾ƺ��� ���̴�.
 2) ���
  ��. 1�� �ּ��� ���� �������� �����ڵ鿡 ���� ��������.
  ��. 2�� �ּ��� ���ؼ� compiler�� �����ϴ� = ������ ����Ͽ��� ��� member���� �� ��ȭ�� ����.
  ��. 3�� �ּ��� ���ؼ� �������� '=' �����ڸ� �̿��Ͽ��� �� member���� �� ��ȭ�� ����.
*/
class String{
public:
    String (); //default ������
    String (const String&); //���� ������
    String & operator = (const String &); //assignment
     String (char* ); //������ overloading
    ~String ();  //�Ҹ��� 
//    char* getString() { return string; }
private:
    char * string;
};	

String::String(){
    cout<<"[default ������ ȣ��]"<<endl;
	string = new char [10];
}

String::String(char* _string){
    cout<<"[parameter�� �ִ� ������ ȣ��]"<<endl;
    string = new char[strlen(_string)+1];
    strcpy_s(string, strlen(_string)+1, _string);
}

String::String(const String& str){
    cout<<"[���� ������ ȣ��]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string,strlen(str.string)+1, str.string);
}
//�ּ� 3��
/* compiler�� �����ϴ� assignment ������ ���� ������ ���������� �ľ��ϴ� ���� �ʿ�
String & String:: operator = (const String & str){
    cout<<"[�������� assign �Լ�ȣ��]"<<endl;
    string = new char[strlen(str.string)+1];
    strcpy_s(string, strlen(str.string)+1,str.string);
    return *this;
}
*/
String::~String(){ 
    cout<<"[�Ҹ��� ȣ��]"<<endl;
    delete []string;
}

void main(){
    //1�� �ּ� 
    //*
    String s1;
    cout << "\ts1��string��" << s1.getString() << "�̴�." <<endl;

    String s2("Programming");
    cout << " s2�� string�� " << &s2.string << "�̴�." <<endl<<endl;

    String s3(s2); 
    cout << " s3�� string�� " << &s3.string << "�̴�." <<endl<<endl;
    //*/

    //2�� �ּ�
   //*
    s1 = s2; 
    cout << " s1�� string�� " << s1.string << "�̴�." <<endl<<endl;	
	cout << " s2�� string�� " << s2.string << "�̴�." << endl << endl;
    cout<<"[s2, s3�� string member������ ���� ������]"<<endl;
    char *str1 = "Database";
    char *str2 = "FileSystem";
    strcpy_s (s2.string, strlen(str1)+1, str1);
    strcpy_s (s3.string, strlen(str2)+1, str2);
    cout << " s1�� string�� " << s1.string << "�̴�." <<endl;
    cout << " s2�� string�� " << s2.string << "�̴�." <<endl;
    cout << " s3�� string�� " << s3.string << "�̴�." <<endl<<endl;
    //*/
	system("pause");
}