
typedef struct {
	int code;
	const char *str;
} map_t;

const char *map       (guint32 code, map_t *table);
const char *flags     (guint32 code, map_t *table);
void        hex_dump  (const char *buffer, int base, int count);
char*       data_dump (const char *data, int len, const char* prefix);

#define CSIZE(x) (sizeof (x) / 4)
