#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Ramp_Adobe_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ramp_Adobe.BP_Ramp_Adobe_C
// 0x0000 (0x0AE8 - 0x0AE8)
class ABP_Ramp_Adobe_C : public ABase_Ramp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ramp_Adobe.BP_Ramp_Adobe_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Ramp_Adobe(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
