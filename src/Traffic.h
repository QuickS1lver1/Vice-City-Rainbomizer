#pragma once
#include "plugin.h"
#include "Config.h"
#include "Functions.h"
#include "ModelInfo.h"
#include "CModelInfo.h"
#include "CStreaming.h"
#include "CPopulation.h"
#include "CWorld.h"
#include "CBoat.h"
#include "CPlane.h"
#include "CHeli.h"
#include "CBike.h"

class Traffic : Functions
{
public:
	static void Initialise();
private:
	static int* ms_numVehiclesLoaded;
	static void AddPoliceCarOccupants(CVehicle* vehicle);
	static int ChooseModelToLoad();
	static int ChooseModel();
	static int ChoosePoliceModel();
	static void* __fastcall FixTrafficVehicles(CVehicle* vehicle, void* edx, int model, char createdBy);
	static void* RandomizeCarPeds(ePedType type, int model, CVector posn, int arg3);
	static void FixEmptyPoliceCars(CVehicle* vehicle);
	static void FixBoatSpawns(CPhysical* entity);
	static void __fastcall PedExitCar(CPed* ped, void* edx);
	static void __fastcall PedEnterCar(CPed* ped, void* edx);
	static void __fastcall SetExitCar(CPed* ped, void* edx, CVehicle* vehicle, int value);
	static int __fastcall FixPedKilledInRCVehicle(CPed* ped, void* edx);
};