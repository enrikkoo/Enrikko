#ifndef lang
#define lang



namespace student{
    class string {
        char* stroka;
        unsigned int _size;
        static const unsigned int npos = -1;
        public:
			~string(); //сделано
			string ();//сделано
			string (unsigned int count, char ch);//сделано
			string (const char* other, unsigned int count);//создает строку из первых каунт символов строки на которую указывает ы ы может содератьб нулевые символы,но не может быть нулевым указателем
			string (const char* other);   //Создает строку из содержимого строки с завершающим нулем, на которую указывает s. Длина строки определяется по первому вхождению NULL. s не должен быть нулевым указателем.
			string (const string& other); //конструктор копирования
			string (string&& other); //конструктор перемещаения
			string& operator= (const string& other); //заменяет содержимое копией other
			string& operator= (string&& other); // таже замена используя семантику перемещения.стр находится в непределенном состоянии после операции
			string& operator= (const char* other); //замена содержимоего на которую указывает other
			char& operator[](unsigned int pos); //возвращает ссылку на символ строки в позиции pos
			const char& operator[](unsigned int pos) const;
			const char* data () const;
			bool empty (); //проверяет строку на отус в ней симв,те begin()==end()
			unsigned int size () const; //колво символов в строке distance(begin end)
			void clear ();  //удаляет все символы строки
			void push_back (char ch); //добавляет переданный символ в конец строки
			void pop_back (); //удаляет последний символ строки
			string& append (const char* other, unsigned int count);
			string& append (const string& other); //добавляет строку other
			string& append (unsigned int count, const char& ch); //добавляет count символов ch
			string substr(unsigned int pos = 0, unsigned int count = npos); //возвращ подстроку
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
            vector(const vector& other);     //констр копирования
            vector(vector&& other);     //констр перемещения
            explicit vector(unsigned int count, const T& val = T());//создает конетер с count копиями элемента со значением value
            explicit vector(int count); //созд конт с count экземпл Т,иници констр по умолчанию
            T& operator[] (unsigned int pos); //возвр pos элемент
            const T&  operator[] (unsigned int pos) const;//возвр pos элемент
            T* data(); //возр массив
            const T* data() const;//возр массив
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
