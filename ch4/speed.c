#include <stdio.h>

float megabytes_to_megabits(float megabits);
float get_download_time_secs(float mbs, float file_size_mb);

const float BITS_IN_MEGABITS = 8.0;

int main(void)
{
	float mbs, file_size;
	printf("Enter download speed in Mbs:\n");
	scanf("%f", &mbs);
	printf("Enter size of file in megabytes\n");
	scanf("%f", &file_size);
	printf("At %.2f megabits per second, a file of %.2f megabytes downloads in %.2f seconds\n",
		mbs, file_size, get_download_time_secs(mbs, file_size));
	return 0;
}

float megabytes_to_megabits(float megabytes) {
	return BITS_IN_MEGABITS * megabytes;
}
float get_download_time_secs(float mbs, float file_size_mb) {
	return megabytes_to_megabits(file_size_mb) / mbs;
}