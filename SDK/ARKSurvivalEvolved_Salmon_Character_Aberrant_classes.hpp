#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Salmon_Character_Aberrant_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Salmon_Character_Aberrant.Salmon_Character_Aberrant_C
// 0x0008 (0x2090 - 0x2088)
class ASalmon_Character_Aberrant_C : public ADino_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Salmon_C*   DinoCharacterStatus_BP_C1;                                // 0x2088(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Salmon_Character_Aberrant.Salmon_Character_Aberrant_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Salmon_Character_Aberrant(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
