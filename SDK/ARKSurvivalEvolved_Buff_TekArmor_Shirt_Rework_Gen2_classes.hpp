#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Shirt_Rework_Gen2_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Shirt_Rework_Gen2.Buff_TekArmor_Shirt_Rework_Gen2_C
// 0x0000 (0x0E68 - 0x0E68)
class ABuff_TekArmor_Shirt_Rework_Gen2_C : public ABuff_TekArmor_Shirt_Rework_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Shirt_Rework_Gen2.Buff_TekArmor_Shirt_Rework_Gen2_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekArmor_Shirt_Rework_Gen2(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
