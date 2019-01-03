#include "TreeManager.hh"
#include "TreeManagerHelper.hh"
#include "globals.hh"
#include "G4SystemOfUnits.hh"

TreeManager* TreeManager::instance = nullptr;

TreeManager* TreeManager::Instance()
{
 
  // A new instance of TreeManager is created if it does not exist:
  if (instance == nullptr) 
    {
      instance = new TreeManager();
    }
  
  // The instance of TreeManager is returned:
  return instance;
}

TreeManager::TreeManager()  :
  fTupleid(0),
  fOn(false)//,
  // fFileName("out.root")
{
  G4cout<<"TreeManager::TreeManager()"<<G4endl;
  // fMessenger = new TreeManagerMessenger(this);

}

TreeManager::~TreeManager() 
{
  // if(fMessenger)
  //   delete fMessenger;
}

void TreeManager::Book() 
{ 
  G4AnalysisManager* manager = G4AnalysisManager::Instance();
  
  manager->SetVerboseLevel(1);
  // manager->SetNtupleMerging(true);
  G4String fileName = TreeManagerHelper::Instance()->GetOutFileName();
  
  G4cout<<"Opening outputfile: "<<fileName<<G4endl;
  G4bool fileOpen = manager->OpenFile(fileName);
  if (!fileOpen) {
    G4cout << "\n---> TreeManager::Book(): cannot open " 
           << fileName 
           << G4endl;
    return;
  }

  manager->SetFirstNtupleId(fTupleid);

  //creating a ntuple, containing the information about secondary particles
  manager -> CreateNtuple("tree", "Secondaries");
  fAid     = manager -> CreateNtupleDColumn("A");
  fZid     = manager -> CreateNtupleDColumn("Z");
  fEkid    = manager -> CreateNtupleDColumn("Ek");
  fThetaid = manager -> CreateNtupleDColumn("theta");
  manager -> FinishNtuple();

  fOn = true;
}


void TreeManager::FillSecondaries(const G4int A, const G4int Z, const G4double Ek, const G4double theta)
{
  if(A==0) return;
  if(Z==0) return;
  if(theta<1.7) return;
  if(theta>23.4) return;  

  G4bool toBeSaved=false;
  std::vector<int> As = {1, 2, 3, 4, 6, 7, 7, 9, 10, 11};
  std::vector<int> Zs = {1, 1, 1, 2, 3, 3, 4, 4,  5,  5};
  for(size_t i=0; i<As.size(); i++)
    {
      if(A==As[i] && Z==Zs[i])
	toBeSaved=true;
    }

  if(toBeSaved)
    {
      G4AnalysisManager* manager = G4AnalysisManager::Instance();
      manager -> FillNtupleDColumn(fTupleid, fAid, A);
      manager -> FillNtupleDColumn(fTupleid, fZid, Z);
      manager -> FillNtupleDColumn(fTupleid, fEkid, Ek);
      manager -> FillNtupleDColumn(fTupleid, fThetaid, theta);  
      manager -> AddNtupleRow(fTupleid);  
    }
}
 
void TreeManager::Finish() 
{   
 if (fOn) 
   {
    G4AnalysisManager* manager = G4AnalysisManager::Instance();    
    manager -> Write();
    manager -> CloseFile();  
      
    delete G4AnalysisManager::Instance();
    fOn = false;
   }
}
