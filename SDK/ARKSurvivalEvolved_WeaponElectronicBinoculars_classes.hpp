#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_WeaponElectronicBinoculars_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass WeaponElectronicBinoculars.WeaponElectronicBinoculars_C
// 0x0000 (0x0E38 - 0x0E38)
class AWeaponElectronicBinoculars_C : public APrimalWeaponElectronicBinoculars
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass WeaponElectronicBinoculars.WeaponElectronicBinoculars_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_WeaponElectronicBinoculars(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
