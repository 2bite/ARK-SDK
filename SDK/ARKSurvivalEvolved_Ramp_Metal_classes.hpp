#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ramp_Metal_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ramp_Metal.Ramp_Metal_C
// 0x0000 (0x0AC0 - 0x0AC0)
class ARamp_Metal_C : public ARamp_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ramp_Metal.Ramp_Metal_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ramp_Metal(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
