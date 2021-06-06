#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_CarrionEater_Small_Beetle_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_CarrionEater_Small_Beetle.DinoSettings_CarrionEater_Small_Beetle_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_CarrionEater_Small_Beetle_C : public UDinoSettings_CarrionEater_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_CarrionEater_Small_Beetle.DinoSettings_CarrionEater_Small_Beetle_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_CarrionEater_Small_Beetle(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
