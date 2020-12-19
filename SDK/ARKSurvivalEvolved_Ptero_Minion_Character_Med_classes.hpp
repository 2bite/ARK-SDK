#pragma once

// ARKSurvivalEvolved (320.18) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "ARKSurvivalEvolved_Ptero_Minion_Character_Med_structs.hpp"

namespace sdk
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// BlueprintGeneratedClass Ptero_Minion_Character_Med.Ptero_Minion_Character_Med_C
// 0x0008 (0x2198 - 0x2190)
class APtero_Minion_Character_Med_C : public APtero_Character_BP_C
{
public:
	class UDinoCharacterStatusComponent_BP_Ptero_Minion_Med_C* DinoCharacterStatus_BP_Ptero_Minion_Med_C1;               // 0x2190(0x0008) (BlueprintVisible, ZeroConstructor, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("BlueprintGeneratedClass Ptero_Minion_Character_Med.Ptero_Minion_Character_Med_C");
		return ptr;
	}


	void UserConstructionScript();
	void ExecuteUbergraph_Ptero_Minion_Character_Med(int EntryPoint);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif
