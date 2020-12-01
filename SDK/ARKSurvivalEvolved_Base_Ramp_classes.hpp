#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Base_Ramp_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Base_Ramp.Base_Ramp_C
// 0x0000 (0x0AA0 - 0x0AA0)
class ABase_Ramp_C : public ARamp_Base_SM_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Base_Ramp.Base_Ramp_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Base_Ramp(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
