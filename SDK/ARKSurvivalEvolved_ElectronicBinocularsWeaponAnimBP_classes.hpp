#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_ElectronicBinocularsWeaponAnimBP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// AnimBlueprintGeneratedClass ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C
// 0x0000 (0x1218 - 0x1218)
class UElectronicBinocularsWeaponAnimBP_C : public UFPVWeaponAnimBP_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("AnimBlueprintGeneratedClass ElectronicBinocularsWeaponAnimBP.ElectronicBinocularsWeaponAnimBP_C");
		return ptr;
	}


	void ExecuteUbergraph_ElectronicBinocularsWeaponAnimBP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
