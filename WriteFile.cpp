#include "WriteFile.h"
#include <sstream>

WriteFile* WriteFile::WriteFile(const char* file_name)
{
   new WriteFile;
   output_file.open(file_name);
   closed = false;
}

void WriteFile::~WriteFile();
{
   close();
   delete WriteFile;
}

void WriteFile::close()
{
   if (!closed)
   {
      output_file.close();
      closed = true;
   }
}

void WriteFile::writeLine(String* line)
{
   if (!closed && line->length() > 0)
   {
      output_file << line->getText() << endl;
   }
}
