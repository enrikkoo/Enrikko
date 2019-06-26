#include <iostream>
#include <iomanip>
#include "stdio.h"
#include "lang.h"
#include <fstream>

using namespace student;
using std::cout;
using std::rand;
using std::srand;
using std::setw;
using std::ofstream;

string::~string(){                 //деструктор
    delete [] stroka;                 //удаляет строку
    _size = 0;                 //размер нулю
}

string::string (){                 //конструктор
    stroka = nullptr;                 //присваиваем нулевой указатель
    _size = 0;                //размер нулю
}

string::string (unsigned int count, char ch){ //  из ch, count раз
    _size = count;    //размер строки будет count
    stroka = new char[_size+1];   //выделяем память под стриенгу+1 для 0
    for (unsigned int i = 0; i < _size; i++){
        stroka[i] = ch;                     //заполняем нужным символом
    }
    stroka[_size]  = '\0';            //закрываем нулем
}

string::string (const char* other, unsigned int count){//создает строку из первых каунт символов строки на которую указывает ы ы может содератьб нулевые символы,но не может быть нулевым указателем
    unsigned int length = strlen(other);       //присаиваем длину другой строки
    _size = count;                //размер = count которое подают
    stroka = new char[_size+1];   //выделяем память под стриенгу+1 для 0 
    unsigned int lim = _size;
    if (length < _size){        //если строка меньше чем count
        lim = length;           //то зануляем все от макс конца другой до преувелич. размера
        for(unsigned int i = length; i < _size; i++){
            stroka[i] = '\0';
        }
    }
    for (unsigned int i = 0; i < lim; ++i){   //присаиваем строке новые значения от 0 до колва другой
        stroka[i] = other[i];                 //от 0 до колва другой
    }
    stroka[_size]  = '\0';               //терминир.ноль
}

string::string (const char* other){
    _size = strlen(other);                //определяем размер другой строки
    stroka = new char[_size+1];                //выделяем память под строку и будущий терм.ноль
    for (unsigned int i = 0; i < _size; ++i){                
        stroka[i] = other[i];                //заполняем строку другой строкой
    }
    stroka[_size]  = '\0';               //добавляем терминир.ноль
}

string::string (const string& other){                //конструктор копирования
    _size = other._size;                     //размер присв размер объекта
    stroka = new char[_size+1];                //выделяем память под строку и будущий терм.ноль
    for (unsigned int i = 0; i < _size; ++i){
        stroka[i] = other.stroka[i];           //копируем значений другой в новую
    }
    stroka[_size]  = '\0';                //добавляем терминир.ноль
}

string::string (string&& other)
    :stroka(other.stroka)
    ,_size(other._size) {
    other.stroka = nullptr;
    other._size = 0;
}

string& string::operator= (const string& other){
    delete [] stroka;
    _size = other._size;              //  заполняем по 1
    stroka = new char[_size+1];
    for (unsigned int i = 0; i < _size; ++i){
        stroka[i] = other.stroka[i];
    }
    stroka[_size]  = '\0';
    return *this;
}

string& string::operator= (string&& other){
    delete [] stroka;
    stroka = other.stroka;         //перемещаем,старый обнуляем
    _size = other._size;
    other.stroka = nullptr;
    other._size = 0;
    return *this;
}

string& string::operator= (const char* other){
    delete [] stroka;             // удаляем строку
    _size = strlen(other);             //считаем размер
    stroka = new char[_size+1];             //выделяем память +итт ноль
    for (unsigned int i = 0; i < _size; ++i){             
        stroka[i] = other[i];             //заполняем массив
    }
    stroka[_size]  = '\0';             //добавл терм нуль
    return *this;             //возврж этот объект
}

char& string::operator[](unsigned int pos){
    return stroka[pos];              //возра на нужный символ
}

const char& string::operator[](unsigned int pos) const{
    return stroka[pos];      //возра на нужный символ
}

const char* string::data () const{
    return stroka;           //выводим строку
}

bool string::empty (){
    if (stroka == nullptr){        //проверяем пустая строка или нет
        return true;
    }
    for(unsigned int i = 0; i < _size; i++){
        if (stroka[i] != '\0') return false;
    }
    return true;
}


unsigned int string::size () const{
    return _size;        //выводим размер
}

void string::clear(){
    for(unsigned int i = 0; i < _size; i++){
        stroka[i] = '\0';              //запол терминир нулями
    }
}

void string::push_back (char ch){
    unsigned int i = 0;
    while(stroka[i]) i++;
    if (i < _size){
        stroka[i] = ch;
    }
    else{
        stroka = (char*) realloc(stroka, _size+2);
        stroka[_size] = ch;
        _size++;        //перераспределняем память и добавляем элемент
        stroka[_size] = '\0';
    }
}

void string::pop_back (){
    _size--;
    stroka = (char*) realloc(stroka, _size+1);
    stroka[_size] = '\0';//перераспределняем память и зануляем термин нулем
}

string& string::append (const char* other, unsigned int count){
    unsigned int i = 0;
    unsigned int length = 0;
    if (strlen(other) < count) count = strlen(other);
    while (stroka[i]) i++;
    if ((i < _size) && ((_size - i) <= count)){
        for(unsigned int j = i; ((j < _size) && (count > 0)); j++){
            stroka[j] = other[j - i];
            count--;
        }
    }
    if (count > 0){
        length = _size + count;
        stroka = (char*) realloc(stroka, length+1);
        for(unsigned int j = _size; ((j < length) || (strlen(other) < count)); j++){
            stroka[j] = other[j - i];
        }
    }
    _size = length;
    stroka[_size] = '\0';
    return *this;
}

string& string::append (const string& other){
    unsigned int i = 0;
    unsigned int count = other._size;
    while (stroka[i]) i++;
    if ((i < _size) && ((_size - i) <= count)){
        for(unsigned int j = i; ((j < _size) && (count > 0)); j++){
            stroka[j] = other[j - i];
            count--;
        }
    }
    if (count > 0){
        unsigned int length = _size + count;
        stroka = (char*) realloc(stroka, length+1);
        for(unsigned int j = _size; j < length; j++){
            stroka[j] = other[j - i];           //добавляем строку other
        }
        _size = length;
    }
    stroka[_size] = '\0';
    return *this;
}

string& string::append (unsigned int count, const char& ch){
    unsigned int i = 0;
    while (stroka[i]) i++;
    if ((i < _size) && ((_size - i) <= count)){
        for(unsigned int j = i; ((j < _size) && (count > 0)); j++){
            stroka[j] = ch;         
            count--;
        }
    }
    if (count > 0){
        unsigned int length = _size + count;
        stroka = (char*) realloc(stroka, length+1);
        for(i = _size; i < length; i++){
            stroka[i] = ch;              //добавляем count символов ch
        }
        _size = length;
    }
    stroka[_size] = '\0';
    return *this;
}

string string::substr(unsigned int pos, unsigned int count){
    try{
        if (pos > _size){
            throw 123;
        }
    }
    catch(int th){
        cout << "ERROR " << th << " out_of_range\n";
    }
    unsigned int length;
    if((count == npos)||(count > (_size - pos))){
        length = _size - pos;
    }
    else{
        length = count;
    }
    string str(length, '\0');
    for(unsigned int i = pos; i < (pos + length); i++){
        str[i - pos] = stroka[i];             //в новую строку записываем с pos count символо
    }
    str.stroka[length] = '\0';
    return str;
}

unsigned int string::strlen(const char* str){
    unsigned int len = 0;
    while (str[len]) len++;
    return len;
}

void string::print(){
    for(unsigned int i = 0; i < _size; i++){
        cout << stroka[i];
    }
    cout << '\n';
}




template <typename T>
vector<T>::~vector(){
    delete [] stroka;
    _size = 0;
}

template <typename T>
vector<T>::vector(){
    stroka = nullptr;
    _size = 0;
}

template <typename T>
vector<T>::vector(const vector& other){
    stroka = (T*) malloc(other._size * sizeof(T));
    _size = other._size;
    for(unsigned int i = 0; i < _size; i++) stroka[i] = other.stroka[i];
}

template <typename T>
vector<T>::vector(vector&& other)
  :stroka(other.stroka)
  ,_size(other._size) {
  other.stroka = nullptr;
  other._size = 0;
}

template <typename T>
vector<T>::vector(unsigned int count, const T& val){//создает конетер с count копиями элемента со значением value
    stroka = (T*) malloc(count * sizeof(T));
    _size = count;
    for (unsigned int i = 0; i < count; i++) stroka[i] = val;
}

template <typename T>
vector<T>::vector(int count){
    stroka = (T*) malloc(count * sizeof(T));
    _size = count;
}

template <typename T>
T& vector<T>::operator[] (unsigned int pos){//возвр pos элемент
    return stroka[pos];
}

template <typename T>
const T&  vector<T>::operator[] (unsigned int pos) const{//возвр pos элемент
    return stroka[pos];
}

template <typename T>//возр массив
T* vector<T>::data(){
    return stroka;
}

template <typename T>//возр массив
const T* vector<T>::data() const{
    return stroka;
}

template <typename T>
bool vector<T>::empty() const{
    if (stroka == nullptr) return true;
    unsigned int i = 0;
    T val = T();
    while(stroka[i] == val){
        i++;
    }
    if (i >= _size){
        return true;
    }
    return false;
}

template <typename T>
void vector<T>::clear(){
    T val = T();
    for(unsigned int i = 0; i < _size; i++)stroka[i] = val;
}

template <typename T>
void vector<T>::push_back(const T& value){
    stroka = (T*) realloc(stroka, ((_size + 1) * sizeof(T)));
    stroka[_size] = value;
    _size++;
}

template <typename T>
void vector<T>::push_back(T&& value){
    stroka = (T*) realloc(stroka, ((_size) * sizeof(T)));
    stroka[_size] = value;
    _size++;
}

template <typename T>
void vector<T>::pop_back(){
    _size--;
    stroka = (T*) realloc(stroka, (_size * sizeof(T)));
}

template <typename T>
void vector<T>::insert( unsigned int pos, unsigned int count, const T& value){
    unsigned int length = _size + count;
    stroka = (T*) realloc(stroka, length * sizeof(T));
    for(unsigned int i = 0; i < count; i++){
        stroka[_size + i] = stroka[pos + i];
        stroka[pos + i] = value;
    }
    _size = length;
}

template <typename T>
void vector<T>::print(){
    for(unsigned int i = 0; i < _size; i++) cout << stroka[i];
    cout << '\n';
}

template <typename T>
unsigned int vector<T>::size(){
    return _size;
}



int main(){
    srand(time(0));
   
    return 0;
}
