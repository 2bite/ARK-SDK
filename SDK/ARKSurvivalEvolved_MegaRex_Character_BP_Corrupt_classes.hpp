#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRex_Character_BP_Corrupt_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaRex_Character_BP_Corrupt.MegaRex_Character_BP_Corrupt_C
// 0x000C (0x21C0 - 0x21B4)
class AMegaRex_Character_BP_Corrupt_C : public ARex_Character_BP_Corrupt_C
{
public:
	unsigned char                                      UnknownData00[0x4];                                       // 0x21B4(0x0004) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_MegaRex_Corrupted_C* DinoCharacterStatus_BP_MegaRex_Corrupted_C1;              // 0x21B8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaRex_Character_BP_Corrupt.MegaRex_Character_BP_Corrupt_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaRex_Character_BP_Corrupt(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
