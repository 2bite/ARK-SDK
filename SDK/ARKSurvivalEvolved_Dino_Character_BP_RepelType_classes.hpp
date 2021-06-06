#pragma once

// ARKSurvivalEvolved (329.9) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dino_Character_BP_RepelType_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dino_Character_BP_RepelType.Dino_Character_BP_RepelType_C
// 0x0000 (0x2268 - 0x2268)
class ADino_Character_BP_RepelType_C : public ADino_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dino_Character_BP_RepelType.Dino_Character_BP_RepelType_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dino_Character_BP_RepelType(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
