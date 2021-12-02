#include <iostream>
using namespace std;

int main(){
	system ("color 0A");
	int n,i;
	cout << "Banyaknya rumah Griya Asri : ";
	cin >> n;
	string npr[n], alamat[n];
	for(i=0;i<n;i++){
		cout<<"Masukkan nama pemilik rumah : ";
		cin >> npr[i];
		cout<<"Masukkan alamat rumah : ";
		cin >> alamat[i];
	}
	
	string x;
	string y;
	cout<<"Masukkan nama pemilik rumah yang ingin dicek : ";
	cin >> x;
	cout<<"Masukkan alamat pemilik rumah yang ingin dicek : ";
	cin >> y;
	cout<<endl;
	
	if(x==npr[0]&&y==alamat[0]){
		cout<<"Rumah ditemukan";
	}else if(x==npr[1]&&y==alamat[1]){
		cout<<"Rumah ditemukan";
	}else{
		cout<<"Rumah tidak ditemukan";
	}
	
	
	return 0;
}

