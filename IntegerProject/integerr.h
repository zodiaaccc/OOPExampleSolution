class Integer {
private:
	int value;
public:
	Integer();

	Integer(int v);

	void setValue(int v);

	int getValue();

	void print();

	void add(int num);
	void subtract(int num);
	void multiply(int num);
	void divine(int num);
};