#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MEgaMegalodon_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MEgaMegalodon_Character_BP.MegaMegalodon_Character_BP_C
// 0x000F (0x2160 - 0x2151)
class AMegaMegalodon_Character_BP_C : public AMegalodon_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2151(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_AlphaMega_C* DinoCharacterStatus_BP_AlphaMega_C1;                      // 0x2158(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MEgaMegalodon_Character_BP.MegaMegalodon_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaMegalodon_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
