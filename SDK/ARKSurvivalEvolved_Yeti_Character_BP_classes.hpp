#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Yeti_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Yeti_Character_BP.Yeti_Character_BP_C
// 0x0008 (0x28F0 - 0x28E8)
class AYeti_Character_BP_C : public ABigfoot_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Yeti_C*     DinoCharacterStatus_BP_Yeti_C1;                           // 0x28E8(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Yeti_Character_BP.Yeti_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Yeti_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
