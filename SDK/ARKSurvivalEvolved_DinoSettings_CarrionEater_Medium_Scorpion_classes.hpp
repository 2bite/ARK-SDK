#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Medium_Scorpion_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_CarrionEater_Medium_Scorpion.DinoSettings_CarrionEater_Medium_Scorpion_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_CarrionEater_Medium_Scorpion_C : public UDinoSettings_CarrionEater_Medium_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_CarrionEater_Medium_Scorpion.DinoSettings_CarrionEater_Medium_Scorpion_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_CarrionEater_Medium_Scorpion(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
