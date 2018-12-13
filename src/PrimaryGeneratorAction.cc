#include "PrimaryGeneratorAction.hh"
#include "G4IonTable.hh"

PrimaryGeneratorAction::PrimaryGeneratorAction(const G4double position)
{
  fParticleGun = new G4ParticleGun();
  fParticleGun->SetParticlePosition(G4ThreeVector(position, 0., 0.));
}


PrimaryGeneratorAction::~PrimaryGeneratorAction()
{
  delete fParticleGun;
}


void PrimaryGeneratorAction::GeneratePrimaries( G4Event* anEvent )
{
    G4ParticleDefinition* particle = G4IonTable::GetIonTable()->GetIon(6, 12, 0.*CLHEP::keV);
  fParticleGun->SetParticleDefinition(particle);
  fParticleGun->SetParticleEnergy(744.*CLHEP::MeV);    
  fParticleGun->SetParticleMomentumDirection(G4ThreeVector(1., 0., 0.));


  fParticleGun->GeneratePrimaryVertex( anEvent );
}

