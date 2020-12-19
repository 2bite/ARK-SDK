#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_Desert_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Kaiju_Desert.DinoSettings_Kaiju_Desert_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Kaiju_Desert_C : public UDinoSettings_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Kaiju_Desert.DinoSettings_Kaiju_Desert_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Kaiju_Desert(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
