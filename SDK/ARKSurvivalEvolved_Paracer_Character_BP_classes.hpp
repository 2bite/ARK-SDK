#pragma once

// ARKSurvivalEvolved (332.8) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Paracer_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Paracer_Character_BP.Paracer_Character_BP_C
// 0x0010 (0x2298 - 0x2288)
class AParacer_Character_BP_C : public ADino_Character_BP_C
{
public:
	class UBoxComponent*                               PlatformSaddleBuildArea;                                  // 0x2288(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)
	class UDinoCharacterStatusComponent_BP_Paracer_C*  DinoCharacterStatus_BP_Paracer_C1;                        // 0x2290(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Paracer_Character_BP.Paracer_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Paracer_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
