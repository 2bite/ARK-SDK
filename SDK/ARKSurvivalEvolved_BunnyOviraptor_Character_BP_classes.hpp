#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_BunnyOviraptor_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C
// 0x0008 (0x21F8 - 0x21F0)
class ABunnyOviraptor_Character_BP_C : public AOviraptor_Character_BP_C
{
public:
	class UStaticMeshComponent*                        Hat;                                                      // 0x21F0(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass BunnyOviraptor_Character_BP.BunnyOviraptor_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_BunnyOviraptor_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
