#include <ntar.h>

int main()
{
	ntar_file_handle *file_handle;
	int ret_value;


	ret_value = ntar_open("test003.ntar","w",&file_handle);

	if (ret_value == NTAR_SUCCESS)
	{
		ntar_section_handle *section_handle;

		fprintf(stderr, "File created\n");

		ret_value = ntar_create_section(file_handle, &section_handle);

		if (ret_value == NTAR_SUCCESS)
		{
			ntar_block_handle *block_handle;
			interface_description_block data;
			
			fprintf(stderr,"Section created\n");
			
			data.link_type = 1240;
			data.snaplen = 124;
			data.reserved = 0;

			ret_value = ntar_create_block(section_handle, BLOCK_ID_IDB, &data, &block_handle);

			if (ret_value == NTAR_SUCCESS)
			{
				fprintf(stderr,"Block created\n");

				ret_value = ntar_close_block(block_handle);

				if (ret_value == NTAR_SUCCESS)
					fprintf(stderr,"Block closed\n");
				else
					fprintf(stderr,"ERROR closing block: %d\n", ret_value);

			}
			else
				fprintf(stderr,"ERROR creating block: %d\n", ret_value);

			ret_value = ntar_close_section(section_handle);
			if (ret_value == NTAR_SUCCESS)
				fprintf(stderr,"Section closed\n");
			else
				fprintf(stderr,"ERROR closing section: %d\n", ret_value);

		}
		else
			fprintf(stderr,"ERROR creating section: %d\n", ret_value);

		ret_value = ntar_close(file_handle);

		if (ret_value == NTAR_SUCCESS)
			fprintf(stderr,"File closed\n");
		else
			fprintf(stderr,"ERROR closing file: %d\n", ret_value);
	}
	else
		fprintf(stderr,"ERROR creating file: %d\n", ret_value);
	
	return 0;
}
