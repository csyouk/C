#define PRINTF_BINARY_PATTERN_INT8 "%c%c%c%c %c%c%c%c "
#define PRINTF_BYTE_TO_BINARY_INT8(i)    \
    (((i) & 0x80ll) ? '1' : '0'), \
    (((i) & 0x40ll) ? '1' : '0'), \
    (((i) & 0x20ll) ? '1' : '0'), \
    (((i) & 0x10ll) ? '1' : '0'), \
    (((i) & 0x08ll) ? '1' : '0'), \
    (((i) & 0x04ll) ? '1' : '0'), \
    (((i) & 0x02ll) ? '1' : '0'), \
    (((i) & 0x01ll) ? '1' : '0')

#define PRINTF_BINARY_PATTERN_INT16 \
    PRINTF_BINARY_PATTERN_INT8              PRINTF_BINARY_PATTERN_INT8

#define PRINTF_BYTE_TO_BINARY_INT16(i) \
    PRINTF_BYTE_TO_BINARY_INT8((i) >> 8),   PRINTF_BYTE_TO_BINARY_INT8(i)

#define PRINTF_BINARY_PATTERN_INT32 \
    PRINTF_BINARY_PATTERN_INT16             PRINTF_BINARY_PATTERN_INT16

#define PRINTF_BYTE_TO_BINARY_INT32(i) \
    PRINTF_BYTE_TO_BINARY_INT16((i) >> 16), PRINTF_BYTE_TO_BINARY_INT16(i)

#define PRINTF_BINARY_PATTERN_INT64    \
    PRINTF_BINARY_PATTERN_INT32             PRINTF_BINARY_PATTERN_INT32



void bddisp(unsigned int a)
{
	for (int i = 31; i > -1; i--)
	{
		printf("%d", (a >> i) & 0x1);
		if (!i) break;
		if (!(i % 4)) printf(" ");
	}
	printf("\n");
}

void bddisp_char(unsigned char a)
{
	for (int i = 7; i > -1; i--)
	{
		printf("%d", (a >> i) & 0x1);
		if (!i) break;
		if (!(i % 4)) printf(" ");
	}
	printf("\n");
}

int set_bit(int data, int bit)
{
	return data |= (1 << bit);
}

int invert_bit(int data, int bit)
{
	return data ^= 1<<bit;
}

int clear_bit(int data, int bit)
{
	return data &= ~(1 << bit);
}

int set_area(int data, int bits, int bit)
{
	return data |= (bits << bit);
}

int clear_area(int data, int bits, int bit)
{
	return data &= ~(bits << bit);
}

int check_bit_set(int data, int bit)
{
	return ((data >> bit) & 1 );
}

int check_bit_clear(int data, int bit)
{
	return !((data >> bit) & 1);
}

int write_block(int data, int bits, int value, int bit)
{
	return (data & ~(bits << bit)) | (value << bit); 
	//data &= ~(bits << bit);
	//data |= (value << bit);
	//return data &= ~(bits << bit), data |= (value << bit);
}