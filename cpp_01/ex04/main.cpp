# include <iostream>
# include <string>
# include <fstream>

static int	open_streams(std::string filename, std::ifstream& infile, std::ofstream& outfile)
{
	infile.open(filename.c_str());
	if (infile.fail())
		return (std::cout << "Failed to open file: " << filename << std::endl, 0);
	outfile.open((filename + ".replace").c_str());
	if (outfile.fail())
	{
		infile.close();
		std::cout << "Failed to open file: " << filename + ".replace" << std::endl;
		return (0);
	}
	return (1);
}

static void	find_and_replace(std::ifstream& infile, std::ofstream& outfile, std::string s1, std::string s2)
{
	std::string	line;
	std::size_t	found;

	while (std::getline(infile, line))
	{
		found = line.find(s1);
		while (found != std::string::npos)
		{
			line.erase(found, s1.length());
			line.insert(found, s2);
			found = line.find(s1, found + s2.length());
		}
		outfile << line;
		if (!infile.eof())
			outfile << std::endl;
	}
}

int	main(int argc, char *argv[])
{
	std::string	filename;
	std::ifstream	infile;
	std::ofstream	outfile;

	if (argc != 4 || !argv[1][0] || !argv[2][0])
	{
		std::cout << "Usage: ./sed_is_for_losers <filename> <find_string> <replace_string>" << std::endl;
		return (1);
	}
	if (!open_streams(argv[1], infile, outfile))
		return (1);
	find_and_replace(infile, outfile, argv[2], argv[3]);
	outfile.close();
	infile.close();
	return (0);
}
