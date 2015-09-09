#include <stdio.h>

class base_class {
public:
	base_class() { x = 0; y = 0; }

public:
	int x;
	int y;
};

class derived_class : public base_class {
public:
	derived_class() { z = 0; }

public:
	int z;
};

void calc_class_members(base_class* b, int array_size)
{
	for (int i = 0; i < array_size; i++)
	{
		b[i].x = i;
		b[i].y = i;
	}
}

// Calling from external
int update_class_members(
	derived_class * class_array,	// Valid array
	int num_array)
{
	if (class_array == NULL)
		return -1;		// means error

	calc_class_members(class_array, num_array);

	return 0;		// success
}

// -------- impliment ------------
int do_something1()
{
	derived_class a[4];
	return update_class_members(a, 4);
}
