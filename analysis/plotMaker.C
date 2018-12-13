#include <string>
#include <iostream>
// #include <filesystem> //c++17

#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <algorithm>

#include <TChain.h>

struct path_leaf_string;

std::vector<std::string> read_directory(const std::string& path);

std::string get_extension(const std::string& filename,
			  const char delimiter='.',
			  const int element=-1);

void select_files(std::vector<std::string>& input,
		  const std::string& extension,
		  const char delimiter='.',
		  const int element=-1);

std::vector<std::string> get_all_root_files(const std::string& prefix,
					    const std::string& path);

int main()
{
  std::vector<std::string> files = get_all_root_files("incl","../");
  TChain incl_chain("tree","tree");
  for (const auto& file : files)
    {
      std::cout << file <<std::endl;
      incl_chain.AddFile(file);
    }
}


struct path_leaf_string
{
    std::string operator()(const boost::filesystem::directory_entry& entry) const
    {
        return entry.path().leaf().string();
    }
};
 
std::vector<std::string> read_directory(const std::string& path)
{
  std::vector<std::string> v;
  boost::filesystem::path p(path);
  boost::filesystem::directory_iterator start(p);
  boost::filesystem::directory_iterator end;
  std::transform(start, end, std::back_inserter(v), path_leaf_string());
  //  return std::filesystem::directory_iterator(path) //c++17
  return v;
}

std::string get_extension(const std::string& filename,
			  const char delimiter,
			  const int element)
{
  std::vector<std::string> splitted;
  boost::split(splitted, filename, [&delimiter](char c){return c == delimiter;});
  //  std::cout << "extension: " <<  splitted.back() << std::endl;
  if(element<0)
    return splitted.back();
  else
    return splitted[element];
}

void select_files(std::vector<std::string>& input,
		  const std::string& extension,
		  const char delimiter,
		  const int element)
{
  input.erase(std::remove_if(input.begin(),input.end(),
			     [&extension,&delimiter,&element](std::string& in)
			     {return get_extension(in,delimiter,element)!=extension;}),
	      input.end());
}


std::vector<std::string> get_all_root_files(const std::string& prefix, const std::string& path)
{
  std::vector<std::string> files = read_directory(path);
  select_files(files,"root");
  select_files(files,prefix,'_',0);
  return files;
}
