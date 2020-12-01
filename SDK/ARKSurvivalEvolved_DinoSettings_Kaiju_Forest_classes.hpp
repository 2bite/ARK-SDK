#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_Forest_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Kaiju_Forest.DinoSettings_Kaiju_Forest_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Kaiju_Forest_C : public UDinoSettings_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Kaiju_Forest.DinoSettings_Kaiju_Forest_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Kaiju_Forest(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
