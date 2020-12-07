#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Dragonfly_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Dragonfly_Character_BP.Dragonfly_Character_BP_C
// 0x0010 (0x2198 - 0x2188)
class ADragonfly_Character_BP_C : public AInsect_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Dragonfly_C* DinoCharacterStatus_BP_Dragonfly_C1;                      // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UAudioComponent*                             LivingAudio;                                              // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Dragonfly_Character_BP.Dragonfly_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Dragonfly_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
