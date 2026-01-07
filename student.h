class Student {
	public:
		void display();
	private:
		int num;
		char name[20];
		char sex;
	public:
		void set_value(int Num, char Name[20], char Sex)
		{
			num = Num;
			for (int i = 0; i <= 19; i++) {
				name[i] = Name[i];
			}
			sex = Sex;
		}
		void display();
};
