#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Alpha_Leedsichthys_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Alpha_Leedsichthys_Character_BP.Alpha_Leedsichthys_Character_BP_C
// 0x0000 (0x2511 - 0x2511)
class AAlpha_Leedsichthys_Character_BP_C : public ALeedsichthys_Character_BP_C
{
public:

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Alpha_Leedsichthys_Character_BP.Alpha_Leedsichthys_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Alpha_Leedsichthys_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
