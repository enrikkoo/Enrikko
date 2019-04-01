class Key_distribution_protocols
{
private:
public:
	Key_distribution_protocols() {};
   ~Key_distribution_protocols() {};
};
class Symmetric_protocol : public Key_distribution_protocols
{
private:
public:

	Symmetric_protocol() {}
	~Symmetric_protocol() {}
};
class The_Needham_Schroeder_protocol : public Symmetric_protocol
{
public:
	The_Needham_Schroeder_protocol() {}
	void key() {}
	~The_Needham_Schroeder_protocol() {}

};
class Kerberos_Protocol : public Symmetric_protocol
{
public:
	Kerberos_Protocol() {}
	void cripto() {}
	~Kerberos_Protocol() {}

};
class The_Otway_Rees_Protocol : Symmetric_protocol
{
public:
	The_Otway_Rees_Protoco() {}
	void secure() {}
	~The_Otway_Rees_Protocol() {}

};
class Asymmetric_protocol : public Key_distribution_protocols
{
private:
public:
	Asymmetric_protocol() {}
	void assy() {}
	~Asymmetric_protocol() {}

};

int main()
{
	return 0;
}

