//random acces 
//display text from random.txt file
#include<fstream>
#include<iostream>
#include<string>
using namespace std;
void main()
{
	//open file
	ifstream infile("random.txt");
	//check file open
	if(!infile)
	{
		cout<<"file does not exist";
	}
	else
	{
		//do the random access
		//declare a local variable
		string data;
		//move cursor to the 5th charecter
		infile.seekg(5);
		//read from the 5th char and until th3e end of line
		getline(infile,data);
		//now display them in console
		cout<<data<<endl;

		//move 8 more bytes in the file
		infile.seekg(8,ios::cur);
		//read the rest of the line
		getline(infile,data);
		//now display them in console
		cout<<data<<endl;

		//move 14 bytes before end of file
		infile.seekg(-14,ios::end);
		//read the rest of the line
		getline(infile,data);
		//now display them in console
		cout<<data<<endl;
	}

	infile.close();

	// Note we have to specify both in and out because we're using fstream
    fstream iofile("random.txt", std::ios::in | std::ios::out);

	// we're going to do this character by character to look for vowels
    char chChar; 

    // While there's still data to process
    while (iofile.get(chChar))
    {
		//use switch to compare vowels (case)
        switch (chChar)
        {
            // If we find a vowel
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
      
            // Back up one character
            iofile.seekg(-1, std::ios::cur);

			//noe write a # over the vowel
            iofile << '#';

            // Now we want to go back to read mode so the next call
            // to get() will perform correctly.  We'll seekg() to the current
            // location because we don't want to move the file pointer.
            iofile.seekg(iofile.tellg(), std::ios::beg);

            break;
        }
    }


	system("pause");
}