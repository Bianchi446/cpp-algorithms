// Ilustration of dynamic pointer allocation using the IntCell class 


int main()
{
	IntCell	*m;

	m = IntCell{0};
	m->write(5);
	cout << "Cell Contents" << m->read() << endl;

	delete m;
	return 0; 

}



