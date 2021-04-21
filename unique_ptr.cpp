void foo()
{
	FILE *file;
	errno_t err = fopen_s(&file, "01.txt", "r");
	std::unique_ptr<FILE, int(*)(FILE*)> ptr(file, &fclose);

	if (err)
		return;
}

/////////////////////////////////////////////////////////////////

int close_file(FILE *file)
{
	OutputDebugString(_T("close file.\n"));
	return fclose(file);
}

void foo()
{
	FILE *file;
	errno_t err = fopen_s(&file, "01.txt", "r");
	std::unique_ptr<FILE, int(*)(FILE*)> ptr(file, &close_file);

	if (err)
		return;
}
