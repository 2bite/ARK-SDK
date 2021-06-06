#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoSettings_Kaiju_Ice_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoSettings_Kaiju_Ice.DinoSettings_Kaiju_Ice_C
// 0x0000 (0x0090 - 0x0090)
class UDinoSettings_Kaiju_Ice_C : public UDinoSettings_Kaiju_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoSettings_Kaiju_Ice.DinoSettings_Kaiju_Ice_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoSettings_Kaiju_Ice(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
