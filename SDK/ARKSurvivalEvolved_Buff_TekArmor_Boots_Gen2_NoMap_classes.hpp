#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Buff_TekArmor_Boots_Gen2_NoMap_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C
// 0x0000 (0x0C00 - 0x0C00)
class ABuff_TekArmor_Boots_Gen2_NoMap_C : public ABuff_TekArmor_Boots_Gen2_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Buff_TekArmor_Boots_Gen2_NoMap.Buff_TekArmor_Boots_Gen2_NoMap_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Buff_TekArmor_Boots_Gen2_NoMap(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
