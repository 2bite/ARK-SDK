#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dodo_Character_BP_Bunny_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C
// 0x0008 (0x2118 - 0x2110)
class ADodo_Character_BP_Bunny_C : public ADodo_Character_BP_C
{
public:
	class UStaticMeshComponent*                        Hat;                                                      // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dodo_Character_BP_Bunny.Dodo_Character_BP_Bunny_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dodo_Character_BP_Bunny(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
