#ifndef LAB5_MYVECTOR_H
#define LAB5_MYVECTOR_H
#include "iostream"
#include "cstring"

template <typename T>
class MyVector{
protected:
    int max_size;
    int size;
    T* pdata;
public:
    void sort(bool increase = true){
        for(int i = 0; i < size; i++){
            for(int j = i + 1; j < size;j++){
                bool temp1 = (pdata[i] > pdata[j]);
                if(!increase){temp1 = !temp1;}
                if (temp1){
                    T temp = pdata[j];
                    pdata[j] = pdata[i];
                    pdata[i] = temp;
                }
            }
        }
    }

    void Resize(bool increase = true){
        int init = max_size;
        T* temp;
        if (increase){temp = new T[max_size * 2]; max_size *= 2;}
        else{temp = new T[max_size / 2]; max_size /= 2;}
        for (int i = 0; i < init; i++){
            temp[i] = pdata[i];
        }

//        delete pdata;
        pdata = temp;

    }

    int Check_Size(){
        int v = 0;
        while (max_size < size) {Resize(true); v = 1;}
        while (max_size / 4 > size){Resize(false);v = -1;}
        return v;
    }


    int get_size(){return size;}
    int get_maxsize(){return max_size;}
    int get_data(){return pdata;}

    MyVector(){
        max_size = 1;
        size = 0;
        pdata = new T[1];
    }
    MyVector(T* data){
        size = 1;
        max_size = 1;
        Check_Size();
//        delete[] pdata;
//        pdata = new T[1];
        pdata = data;

        Check_Size();
    }
    MyVector(MyVector const &data){
        size = data.size; max_size = data.max_size;
        pdata = new T[max_size];
        for (int i = 0; i < size; ++i){pdata[i] = data.pdata[i];}
    }
    ~MyVector(){}
    void add_element(T data, bool t1 = false){
        size++;
        Check_Size();
        pdata[size - 1] = data;
        sort(t1);
    }
    void add_element_sp(T data, int t){
        pdata[t] = pdata[t] + data;
    }

    void delete_element(int index = 1){
        size--;
        index--;
        Check_Size();
        T* temp = new T[max_size];
        int i,j;i = j = 0;
        for(int i = 0; i < size + 1;i++){
            if(i != index){temp[j] = pdata[i];j++;}
        }
//        delete[] pdata;
        pdata = temp;
    }
    int find(T data_to_find){
        for(int i = 0; i < size; i++){
            if(pdata[i] == data_to_find){
                return i;
            }
        }
        return -1;
    }

    T get(int index){
        if(index < size && index >= 0){return pdata[index];}
        return -1;
    }

    T operator[](int i){return get(i);}

    void operator=(const MyVector<T> arr){
        size = arr.size; max_size = arr.max_size;
        Check_Size();
        T* temp = new T[max_size];
        for (int i = 0; i < size; i++){
            temp[i] = arr.pdata[i];
        }
//        delete[] pdata;
        pdata = temp;
    }

    void printv(){
        std::cout << "MaxSize = " << max_size << std::endl;
        std::cout << "Size = " << size << std::endl;
        for(int i = 0; i < size; i++){
            std::cout << pdata[i] << " ";
        }
        std::cout << std::endl;
    }
};


#endif //LAB5_MYVECTOR_H
