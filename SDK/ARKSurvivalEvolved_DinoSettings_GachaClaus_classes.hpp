#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_GachaClaus_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_GachaClaus.DinoSettings_GachaClaus_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_GachaClaus_C : public UDinoSettings_Herbivore_Huge_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_GachaClaus.DinoSettings_GachaClaus_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_GachaClaus(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
