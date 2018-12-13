#include <string>
#include <iostream>
// #include <filesystem> //c++17

#include <boost/filesystem.hpp>
#include <boost/algorithm/string.hpp>
#include <algorithm>

#include <TStyle.h>
#include <TChain.h>

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

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


double deg2rad(const double ang);
double solidAngle(const double ang, const double acceptance);
std::string my_to_string(const double dbl)

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

int main()
{
  const std::string path = "../";
  gStyle->SetOptStat(0);
  gStyle->SetPadBorderMode(0);
  gStyle->SetFrameBorderMode(0);
  
  std::vector<std::string> files = get_all_root_files("incl",path);
  TChain incl_tree("tree","tree");
  for (const auto& file : files)
    {
      std::cout << file <<std::endl;
      incl_chain.AddFile((path+file).c_str());
    }
  incl_chain.SetName("incl_tree");
  std::cout << incl_chain.GetEntries()  <<std::endl;

  std::vector<int> As = {1, 2, 3, 4, 6, 7, 7, 9, 10, 11};
  std::vector<int> Zs = {1, 1, 1, 2, 3, 3, 4, 4,  5,  5};
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

struct path_leaf_string
{
    std::string operator()(const boost::filesystem::directory_entry& entry) const
    {
        return entry.path().leaf().string();
    }
};

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

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

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

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

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

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

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

std::vector<std::string> get_all_root_files(const std::string& prefix, const std::string& path)
{
  std::vector<std::string> files = read_directory(path);
  select_files(files,"root");
  select_files(files,prefix,'_',0);
  return files;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

double deg2rad(const double ang)
{
  return ang*TMath::Pi()/180.;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

double solidAngle(const double ang, const double acceptance)
{
  double Omega = ( TMath::Cos(deg2rad(ang-acceptance))
		   -TMath::Cos(deg2rad(ang+acceptance)) ) *2.*TMath::Pi();
  return Omega;
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......

std::string my_to_string(const double dbl)
{
  //c++98
  // std::ostringstream strs;
  // strs << dbl;
  // std::string str = strs.str();
  // return str;
  return std::to_string(dbl);
}

//....oooOO0OOooo........oooOO0OOooo........oooOO0OOooo........oooOO0OOooo......
