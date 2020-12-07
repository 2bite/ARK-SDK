#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_MegaRaptor_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass MegaRaptor_Character_BP.MegaRaptor_Character_BP_C
// 0x000F (0x2558 - 0x2549)
class AMegaRaptor_Character_BP_C : public ARaptor_Character_BP_C
{
public:
	unsigned char                                      UnknownData00[0x7];                                       // 0x2549(0x0007) MISSED OFFSET
	class UDinoCharacterStatusComponent_BP_MegaRaptor_C* DinoCharacterStatus_BP_MegaRaptor_C1;                     // 0x2550(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass MegaRaptor_Character_BP.MegaRaptor_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_MegaRaptor_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
