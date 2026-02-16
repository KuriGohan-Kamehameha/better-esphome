/* \copyright 2023 Zorxx Software. All rights reserved.
 * \license This file is released under the MIT License. See the LICENSE file for details.
 * \brief HTTP multipart form data parser test application 
 */
#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include "multipart_parser.h"

#define MAX_BOUNDARY_LENGTH 256

#define ERR(...) fprintf(stderr, __VA_ARGS__)
#define INF(...) fprintf(stderr, __VA_ARGS__)
#define DBG(...)

static int handle_header_field(multipart_parser *p, const char *at, size_t length)
{
   INF("%s: length %lu\n", __func__, length);
   return 0;
}

static int handle_header_value(multipart_parser *p, const char *at, size_t length)
{
   INF("%s: length %lu\n", __func__, length);
   return 0;
}

static int handle_part_data(multipart_parser *p, const char *at, size_t length)
{
   INF("%.*s", (int)length, at);
   return 0;
}

static int handle_part_data_begin(multipart_parser *p)
{
   INF("%s\n", __func__);
   return 0;
}

static int handle_headers_complete(multipart_parser *p)
{
   INF("%s\n", __func__);
   return 0;
}

static int handle_part_data_end(multipart_parser *p)
{
   INF("%s\n", __func__);
   return 0;
}

static int handle_body_end(multipart_parser *p)
{
   INF("%s\n", __func__);
   return 0;
}

static struct multipart_parser_settings callbacks =
{
   .on_header_field = handle_header_field,
   .on_header_value = handle_header_value,
   .on_part_data = handle_part_data,
   .on_part_data_begin = handle_part_data_begin,
   .on_headers_complete = handle_headers_complete,
   .on_part_data_end = handle_part_data_end,
   .on_body_end = handle_body_end,
};

int main(int argc, char *argv[])
{
   const char *filename;
   if(argc < 2)
   {
      ERR("Usage: %s [file]\n", argv[0]);
      return -1;
   }
   filename = argv[1];

   FILE *pFile = fopen(filename, "rb");
   if(NULL == pFile)
   {
      ERR("Failed to open file '%s'\n", filename);
      return -1;
   }

   // Find the boundary
   char boundary[MAX_BOUNDARY_LENGTH];
   char *b = boundary;
   if(fgets(boundary, sizeof(boundary), pFile) == NULL)
   {
      ERR("Failed to find boundary in file '%s'\n", filename);
      fclose(pFile);
      return -1;
   }
   b[strcspn(b, "\r\n")] = '\0';
   INF("Boundary: %s\n", b);
   fseek(pFile, 0, SEEK_SET);

   multipart_parser* parser = multipart_parser_init(b, &callbacks);
   while(!feof(pFile))
   {
     char data[10];
     int length = fread(data, 1, sizeof(data), pFile);
     DBG("Read %u bytes\n", length);

     if(length > 0)
        multipart_parser_execute(parser, data, length);
   }
   INF("Done\n");
   multipart_parser_free(parser);

   return 0;
}
