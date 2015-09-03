#include <stdio.h>
#include <memory.h>

#define SAFE_DELETE(p) {		\
		if((p) != NULL) {		\
			delete ((void *)p);	\
			(p) = NULL;			\
		}						\
	}

class buffer_object {
public:
	buffer_object() { ::memset(m_buffer, 0, 0xFF); }
	unsigned int get_buffer_size() { return 0xFF; }

	int access_buffer() { return 0; }
private:
	char m_buffer[0xFF];
};

class gernal_object {
public:
	gernal_object() { m_buffer = NULL; }
	~gernal_object() { SAFE_DELETE(m_buffer); }

	void create_buffer() { if (m_buffer == NULL) m_buffer = new buffer_object(); }
	int upsate_using_buffer_obj() { return 0; }
private:
	buffer_object * m_buffer;
};

int do_something3()
{
	gernal_object * obj = new gernal_object();
	if (!obj) return -1;
	obj->create_buffer();

	obj->upsate_using_buffer_obj();
	SAFE_DELETE(obj);
	return 1;
}
