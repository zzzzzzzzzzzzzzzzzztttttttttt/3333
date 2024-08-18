#include<fstream>
#include<iostream>
#include<string>
using namespace std;
void test01() {
	//1.包含头文件
	// 
	//2.创建流对象 
	ofstream ofs;
	
	//3.指定打开方式
	ofs.open("text.txt", ios::out);
	//4.写内容
	ofs << "tim" << endl;
	ofs << "tim" << endl;
	ofs << "tim" << endl;
	ofs << "tim" << endl;
	ofs << "tim" << endl;
	//5.关闭
	ofs.close();
}
void test02() {
	//1.包含头文件
	// 
	//2.创建流对象 
	ifstream ifs;
	//3.打开文件判断是否打开成功
	ifs.open("text.txt", ios::in);
	if (!ifs.is_open()) {
		cout << "失败" << endl;
		return;
	}
	//4.读数据
	//第一种 将内容读入数组中
	/*char buf[1024] = { 0 };
	while (ifs >> buf) {
		cout << buf << endl;
	}*/
	//第二种
	/*char buf2[1024] = { 0 };
		while (ifs.getline(buf2, sizeof(buf2))) {
			cout << buf2 << endl;
		}*/
	//第三种
	string buf;
		while (getline(ifs,buf)) {
			cout << buf << endl;;
		}
	//5.关闭文件
	ifs.close();

}
int main() {
	test02();
	return 0;
}
