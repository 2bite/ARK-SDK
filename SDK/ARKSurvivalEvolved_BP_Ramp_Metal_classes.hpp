#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BP_Ramp_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BP_Ramp_Metal.BP_Ramp_Metal_C
// 0x0000 (0x0AE8 - 0x0AE8)
class ABP_Ramp_Metal_C : public ABase_Ramp_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BP_Ramp_Metal.BP_Ramp_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BP_Ramp_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
