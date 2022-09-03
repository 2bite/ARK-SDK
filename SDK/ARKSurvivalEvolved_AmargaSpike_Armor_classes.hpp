#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_AmargaSpike_Armor_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass AmargaSpike_Armor.AmargaSpike_Armor_C
// 0x0000 (0x1088 - 0x1088)
class AAmargaSpike_Armor_C : public AAmargaSpike_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass AmargaSpike_Armor.AmargaSpike_Armor_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_AmargaSpike_Armor(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
