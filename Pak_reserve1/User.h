#pragma once
//#include"Login.h"
using namespace System;

public ref class User {
public:
	int id = 99999999;
	String^ username = "AAAA";
	String^ email = "AAAA";
	String^ password = "AAAA";
	String^ date = DateTime::Now.ToString("dd MMMM yyyy");
	String^ time = DateTime::Now.ToString("hh:mm tt");
};