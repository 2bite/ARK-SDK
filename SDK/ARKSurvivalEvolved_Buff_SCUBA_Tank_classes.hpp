#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_SCUBA_Tank_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_SCUBA_Tank.Buff_SCUBA_Tank_C
// 0x0000 (0x0978 - 0x0978)
class ABuff_SCUBA_Tank_C : public ABuff_Base_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_SCUBA_Tank.Buff_SCUBA_Tank_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_SCUBA_Tank(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
