#if !defined READ_FILE
#define READ_FILE

#include "Text.h"

#include <fstream>
using namespace std;

//! The class creates a write a file and writes to it.
/*!
 * The class accepts a character array through the constructor.
 */
 
class ReadFile
{
	private:
		ifstream input_file;
		bool _eof;
		bool closed;
	public:
//! The constructor that accepts the character array to create and open a read file
		ReadFile(const char* file_name);
//! The destructor to close the read file from memory
		~ReadFile();
//! Retreives a string from the readfile
		String* readLine();
//! Checks the eof status of the readfile
		bool eof();
//! Closes the read file
		void close();
		
};




#endif
