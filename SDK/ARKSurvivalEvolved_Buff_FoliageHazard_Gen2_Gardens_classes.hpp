#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_FoliageHazard_Gen2_Gardens_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C
// 0x0000 (0x0A2C - 0x0A2C)
class ABuff_FoliageHazard_Gen2_Gardens_C : public ABuff_FoliageTrap_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_FoliageHazard_Gen2_Gardens.Buff_FoliageHazard_Gen2_Gardens_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_FoliageHazard_Gen2_Gardens(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
