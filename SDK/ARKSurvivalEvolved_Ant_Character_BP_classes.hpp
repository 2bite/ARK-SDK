#pragma once

// ARKSurvivalEvolved (318.14) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ant_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ant_Character_BP.Ant_Character_BP_C
// 0x0008 (0x2190 - 0x2188)
class AAnt_Character_BP_C : public AAnt_Character_Base_C
{
public:
	class UDinoCharacterStatusComponent_BP_Ant_C*      DinoCharacterStatus_BP_Ant_C1;                            // 0x2188(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ant_Character_BP.Ant_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ant_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
