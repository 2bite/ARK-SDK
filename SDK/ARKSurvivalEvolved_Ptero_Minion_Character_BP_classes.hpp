#pragma once

// ARKSurvivalEvolved (301.1) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ptero_Minion_Character_BP_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C
// 0x0008 (0x2118 - 0x2110)
class APtero_Minion_Character_BP_C : public APtero_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Ptero_Minion_C* DinoCharacterStatus_BP_Ptero_Minion_C1;                   // 0x2110(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ptero_Minion_Character_BP.Ptero_Minion_Character_BP_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ptero_Minion_Character_BP(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
