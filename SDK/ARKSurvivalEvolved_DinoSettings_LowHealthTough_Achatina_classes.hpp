#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_LowHealthTough_Achatina_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_LowHealthTough_Achatina.DinoSettings_LowHealthTough_Achatina_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_LowHealthTough_Achatina_C : public UDinoSettings_LowHealthTough_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_LowHealthTough_Achatina.DinoSettings_LowHealthTough_Achatina_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_LowHealthTough_Achatina(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
