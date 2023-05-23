class Cone {
public:
	// Êîíñòðóêòîðû
	Cone();
	Cone(double r, double h);
	Cone(double x, double y, double z, double r, double h);

	// Ìåòîäû
	void input();
	void output();
	double surfaceArea();
	double volume();

private:
	double x, y, z; // Êîîðäèíàòû öåíòðà îñíîâàíèÿ
	double r; // Ðàäèóñ îñíîâàíèÿ
	double h; // Âûñîòà
};

