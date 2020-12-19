#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_DinoEntry_Trike_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass DinoEntry_Trike.DinoEntry_Trike_C
// 0x0000 (0x0080 - 0x0080)
class UDinoEntry_Trike_C : public UPrimalDinoEntry
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass DinoEntry_Trike.DinoEntry_Trike_C");
		return ptr;
	}


	void ExecuteUbergraph_DinoEntry_Trike(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
