#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Carrion_Vulture_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Carrion_Vulture.DinoSettings_Carrion_Vulture_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Carrion_Vulture_C : public UDinoSettings_CarrionEater_Small_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Carrion_Vulture.DinoSettings_Carrion_Vulture_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Carrion_Vulture(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
