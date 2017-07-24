//#include <stdio.h>
//
//void cal_time(int fh, int fm, int fs, int sh, int sm, int ss);
//
//int main(void)
//{
//	int fh, fm, fs, sh, sm, ss;
//	scanf("%d:%d:%d", &fh, &fm, &fs);
//	scanf("%d:%d:%d", &sh, &sm, &ss);
//	//cal_time(20, 10, 0, 4, 0, 0);
//	//cal_time(4, 40, 0, 20, 20, 0);
////	cal_time(14, 47, 19, 21, 33, 55);
//	cal_time(fh, fm, fs, sh, sm, ss);
//	return 0;
//}
//
//
//void cal_time(int fh, int fm, int fs, int sh, int sm, int ss)
//{
//	int h, m, s;
//
//
//	if (ss < fs)
//	{
//		sm -= 1;
//		ss += 60;
//	}
//
//	if (sm < fm)
//	{
//		sh -= 1;
//		sm += 60;
//	}
//
//	if (sh < fh)
//	{
//		sh += 24;
//	}
//
//	h = sh - fh;
//	m = sm - fm;
//	s = ss - fs;
//	
//	if (sh == fh && sm == fm && ss == fs)
//	{
//		h = 24;
//	}
//
//
//
//	if (s < 0)
//	{
//		s += 60;
//	}
//	if (m < 0)
//	{
//		m += 60;
//		h -= 1;
//	}
//	if (h < 0)
//	{
//		h += 24;
//	}
//
//	printf("%02d:%02d:%02d", h, m, s);
//}
//
//
//void cal_time_as_sec(int fh, int fm, int fs, int sh, int sm, int ss)
//{
//	int ftsec = fh * 60 * 60 + fm * 60 + fs;
//	int stsec = sh * 60 * 60 + sm * 60 + ss;
//	int result = 0;
//
//	if (stsec < ftsec){
//		stsec += 24 * 60 * 60;
//	}
//
//		
//}