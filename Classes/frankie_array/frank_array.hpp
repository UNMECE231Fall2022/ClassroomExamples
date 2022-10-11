class Array {
	private:
		double* _data;
		int _size;

	public:
		Array(int size);
		~Array();

		int size() const;
		double& at(int idx);
		double& operator[](int idx);
};
