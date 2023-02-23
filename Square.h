class Square {
    private:
    float length;
    public:
    void setLength (float l);
    float getLength() const;
    float getArea() const;
    Square();
    Square(float l);
    Square operator+(Square s2);
    Square operator*(Square s2);
    void Print();
};