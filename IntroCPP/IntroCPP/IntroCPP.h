#pragma once // garantire che questo file sia incluso una volta sola

class Rettangolo 
{
private:
	int larghezza = 0;
	int altezza = 0;

public:

	Rettangolo(int w, int h) 
	{
		larghezza = w;
		altezza = h;
	}


	int calcoloArea() const;

	

protected:


};
