#if !defined WRITE_FILE
#define WRITE_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! The class creates a write a file and writes to it.
/*!
 * The class accepts a character array through the constructor.
 */

class WriteFile
{
    private:
	    ofstream output_file;
	    bool closed;
	   
	public:
//! The constructor that accepts the character array to create and open a write file
		WriteFile(const char* file_name);
//! The destructor to close and remove the write file from memory
		~WriteFile();
//! Writes a string to the write file
		void writeLine(String* line);
//! Closes a writefile early or upon deconstruction of WriteFile
		void close();
};



#endif
