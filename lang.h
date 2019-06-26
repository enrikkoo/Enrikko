#ifndef lang
#define lang



namespace student{
    class string {
        char* stroka;
        unsigned int _size;
        static const unsigned int npos = -1;
        public:
			~string(); //�������
			string ();//�������
			string (unsigned int count, char ch);//�������
			string (const char* other, unsigned int count);//������� ������ �� ������ ����� �������� ������ �� ������� ��������� � � ����� ��������� ������� �������,�� �� ����� ���� ������� ����������
			string (const char* other);   //������� ������ �� ����������� ������ � ����������� �����, �� ������� ��������� s. ����� ������ ������������ �� ������� ��������� NULL. s �� ������ ���� ������� ����������.
			string (const string& other); //����������� �����������
			string (string&& other); //����������� ������������
			string& operator= (const string& other); //�������� ���������� ������ other
			string& operator= (string&& other); // ���� ������ ��������� ��������� �����������.��� ��������� � ������������� ��������� ����� ��������
			string& operator= (const char* other); //������ ������������ �� ������� ��������� other
			char& operator[](unsigned int pos); //���������� ������ �� ������ ������ � ������� pos
			const char& operator[](unsigned int pos) const;
			const char* data () const;
			bool empty (); //��������� ������ �� ���� � ��� ����,�� begin()==end()
			unsigned int size () const; //����� �������� � ������ distance(begin end)
			void clear ();  //������� ��� ������� ������
			void push_back (char ch); //��������� ���������� ������ � ����� ������
			void pop_back (); //������� ��������� ������ ������
			string& append (const char* other, unsigned int count);
			string& append (const string& other); //��������� ������ other
			string& append (unsigned int count, const char& ch); //��������� count �������� ch
			string substr(unsigned int pos = 0, unsigned int count = npos); //������� ���������
            unsigned int strlen(const char* str);
            void print();
    };
    template <typename T> 
	class vector{
        T* stroka;
        unsigned int _size;
        public:
            ~vector();
            vector();
            vector(const vector& other);     //������ �����������
            vector(vector&& other);     //������ �����������
            explicit vector(unsigned int count, const T& val = T());//������� ������� � count ������� �������� �� ��������� value
            explicit vector(int count); //���� ���� � count ������� �,����� ������ �� ���������
            T& operator[] (unsigned int pos); //����� pos �������
            const T&  operator[] (unsigned int pos) const;//����� pos �������
            T* data(); //���� ������
            const T* data() const;//���� ������
            bool empty() const;
            void clear();
            void push_back(const T& value);
            void push_back(T&& value);
            void pop_back();
            void insert( unsigned int pos, unsigned int count, const T& value);
            void print();
            unsigned int size();
    };
}
#endif
